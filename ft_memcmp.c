/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:29:13 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/07 12:23:57 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str2cp;
	unsigned char	*str1cp;
	size_t			counter;

	str2cp = (unsigned char *) s2;
	str1cp = (unsigned char *) s1;
	counter = 0;
	while (counter < n)
	{
		if (str1cp[counter] != str2cp[counter])
			return (str1cp[counter] - str2cp[counter]);
		counter++;
	}
	return (0);
}
