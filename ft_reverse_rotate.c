/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:37:04 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/27 12:43:49 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*head;
	t_list	*last;

	if (!*stack || !(*stack)->next)
		return (0);
	tmp = *stack;
	head = *stack;
	while (tmp->next)
	{
		last = tmp;
		tmp = tmp->next;
	}
	last->next = NULL;
	tmp->next = head;
	*stack = tmp;
	return (1);
}

void	rra(t_list **stack_a)
{
	if (reverse_rotate(stack_a))
	{
		write(1, "rra\n", 4);
	}
}

void	rrb(t_list **stack_b)
{
	if (reverse_rotate(stack_b))
	{
		write(1, "rrb\n", 4);
	}
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	if (reverse_rotate(stack_a) && reverse_rotate(stack_b))
	{
		write(1, "rrr\n", 4);
	}
}
