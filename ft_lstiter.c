/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 10:25:33 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/07 11:07:23 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lsttmp;

	if (!lst || !f)
		return ;
	lsttmp = lst;
	while (lsttmp)
	{
		(*f)(lst->content);
		lsttmp = (*lsttmp).next;
		lst = lsttmp;
	}
}
