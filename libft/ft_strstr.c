/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:49:45 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/12 15:44:53 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (needle[i] == '\0')
		return ((char*)&haystack[k]);
	while (haystack[i] != '\0' && haystack[0] != '0')
	{
		j = 0;
		k = i;
		while (haystack[k] == needle[j] && needle[j] != '\0')
		{
			k++;
			j++;
		}
		if (j > 0 && needle[j] == '\0')
			return ((char*)&haystack[i]);
		i++;
	}
	return (0);
}
