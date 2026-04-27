/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:27:51 by khurtado          #+#    #+#             */
/*   Updated: 2026/04/27 12:27:56 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int character)
{
	if ((character >= 97 && character <= 122)
		|| (character >= 65 && character <= 90)
		|| (character >= 48 && character <= 57))
		return (1);
	else
		return (0);
}
