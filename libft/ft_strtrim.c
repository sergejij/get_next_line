/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 14:18:18 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/18 19:03:25 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_cpy(char *dst, unsigned char *src, int start, int len)
{
	int		counter;

	counter = 0;
	while (src[counter] != '\0' && len >= start)
		dst[counter++] = src[start++];
	dst[counter] = '\0';
}

char			*ft_strtrim(char const *s)
{
	int		counter;
	char	*str;
	int		len;

	if (!s)
		return (0);
	len = ft_strlen((char*)s) - 1;
	counter = 0;
	while (ft_isspace(s[counter]) && s[counter] != '\0')
		counter++;
	while (len > 0 && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t'))
		len--;
	if (len <= 0)
	{
		str = (char*)malloc(sizeof(char) * 1);
		str[0] = '\0';
		return (str);
	}
	str = (char*)malloc(sizeof(char) * len - counter + 2);
	if (!str && len > counter)
		return (str);
	ft_cpy(str, (unsigned char*)s, counter, len);
	return (str);
}
