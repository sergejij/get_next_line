/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:53:05 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/09 15:28:17 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			counter;
	unsigned char	*str;
	unsigned char	*str2;

	counter = 0;
	str = (unsigned char*)dst;
	str2 = (unsigned char*)src;
	while (counter < n)
	{
		str[counter] = str2[counter];
		counter++;
	}
	return (dst);
}
