/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 13:10:35 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/11 16:45:34 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	counter1;
	int	counter2;

	counter1 = 0;
	counter2 = 0;
	while (s1[counter1] != '\0')
		counter1++;
	while (s2[counter2] != '\0')
		s1[counter1++] = s2[counter2++];
	s1[counter1] = '\0';
	return (s1);
}
