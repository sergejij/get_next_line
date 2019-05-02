/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 11:19:00 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/15 15:37:21 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int counter;

	counter = 0;
	if (s && f)
	{
		while (s[counter] != '\0')
		{
			f(counter, &s[counter]);
			counter++;
		}
	}
}
