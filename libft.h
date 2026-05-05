/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:32:59 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/05 12:13:33 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isalnum(int character);
int		ft_isascii(int character);
int		ft_isdigit(int character);
int		ft_isprint(int character);

int		ft_tolower(int letter);
int		ft_toupper(int letter);

void	*ft_calloc(size_t nelem, size_t sizeelem);
void	ft_bzero(void *ptr, size_t size);

void	*ft_memchr(const void *str, int charac, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memset(void *ptr, int character, size_t size);
int		ft_memcmp(const void *str1, const void *str2, size_t size);

char	*ft_strchr(const char *ptr, int charac);
char	*ft_strdup(const char *str);
char	*ft_strnstr(const char *big, const char *little, size_t size);
char	*ft_strrchr(const char *ptr, int charac);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t size);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
