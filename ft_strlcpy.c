/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:27:04 by gpetrosy          #+#    #+#             */
/*   Updated: 2022/02/17 14:26:05 by gpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	g;
	unsigned int	u;

	u = 0;
	g = 0;
	while (src[u])
		u++;
	if (size < 1)
		return (u);
	while (src[g] && (g < (size - 1)))
	{
		dest[g] = src[g];
		g++;
	}
	dest[g] = '\0';
	return (u);
}
