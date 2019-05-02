/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 11:50:01 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/13 12:10:34 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		counter;
	char	*new_str;
	char	*s1;

	if (!s)
		return (0);
	s1 = (char*)s;
	counter = 0;
	new_str = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!new_str)
		return (0);
	while (s1[counter] != '\0')
	{
		new_str[counter] = f(s1[counter]);
		counter++;
	}
	new_str[counter] = '\0';
	return (new_str);
}
