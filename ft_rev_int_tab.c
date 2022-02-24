/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:58:44 by gpetrosy          #+#    #+#             */
/*   Updated: 2022/02/14 14:30:52 by gpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	m;
	int	det;

	m = -1;
	while (++m < --size)
	{
		det = tab[m];
		tab[m] = tab[size];
		tab[size] = det;
	}
}
