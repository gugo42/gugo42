/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 01:53:59 by gpetrosy          #+#    #+#             */
/*   Updated: 2022/02/11 16:33:02 by gpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	start;
	char	end;

	start = 'a';
	end = 'z';
	while (end > start)
	{
		write(1, &end, 1);
		end--;
	}
	write(1, &end, 1);
}
