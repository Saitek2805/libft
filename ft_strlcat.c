/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:30:58 by khurtado          #+#    #+#             */
/*   Updated: 2026/04/27 12:31:03 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lendest;
	size_t	lensrc;
	size_t	result;
	size_t	counter;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	counter = 0;
	result = size - lendest - 1;
	if (lendest >= size)
		return (size + lensrc);
	while (src[counter] && result--)
	{
		dest[lendest + counter] = src[counter];
		counter++;
	}
	dest[lendest + counter] = '\0';
	return (lendest + lensrc);
}
/*
#include <unistd.h>
#include <stdio.h>
void    ft_putstr(char *str)
{
        while (*str)
        {
                write(1, str, 1);
                str++;
        }
        write(1, "\n", 1);
}

int main()
{
    char src[]="abcd";

    char dest[]="efg";
    ft_strlcat(dest,src,6);
    ft_putstr( dest);
    printf("%ld",ft_strlcat(dest,src,6));

    return 0;
}*/
