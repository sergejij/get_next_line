/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <ubartemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 16:21:21 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/30 13:07:24 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	fill(char **str, int fd)
{
	char	*tmp;
	char	*tmp_tmp;
	char	buf[BUFF_SIZE + 1];
	int		fd_read;

	if (!str[fd])
	{
		tmp = ft_strnew(0);
		while ((fd_read = read(fd, buf, BUFF_SIZE)) > 0)
		{
			buf[fd_read] = '\0';
			tmp_tmp = ft_strjoin(tmp, buf);
			ft_strdel(&tmp);
			tmp = tmp_tmp;
		}
		if (fd_read < 0)
			return (0);
		str[fd] = ft_strnew(ft_strlen(tmp));
		ft_strncpy(str[fd], tmp, ft_strlen(tmp));
		ft_strdel(&tmp);
	}
	return (1);
}

static int	ft_n(char **str, int fd, int i)
{
	if (str[fd][1] == '\0')
		ft_strdel(&str[fd]);
	else
		str[fd] = ft_strsub(str[fd], (unsigned int)i, ft_strlen(str[fd]));
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char		*str[10864];
	int				i;
	char			*tmp;

	if (fd > 10864 || fd < 0 || !line || BUFF_SIZE < 1 || !(fill(str, fd)))
		return (-1);
	i = 0;
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	tmp = ft_strnew(i);
	ft_strncpy(tmp, (const char*)str[fd], i);
	*line = tmp;
	i++;
	if (str[fd][0] == '\n')
		if (ft_n(str, fd, i))
			return (1);
	if ((!(ft_strchr(str[fd], '\n')) && str[fd] != NULL) || (!**line))
	{
		ft_strdel(&str[fd]);
		return (**line ? 1 : 0);
	}
	str[fd] = ft_strsub(str[fd], (unsigned int)i, ft_strlen(str[fd]));
	return (**line ? 1 : 0);
}
