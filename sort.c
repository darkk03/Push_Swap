/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 22:31:30 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/24 22:31:30 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_3(t_list **stack_a)
{
    int a;
    int b;
    int c;

    a = (*stack_a)->value;
    b = (*stack_a)->next->value;
    c = (*stack_a)->next->next->value;

    if (a > b && b < c && a < c)
        sa(stack_a);
    else if (a > b && b < c && a > c)
        ra(stack_a);
    else if (a > b && b > c)
    {
        sa(stack_a);
        rra(stack_a);
    }
    else if (a < b && b > c && a < c)
    {
        sa(stack_a);
        ra(stack_a);
    }
    else if (a < b && b > c && a > c)
        rra(stack_a);
}


void sort_4(t_list **stack_a, t_list **stack_b)
{
    int i;
    int size;

    i = 0;
    size = ft_lstsize(*stack_a);
    while (i < size - 3)
    {
        if ((*stack_a)->index == 0)
        {
            pb(stack_a, stack_b);
            i++;
        }
        else
            ra(stack_a);
    }
    sort_3(stack_a);
    while (i > 0)
    {
        pa(stack_a, stack_b);
        i--;
    }
}

void	sort_5(t_list **stack_a, t_list **stack_b)
{
    int	i;
    int	size;

    i = 0;
    size = ft_lstsize(*stack_a);
    while (i < size - 3)
    {
        if ((*stack_a)->index == 0)
        {
            pb(stack_a, stack_b);
            i++;
            size--;
        }
        else
            ra(stack_a);
    }
    sort_3(stack_a);
    while (i > 0)
    {
        pa(stack_a, stack_b);
        i--;
    }
}