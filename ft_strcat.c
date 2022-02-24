/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:36:23 by gpetrosy          #+#    #+#             */
/*   Updated: 2022/02/19 19:34:57 by gpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	g;
	int	dest_size;

	g = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[g])
	{
		dest[dest_size] = src[g];
		dest_size++;
		g++;
	}
	dest[dest_size] = '\0';
	return (dest);
}
