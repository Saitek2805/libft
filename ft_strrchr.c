/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:32:12 by khurtado          #+#    #+#             */
/*   Updated: 2026/04/27 12:54:08 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *ptr, int charac)
{
	unsigned char	character;
	int				counter;

	character = (unsigned char) charac;
	counter = ft_strlen(ptr);
	while (counter > 0)
	{
		if (ptr[counter] == character)
			return ((char *) &ptr[counter]);
		counter--;
	}
	if (ptr[counter] == character)
		return ((char *) &ptr[counter]);
	return (NULL);
}
