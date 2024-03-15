/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:13:59 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/13 20:13:59 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate_a(long *stack_a, int *num_stack_a)
{
    long temp;
    int i;

    i = 0;
    temp = stack_a[0];
    while (i < num_stack_a[0] - 1)
    {
        stack_a[i] = stack_a[i + 1];
        i++;
    }
    stack_a[i] = temp;
    for (int i = 0; i < num_stack_a[0]; i++)
        printf("stack_a[%d] = %ld\n", i, stack_a[i]);
    write(1, "ra\n", 3);
}


void rotate_b(long *stack_b, int *num_stack_b)
{
    long temp;
    int i;

    i = 0;
    temp = stack_b[0];
    while (i < num_stack_b[0] - 1)
    {
        stack_b[i] = stack_b[i + 1];
        i++;
    }
    stack_b[i] = temp;
    for (int i = 0; i < num_stack_b[0]; i++)
        printf("stack_b[%d] = %ld\n", i, stack_b[i]);
    write(1, "rb\n", 3);
}

void rotate_ab(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b)
{
    rotate_a(stack_a, num_stack_a);
    rotate_b(stack_b, num_stack_b);
    for (int i = 0; i < num_stack_a[0]; i++)
        printf("stack_a[%d] = %ld\n", i, stack_a[i]);
    for (int i = 0; i < num_stack_b[0]; i++)
        printf("stack_b[%d] = %ld\n", i, stack_b[i]);
    write(1, "rr\n", 3);
}