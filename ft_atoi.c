/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:04:23 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/04 11:33:01 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_has_spaces(int *counter, const char *str)
{
	int	count;

	count = 0;
	while (str[count++] == ' ')
		counter++;
	return (count - 1);
}

static int	ft_is_numeric(const char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] < '0' || str[counter] > '9')
	{
		if ((str[counter] >= '0' && str[counter] <= '9')
			|| str[counter] == '-' || str[counter] == ' '
			|| str[counter] == '+')
			counter++;
		else
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int	counter;
	int	number;
	int	is_negative;

	counter = 0;
	number = 0;
	is_negative = 0;
	if (!(ft_is_numeric(str)))
		return (0);
	counter = ft_has_spaces(&counter, str);
	if (str[counter] == '-')
	{
		counter++;
		is_negative = 1;
	}
	else if (str[counter] == '+')
		counter++;
	while (str[counter] != '\0' && str[counter] != ' '
		&& (str[counter] >= '0' && str[counter] <= '9'))
		number = number * 10 + (str[counter] - 48);
	if (is_negative)
		number = number * -1;
	return (number);
}
