/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:27:27 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/07 12:30:09 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t sizeelem)
{
	unsigned char	*ptr;
	size_t			counter;

	if (nelem != 0 && sizeelem > (size_t)-1 / nelem)
		return (NULL);
	ptr = malloc(nelem * sizeelem);
	if (!ptr)
		return (NULL);
	counter = 0;
	while (counter < nelem * sizeelem)
		ptr[counter++] = 0;
	return (ptr);
}
