/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 17:16:35 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/10 19:45:29 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			counter;
	unsigned char	*str1;
	unsigned char	*str2;

	str2 = (unsigned char*)src;
	str1 = (unsigned char*)dst;
	counter = 0;
	if (str2 > str1)
	{
		while (counter < len)
		{
			str1[counter] = str2[counter];
			counter++;
		}
	}
	else
	{
		counter += len;
		while (counter != 0)
		{
			str1[counter - 1] = str2[counter - 1];
			counter--;
		}
	}
	return (dst);
}
