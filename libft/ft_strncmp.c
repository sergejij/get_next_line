/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:58:53 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/15 15:50:11 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	counter;

	counter = 0;
	if (!str1 && !str2)
		return (0);
	while (str1[counter] == str2[counter]
			&& str1[counter] && str2[counter] && counter < n)
		counter++;
	counter = counter == n ? n - 1 : counter;
	return ((unsigned char)str1[counter] - (unsigned char)str2[counter]);
}
