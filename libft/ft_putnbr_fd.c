/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubartemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:30:19 by ubartemi          #+#    #+#             */
/*   Updated: 2019/04/15 15:28:22 by ubartemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	discharge;
	long int	tmp_n;
	char		c;

	tmp_n = n;
	discharge = ft_discharge(n);
	if (tmp_n < 0)
	{
		ft_putchar_fd('-', fd);
		tmp_n *= -1;
	}
	while (discharge || tmp_n)
	{
		c = tmp_n / discharge + '0';
		ft_putchar_fd(c, fd);
		tmp_n %= discharge;
		discharge /= 10;
	}
}
