/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:58:46 by gpetrosy          #+#    #+#             */
/*   Updated: 2022/02/21 19:57:46 by gpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	gurgen;

	if (nb < 0)
		return (0);
	gurgen = 1;
	while (nb > 0)
	{
		gurgen *= nb;
		nb--;
	}
	return (gurgen);
}
