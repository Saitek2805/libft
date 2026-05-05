/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 10:27:53 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/05 11:28:12 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_char(int n)
{
	int	counter;
	int	nbrcp;

	nbrcp = n;
	counter = 0;
	if (n < 0)
	{
		counter++;
		nbrcp *= -1;
	}
	while (nbrcp > 0)
	{
		counter++;
		nbrcp = nbrcp / 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int		counter;
	char	*str;
	int		sign;

	sign = 0;
	counter = ft_count_char(n);
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	str = (char *) malloc(counter * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[counter] = '\0';
	while (counter-- > 0)
	{
		str[counter] = n % 10 + 48;
		n = n / 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
