/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:23:26 by khurtado          #+#    #+#             */
/*   Updated: 2026/04/27 12:23:37 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *ptr, size_t size)
{
	unsigned char	*dest;

	dest = ptr;
	while (size != 0)
	{
		*dest = '\0';
		dest++;
		size--;
	}
}
