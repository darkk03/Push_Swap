/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:20:13 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/14 12:20:13 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_a(long *stack_a, int *num_stack_a)
{
    long temp;

    if (num_stack_a[0] > 1)
    {
        temp = stack_a[0];
        stack_a[0] = stack_a[1];
        stack_a[1] = temp;
    }
    for (int i = 0; i < num_stack_a[0]; i++)
        printf("stack_a[%d] = %ld\n", i, stack_a[i]);
    write(1, "sa\n", 3);
}

void swap_b(long *stack_b, int *num_stack_b)
{
    long temp;

    if (num_stack_b[0] > 1)
    {
        temp = stack_b[0];
        stack_b[0] = stack_b[1];
        stack_b[1] = temp;
    }
    for (int i = 0; i < num_stack_b[0]; i++)
        printf("stack_b[%d] = %ld\n", i, stack_b[i]);
    write(1, "sb\n", 3);
}

void swap_ab(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b)
{
    swap_a(stack_a, num_stack_a);
    swap_b(stack_b, num_stack_b);
    for (int i = 0; i < num_stack_a[0]; i++)
        printf("stack_a[%d] = %ld\n", i, stack_a[i]);
    for (int i = 0; i < num_stack_b[0]; i++)
        printf("stack_b[%d] = %ld\n", i, stack_b[i]);
    write(1, "ss\n", 3);
}