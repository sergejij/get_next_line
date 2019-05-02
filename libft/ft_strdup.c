/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:51:03 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/15 10:03:47 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	dup = (char*)ft_memalloc(sizeof(char) * len + 1);
	if (!dup)
		return (0);
	len = 0;
	while (str[len] != '\0')
	{
		dup[len] = str[len];
		len++;
	}
	dup[len] = '\0';
	return (dup);
}
