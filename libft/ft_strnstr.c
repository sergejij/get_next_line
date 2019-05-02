/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 13:09:30 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/12 15:42:51 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	k = 0;
	if (needle[i] == '\0')
		return ((char*)&haystack[k]);
	while (haystack[i] != '\0' && haystack[0] != '0' && i < len)
	{
		j = 0;
		k = i;
		while (haystack[k] == needle[j] && needle[j] != '\0'
				&& haystack[k] && k < len)
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
