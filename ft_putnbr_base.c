/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:32:17 by gpetrosy          #+#    #+#             */
/*   Updated: 2022/02/19 16:40:20 by gpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_ch(int nbr, char *base, int n);
int		check_base(int ba, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int	ba;

	ba = 0;
	ba = check_base(ba, base);
	if (ba != 0)
		print_ch(nbr, base, ba);
}

int	check_base(int ba, char *base)
{
	int	x;
	int	y;

	ba = 0;
	while (base[ba] != '\0')
		ba++;
	if (ba == 0 || ba == 1)
		return (0);
	x = 0;
	while (x < ba)
	{
		if (base[x] < 33 || base[x] > 126)
			return (0);
		if (base[x] == '-' || base[x] == '+')
			return (0);
		y = x;
		while (++y < ba)
		{
			if (base[x] == base[y])
				return (0);
		}
		x++;
	}
	return (ba);
}

void	print_ch(int nbr, char *base, int n)
{
	long int	a;
	char		b[34];
	int			i;
	long int	x;

	x = nbr;
	if (nbr < 0)
	{
		write (1, "-", 1);
		x = (-1) * x;
	}
	i = 0;
	a = 0;
	while (x > 0)
	{
		a = x % n;
		x = (x - x % n) / n;
		b[i++] = base[a];
	}
	while (--i >= 0)
		write (1, &(b[i]), 1);
	if (nbr == 0)
		write (1, &(base[0]), 1);
}
