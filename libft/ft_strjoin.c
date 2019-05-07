/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <ubartemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 13:31:06 by ubartemi          #+#    #+#             */
/*   Updated: 2019/05/05 17:40:23 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*dest;
	unsigned int	l1;
	unsigned int	l2;
	unsigned int	i;

	i = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	dest = (char*)malloc(sizeof(*dest) * (l1 + l2 + 1));
	if (dest == NULL)
		return (NULL);
	while (i < l1)
		dest[i++] = *s1++;
	while (i - l1 < l2)
		dest[i++] = *s2++;
	dest[i] = '\0';
	return (dest);
}
