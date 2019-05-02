/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 14:55:52 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/15 10:15:30 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		counter1;
	size_t		counter2;

	counter1 = 0;
	counter2 = 0;
	while (s1[counter1] != '\0')
		counter1++;
	while (s2[counter2] != '\0' && counter2 < n)
		s1[counter1++] = s2[counter2++];
	s1[counter1] = '\0';
	return (s1);
}
