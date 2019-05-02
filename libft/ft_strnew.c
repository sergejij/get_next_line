/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:03:40 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/15 10:33:40 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	counter;

	counter = 0;
	if (size == (size_t)-1)
		return (NULL);
	str = ft_memalloc(size + 1);
	if (!str)
		return (NULL);
	while (size < counter)
	{
		str[counter] = '\0';
		counter++;
	}
	return (str);
}
