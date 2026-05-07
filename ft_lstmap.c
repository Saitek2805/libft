/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 10:40:06 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/07 11:43:34 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nodetmp;
	t_list	*lsttmp;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	lsttmp = NULL;
	while (lst)
	{
		tmp = (*f)(lst->content);
		nodetmp = ft_lstnew(tmp);
		if (!nodetmp)
		{
			del(tmp);
			ft_lstclear(&lsttmp, del);
			return (NULL);
		}
		ft_lstadd_back(&lsttmp, nodetmp);
		lst = (*lst).next;
	}
	return (lsttmp);
}
