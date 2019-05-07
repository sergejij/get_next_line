/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <ubartemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 10:58:54 by ubartemi          #+#    #+#             */
/*   Updated: 2019/05/07 12:32:30 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_filling_str2(int ret, char **str, char *tmp, int fd)
{
	char		*tmp2;

	if (ret < 0)
		return (-1);
	if (str[fd][0] == '\0' && ret == 0 && tmp == NULL)
	{
		ft_strdel(&str[fd]);
		return (0);
	}
	tmp2 = str[fd];
	str[fd] = ft_strjoin(str[fd], tmp);
	ft_strdel(&tmp2);
	ft_strdel(&tmp);
	return (1);
}

static int		ft_filling_str(char **str, int fd)
{
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	char		*tmp2;
	int			ret;

	tmp = NULL;
	if (!str[fd])
		str[fd] = ft_strnew(0);
	if (!ft_strchr(str[fd], '\n'))
	{
		while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
		{
			buf[ret] = '\0';
			tmp2 = ft_strjoin(tmp, buf);
			ft_strdel(&tmp);
			tmp = ft_strdup(tmp2);
			ft_strdel(&tmp2);
			if (ft_strchr(buf, '\n'))
				break ;
		}
		return (ft_filling_str2(ret, str, tmp, fd));
	}
	return (1);
}

static int		ft_do_if_next_str(char **line, char **str, int i, int fd)
{
	char			*tmp;
	char			*tmp_tmp;
	int				len_str;

	tmp_tmp = str[fd];
	tmp = ft_strndup(str[fd], i++);
	len_str = ft_strlen(str[fd]);
	str[fd] = ft_strsub(str[fd], i, len_str - i);
	ft_strdel(&tmp_tmp);
	*line = tmp;
	if (str[fd][0] == '\0')
		ft_strdel(&str[fd]);
	return (1);
}

static int		ft_do_if_zero(char **line, char **str, int i, int fd)
{
	char			*tmp;
	char			*tmp_tmp;

	if (i == 0)
		return (0);
	tmp_tmp = str[fd];
	tmp = ft_strndup(str[fd], i);
	ft_strdel(&str[fd]);
	*line = tmp;
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static char		*str[10240];
	int				res_fill;
	int				i;

	if (fd > 10240 || fd < 0 || line == NULL
		|| read(fd, NULL, 0) || BUFF_SIZE < 1)
		return (-1);
	res_fill = ft_filling_str(str, fd);
	i = 0;
	if (res_fill == -1)
		return (-1);
	if (res_fill == 0)
		return (0);
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	if (str[fd][i] == '\0')
		return (ft_do_if_zero(line, str, i, fd));
	if (str[fd][i] == '\n')
		return (ft_do_if_next_str(line, str, i, fd));
	return (1);
}
