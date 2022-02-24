/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:31:19 by gpetrosy          #+#    #+#             */
/*   Updated: 2022/02/15 18:13:16 by gpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	l;
	int	b;
	int	a;

	l = 0;
	while (l < size - 1)
	{
		b = 0;
		while (b < size - l -1)
		{
			if (tab[b] > tab[a + 1])
			{
				a = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = a;
			}
			b++;
		}
		l++;
	}
}
