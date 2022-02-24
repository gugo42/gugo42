/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:12:30 by gpetrosy          #+#    #+#             */
/*   Updated: 2022/02/15 22:24:29 by gpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 1;
	if (str[a - 1] >= 'a' && str[a - 1] <= 'z')
	{
		str[a - 1] = str[a - 1] - 'a' + 'A';
	}
	while (str[a] != '\0')
	{
		if (!(str[a - 1] >= 'A' && str[a - 1] <= 'Z')
			&& !(str[a - 1] >= 'a' && str[a - 1] <= 'z')
			&& !(str[a - 1] >= '0' && str[a - 1] <= '9'))
		{
			if (str[a] >= 'a' && str[a] <= 'z')
			{
				str[a] = str[a] - 'a' + 'A';
			}
		}
		else if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] = str[a] - 'A' + 'a';
		}
		++a;
	}
	return (str);
}
