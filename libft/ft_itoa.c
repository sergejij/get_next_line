/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 12:59:55 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/15 14:31:00 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_record(unsigned int number, char *result, int len)
{
	if (number == 0)
		result[0] = number + '0';
	while (number > 0)
	{
		result[len - 1] = number % 10 + '0';
		number /= 10;
		len--;
	}
}

char		*ft_itoa(int n)
{
	int				len;
	int				counter;
	unsigned int	number;
	char			*result;

	len = ft_lennum(n);
	counter = 0;
	result = (char*)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	result[len] = '\0';
	if (n < 0)
	{
		result[counter] = '-';
		number = n * (-1);
		counter++;
	}
	else
		number = n;
	ft_record(number, result, len);
	return (result);
}
