/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 12:57:01 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/15 16:05:22 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				counter;
	unsigned char		*s1;
	unsigned char		b;

	if (n == 0)
		return (NULL);
	s1 = (unsigned char*)s;
	b = (unsigned char)c;
	counter = 0;
	while (s1[counter] != b && counter < n - 1)
		counter++;
	if (s1[counter] == b)
		return ((void*)&(s1[counter]));
	return (0);
}
