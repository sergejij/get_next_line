/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <ubartemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 11:54:59 by ubartemi          #+#    #+#             */
/*   Updated: 2019/05/05 11:38:53 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		counter;

	if (!s)
		return (0);
	counter = 0;
	while (s[counter] != '\0' && s[counter] != c)
		counter++;
	if (s[counter] == c)
		return ((char*)&s[counter]);
	else
		return (0);
}
