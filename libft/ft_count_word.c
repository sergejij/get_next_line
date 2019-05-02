/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 18:56:33 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/14 19:57:04 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_word(char *s, char c)
{
	size_t	counter;
	size_t	res;
	int		first_word;

	first_word = 0;
	res = 0;
	counter = 0;
	while (s[counter] != '\0')
	{
		if ((s[counter] != c) && (first_word == 0))
		{
			res++;
			first_word = 1;
		}
		else if ((s[counter] == c) && (first_word == 1))
			first_word = 0;
		counter++;
	}
	return (res);
}
