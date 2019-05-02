/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:12:52 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/12 15:39:00 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *destination, const char *source, size_t n)
{
	size_t counter;

	counter = 0;
	while (n != 0)
	{
		if (source[counter] == '\0')
		{
			while (n != 0)
			{
				destination[counter] = '\0';
				counter++;
				n--;
			}
		}
		else
		{
			destination[counter] = source[counter];
			counter++;
			n--;
		}
	}
	return (destination);
}
