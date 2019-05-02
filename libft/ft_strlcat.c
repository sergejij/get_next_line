/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 15:21:33 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/12 17:00:33 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	res;
	size_t	counter1;
	size_t	counter2;

	counter1 = 0;
	counter2 = 0;
	res = 0;
	while (dst[counter1] != '\0')
		counter1++;
	if (counter1 < size)
	{
		while (counter1 < (size - 1) && src[counter2] != '\0')
			dst[counter1++] = src[counter2++];
		dst[counter1] = '\0';
		while (src[counter2++] != '\0')
			counter1++;
		return (counter1);
	}
	dst[counter1] = '\0';
	while (src[res] != '\0')
		res++;
	return (res + size);
}
