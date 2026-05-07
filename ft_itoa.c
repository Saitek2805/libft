/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 10:27:53 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/07 11:57:54 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_char(int n)
{
	int		counter;
	long	nb;

	nb = n;
	counter = 0;
	if (nb <= 0)
		counter++;
	while (nb != 0)
	{
		nb = nb / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int		counter;
	char	*str;
	long	nb;

	nb = n;
	counter = ft_count_char(n);
	str = (char *)malloc(counter + 1);
	if (!str)
		return (NULL);
	str[counter] = '\0';
	if (nb < 0)
		nb = -nb;
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[--counter] = (nb % 10) + 48;
		nb = nb / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
