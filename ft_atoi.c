/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:51:32 by gpetrosy          #+#    #+#             */
/*   Updated: 2022/02/19 16:24:05 by gpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> 

int	ft_atoi(char *str)
{
	int	g;
	int	i;
	int	t;

	t = 0;
	i = 0;
	g = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			g = -g;
	while (str[i] >= '0' && str[i] <= '9')
		t = t * 10 + (str[i++] - 48);
	return (t * g);
}
