/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:31:58 by khurtado          #+#    #+#             */
/*   Updated: 2026/04/27 12:32:01 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	size_t	letter1;
	size_t	letter2;

	letter1 = 0;
	letter2 = 0;
	if (little[letter2] == '\0')
		return ((char *)big);
	while (big[letter1] != '\0' && letter1 < size)
	{
		while (big[letter1 + letter2] == little[letter2]
			&& big[letter1 + letter2] != '\0'
			&& (letter1 + letter2 < size))
		{
			letter2++;
			if (little[letter2] == '\0')
				return ((char *) big + letter1);
		}
		letter2 = 0;
		letter1++;
	}
	return (0);
}
