/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:16:13 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/27 12:44:29 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_list **stack)
{
	t_list	*head;
	t_list	*second;
	t_list	*third;

	if (!*stack || !(*stack)->next)
		return (0);
	head = *stack;
	second = head->next;
	third = second->next;
	*stack = second;
	second->next = head;
	head->next = third;
	return (1);
}

void	sa(t_list **stack_a)
{
	if (swap(stack_a))
	{
		write(1, "sa\n", 3);
	}
}

void	sb(t_list **stack_b)
{
	if (swap(stack_b))
	{
		write(1, "sb\n", 3);
	}
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	if (swap(stack_a) && swap(stack_b))
	{
		write(1, "ss\n", 3);
	}
}
