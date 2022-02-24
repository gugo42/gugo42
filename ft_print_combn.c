/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:41:00 by gpetrosy          #+#    #+#             */
/*   Updated: 2022/02/10 22:23:52 by gpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check_print(int x[], int n)
{
	int	yes;
	int	no;

	yes = 0;
	no = 1;
	while (yes < n - 1)
	{
		if (!(x[yes] < x[yes + 1]))
			no = 0;
		yes++;
	}
	if (no == 1)
	{
		yes = 0;
		while (yes < n)
		{
			ft_putchar(x[yes]);
			yes++;
		}
		if (x[0] != '9' - n + 1)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	create_while(int x[], int k, int n)
{
	if (k == n - 1)
	{
		x[k] = '0';
		while (x[k] <= '9')
		{
			if (n == 9 && x[0] > '1')
				break ;
			ft_check_print(x, n);
			x[k]++;
		}
	}
	else
	{
		x[k] = '0';
		while (x[k] <= '9')
		{
			create_while(x, k + 1, n);
			x[k]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	x[10];

	create_while(x, 0, n);
}
