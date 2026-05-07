/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 09:07:15 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/07 09:14:32 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*lstcpy;

	counter = 0;
	lstcpy = lst;
	if (!lst)
		return (0);
	while (lstcpy)
	{
		lstcpy = lstcpy->next;
		counter++;
	}
	return (counter);
}
