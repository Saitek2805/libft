/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:02:40 by khurtado          #+#    #+#             */
/*   Updated: 2026/04/27 14:27:20 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	const char	*cpysrc;
	char		*cpydest;

	if (!dest && !src)
		return (NULL);
	cpydest = (char *) dest;
	cpysrc = (const char *) src;
	if (dest > src)
	{
		while (size--)
			cpydest[size] = cpysrc[size];
	}
	else
		ft_memcpy(dest, src, size);
	return (dest);
}
