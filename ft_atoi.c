/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 09:45:43 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/05 10:30:54 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	cntr;
	int	sign;
	int	result;

	cntr = 0;
	sign = 1;
	result = 0;
	while (str[cntr] == ' ' || (str[cntr] >= 9 && str[cntr] <= 13))
		cntr++;
	if (str[cntr] == '-' || str[cntr] == '+')
	{
		if (str[cntr] == '-')
			sign = -1;
		cntr++;
	}
	while (str[cntr] >= '0' && str[cntr] <= '9')
	{
		result = result * 10 + (str[cntr] - '0');
		cntr++;
	}
	return (result * sign);
}
