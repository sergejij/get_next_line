/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 12:33:32 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/13 13:29:34 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	counter;
	char	*new_str;

	counter = 0;
	new_str = (char*)malloc(len + 1);
	if (!new_str || !s)
		return (0);
	while (len && s[counter] != '\0')
	{
		new_str[counter++] = s[start++];
		len--;
	}
	new_str[counter] = '\0';
	return (new_str);
}
