/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:14:18 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/27 12:42:55 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (lst == NULL)
	{
		return ;
	}
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	list = *lst;
	while (list->next != NULL)
	{
		list = list->next;
	}
	list->next = new;
}
