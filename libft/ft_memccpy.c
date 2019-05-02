/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 15:25:52 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/15 16:25:50 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			counter;
	unsigned char	*src_c;
	unsigned char	*dst_c;
	unsigned char	c_c;

	c_c = (unsigned char)c;
	counter = 0;
	src_c = (unsigned char*)src;
	dst_c = (unsigned char*)dst;
	if (n < 1)
		return (0);
	while (src_c[counter] != c_c && counter < n)
	{
		dst_c[counter] = src_c[counter];
		counter++;
	}
	counter = counter == n ? counter - 1 : counter;
	if (src_c[counter] == c_c)
	{
		dst_c[counter] = src_c[counter];
		return (&dst[counter + 1]);
	}
	return (NULL);
}
