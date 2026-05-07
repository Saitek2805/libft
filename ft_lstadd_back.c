/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 09:22:50 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/07 09:36:05 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lsttemp;

	if (!lst || !new)
		return ;
	lsttemp = ft_lstlast(*lst);
	if (!lsttemp)
	{
		*lst = new;
		return ;
	}
	lsttemp->next = new;
}
