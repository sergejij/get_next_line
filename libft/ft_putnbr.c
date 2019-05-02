/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 17:40:50 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/05 15:45:36 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int size;
	int tmp_n;

	tmp_n = n;
	size = 1;
	if (n < 0)
		ft_putchar('-');
	while (tmp_n / 10 != 0)
	{
		size *= 10;
		tmp_n /= 10;
	}
	while (size > 0)
	{
		if (n < 0)
			ft_putchar((n / size * -1) + 48);
		else
			ft_putchar((n / size) + 48);
		n %= size;
		size /= 10;
	}
}
