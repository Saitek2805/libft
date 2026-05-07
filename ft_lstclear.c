/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 10:02:19 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/07 11:06:51 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lsttmp;

	if (!lst || !del)
		return ;
	lsttmp = *lst;
	while (*lst)
	{
		lsttmp = (*lsttmp).next;
		ft_lstdelone(*lst, (*del));
		*lst = lsttmp;
	}
	free(*lst);
	*lst = NULL;
}
