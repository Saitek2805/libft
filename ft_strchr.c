/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:30:28 by khurtado          #+#    #+#             */
/*   Updated: 2026/04/27 12:50:49 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *ptr, int charac)
{
	unsigned char	character;
	int				counter;

	character = (unsigned char) charac;
	counter = 0;
	while (ptr[counter] != '\0')
	{
		if (ptr[counter] == character)
			return ((char *) &ptr[counter]);
		counter++;
	}
	if (ptr[counter] == character)
		return ((char *) &ptr[counter]);
	return (NULL);
}
