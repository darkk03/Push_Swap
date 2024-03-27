/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:08:39 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/27 12:39:12 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*list;

	if (lst == NULL)
	{
		return (0);
	}
	i = 1;
	list = lst;
	while (list->next != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}
