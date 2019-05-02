/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 17:11:02 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/10 14:43:17 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	int counter;

	counter = 0;
	while (str1[counter] == str2[counter] && str1[counter] && str2[counter])
		counter++;
	if (str1[counter] == '\0' && str2[counter] == '\0')
		return (0);
	return ((unsigned char)str1[counter] - (unsigned char)str2[counter]);
}
