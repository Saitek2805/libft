/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 12:11:49 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/06 22:38:45 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strres;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	strres = (char *)malloc(sizeof(char) * (len + 1));
	if (!strres)
		return (NULL);
	i = 0;
	while (i < len)
	{
		strres[i] = f(i, s[i]);
		i++;
	}
	strres[i] = '\0';
	return (strres);
}
