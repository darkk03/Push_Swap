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
    free(temp);
    write(1, "ra\n", 3);
}