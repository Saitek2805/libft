/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:31:43 by khurtado          #+#    #+#             */
/*   Updated: 2026/04/27 14:07:49 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	counter;

	counter = 0;
	while ((counter < size) && (str1[counter] != '\0'
			|| str2[counter] != '\0'))
	{
		if ((unsigned char) str1[counter]
			!= (unsigned char) str2[counter])
		{
			if ((unsigned char) str1[counter]
				> (unsigned char) str2[counter])
				return (1);
			else
				return (-1);
		}
		counter++;
	}
	return (0);
}
