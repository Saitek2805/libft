/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:29:13 by khurtado          #+#    #+#             */
/*   Updated: 2026/04/27 12:29:17 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	unsigned char	*str2cp;
	unsigned char	*str1cp;
	size_t			counter;

	str2cp = (unsigned char *) str2;
	str1cp = (unsigned char *) str1;
	counter = 0;
	while ((counter < size) && (str1cp[counter] != '\0'
			|| str2cp[counter] != '\0'))
	{
		if (str1cp[counter] != str2cp[counter])
			return (str1cp[counter] - str2cp[counter]);
		counter++;
	}
	return (0);
}
