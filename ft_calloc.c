/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:27:27 by khurtado          #+#    #+#             */
/*   Updated: 2026/04/27 12:27:34 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nelem, size_t sizeelem)
{
	unsigned char	*ptr;
	size_t			counter;

	ptr = malloc(nelem * sizeelem);
	if (!ptr)
		return (NULL);
	counter = 0;
	while (counter < nelem * sizeelem)
		ptr[counter++] = 0;
	return (ptr);
}
