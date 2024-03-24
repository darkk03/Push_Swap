/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:20:43 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/19 16:20:43 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_list **stack)
{
    t_list	*tmp;
    t_list	*head;

    if (!*stack || !(*stack)->next)
        return (0);
    tmp = *stack;
    head = *stack;
    *stack = (*stack)->next;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = head;
    head->next = NULL;
    return (1);
}

void	ra(t_list **stack_a)
{
    if (rotate(stack_a))
    {
        write(1, "ra\n", 3);
    }
}

void	rb(t_list **stack_b)
{
    if (rotate(stack_b))
    {
        write(1, "rb\n", 3);
    }
}

void	rr(t_list **stack_a, t_list **stack_b)
{
    if (rotate(stack_a) && rotate(stack_b))
    {
        write(1, "rr\n", 3);
    }
}