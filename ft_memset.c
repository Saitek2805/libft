/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:30:10 by khurtado          #+#    #+#             */
/*   Updated: 2026/04/27 12:30:14 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *ptr, int character, size_t size)
{
	unsigned char	*dest;

	dest = ptr;
	while (size != 0)
	{
		*dest = character;
		dest++;
		size--;
	}
	return (ptr);
}
