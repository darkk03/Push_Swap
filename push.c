/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:31:01 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/15 19:31:01 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_a(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b)
{
    if (num_stack_b[0] > 0)
    {
        stack_a[num_stack_a[0]] = stack_b[num_stack_b[0] - 1];
        num_stack_a[0]++;
        num_stack_b[0]--;
    }
}

void push_b(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b)
{
    if (num_stack_a[0] > 0)
    {
        stack_b[num_stack_b[0]] = stack_a[num_stack_a[0] - 1];
        num_stack_b[0]++;
        num_stack_a[0]--;
    }
}