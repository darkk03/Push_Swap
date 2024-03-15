/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revers_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:23:04 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/14 12:23:04 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void reverse_rotate_a(long *stack_a, int *num_stack_a)
{
    long temp;
    int i;

    i = num_stack_a[0] - 1;
    temp = stack_a[i];
    while (i > 0)
    {
        stack_a[i] = stack_a[i - 1];
        i--;
    }
    stack_a[i] = temp;
    for (int i = 0; i < num_stack_a[0]; i++)
        printf("stack_a[%d] = %ld\n", i, stack_a[i]);
    write(1, "rra\n", 3);
}

void reverse_rotate_b(long *stack_b, int *num_stack_b)
{
    long temp;
    int i;

    i = num_stack_b[0] - 1;
    temp = stack_b[i];
    while (i > 0)
    {
        stack_b[i] = stack_b[i - 1];
        i--;
    }
    stack_b[i] = temp;
    for (int i = 0; i < num_stack_b[0]; i++)
        printf("stack_b[%d] = %ld\n", i, stack_b[i]);
    write(1, "rrb\n", 3);
}

void reverse_rotate_ab(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b)
{
    reverse_rotate_a(stack_a, num_stack_a);
    reverse_rotate_b(stack_b, num_stack_b);
    for (int i = 0; i < num_stack_a[0]; i++)
        printf("stack_a[%d] = %ld\n", i, stack_a[i]);
    for (int i = 0; i < num_stack_b[0]; i++)
        printf("stack_b[%d] = %ld\n", i, stack_b[i]);
    write(1, "rrr\n", 3);
}
