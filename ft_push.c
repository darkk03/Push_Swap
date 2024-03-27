/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:09:38 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/18 14:09:38 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push(t_list **src, t_list **dst)
{
	t_list	*tmp;

	if (!*src)
		return (0);
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dst;
	*dst = tmp;
	return (1);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_b, stack_a))
	{
		write(1, "pa\n", 3);
	}
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b))
	{
		write(1, "pb\n", 3);
	}
}
