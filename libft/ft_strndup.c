/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 22:23:25 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/18 22:35:25 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char			*s2;
	unsigned int	counter;

	s2 = (char*)malloc(sizeof(char) * (n + 1));
	if (!s2)
		return (NULL);
	counter = 0;
	while (s1[counter] && counter < n)
	{
		s2[counter] = s1[counter];
		counter++;
	}
	s2[counter] = '\0';
	return (s2);
}
