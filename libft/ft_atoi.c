/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 16:02:17 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/13 18:26:18 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				counter;
	long long int	result;
	int				sign;

	sign = 1;
	result = 0;
	counter = 0;
	while ((str[counter] > 7 && str[counter] < 14) || str[counter] == ' ')
		counter++;
	if (str[counter] == '-')
		sign = -1;
	if (str[counter] == '-' || str[counter] == '+')
		counter++;
	while (str[counter] > 47 && str[counter] < 58)
	{
		result = (result * 10) + (int)str[counter] - 48;
		if (sign == -1 && result < 0)
			return (0);
		if (sign == 1 && result < 0)
			return (-1);
		counter++;
	}
	return (result * sign);
}
