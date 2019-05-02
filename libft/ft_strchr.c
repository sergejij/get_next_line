/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 11:54:59 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/09 15:30:35 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		counter;

	counter = 0;
	while (s[counter] != '\0' && s[counter] != c)
		counter++;
	if (s[counter] == c)
		return ((char*)&s[counter]);
	else
		return (0);
}
