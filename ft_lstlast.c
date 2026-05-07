/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 09:17:14 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/07 10:00:52 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lstcpy;

	if (!lst)
		return (0);
	lstcpy = lst;
	while (lstcpy->next)
	{
		lstcpy = lstcpy->next;
	}
	return (lstcpy);
}
