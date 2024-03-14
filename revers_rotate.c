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
    write(1, "rra\n", 3);
}
