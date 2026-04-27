/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:28:55 by khurtado          #+#    #+#             */
/*   Updated: 2026/04/27 14:34:07 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int charac, size_t size)
{
	unsigned char	character;
	unsigned char	*strcp;
	size_t			counter;

	character = (unsigned char) charac;
	strcp = (unsigned char *) str;
	counter = 0;
	while (counter < size)
	{
		if (strcp[counter] == character)
			return ((void *) &strcp[counter]);
		counter++;
	}
	return (NULL);
}
