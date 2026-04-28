/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 09:55:57 by khurtado          #+#    #+#             */
/*   Updated: 2026/04/28 10:33:54 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	size1;
	unsigned int	size2;
	char			*strres;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	strres = malloc(size1 + size2 + 1);
	if (!strres)
		return (NULL);
	ft_strlcpy(strres, s1, size1 + 1);
	ft_strlcpy(strres + size1, s2, size2 + 1);
	return (strres);
}
