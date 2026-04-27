/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:29:27 by khurtado          #+#    #+#             */
/*   Updated: 2026/04/27 12:29:44 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	const char	*cpysrc;
	char		*cpydest;
	size_t		counter;

	counter = 0;
	if (!src && !dest)
		return (NULL);
	cpydest = (char *) dest;
	cpysrc = (const char *) src;
	while (counter < size)
	{
		cpydest[counter] = cpysrc[counter];
		counter++;
	}
	return (dest);
}
