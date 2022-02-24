/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbnr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:14:35 by gpetrosy          #+#    #+#             */
/*   Updated: 2022/02/12 23:28:28 by gpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	positive_nbrs(int nb)
{
	if (nb >= 10)
	{
		positive_nbrs(nb / 10);
		positive_nbrs(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
			positive_nbrs(nb);
		}
		else
			positive_nbrs(nb);
	}
}
