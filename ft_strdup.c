/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:30:46 by khurtado          #+#    #+#             */
/*   Updated: 2026/04/27 12:30:49 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*strcp;

	strcp = malloc(ft_strlen(str) + 1);
	ft_strlcpy(strcp, str, ft_strlen(str) + 1);
	return (strcp);
}
