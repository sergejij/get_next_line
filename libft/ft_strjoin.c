/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 13:31:06 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/13 15:59:03 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*ss1;
	char	*ss2;
	int		counter;
	int		counter2;

	if (!s1 || !s2)
		return (0);
	ss1 = (char*)s1;
	ss2 = (char*)s2;
	str = (char*)malloc(sizeof(char) * (ft_strlen(ss1) + ft_strlen(ss2) + 1));
	if (!str)
		return (0);
	counter = 0;
	counter2 = 0;
	while (ss1[counter] != '\0')
	{
		str[counter] = ss1[counter];
		counter++;
	}
	while (ss2[counter2] != '\0')
		str[counter++] = ss2[counter2++];
	str[counter] = '\0';
	return (str);
}
