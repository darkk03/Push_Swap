/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:41:05 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/13 15:41:05 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_exit(int *num_stack_a, int *num_stack_b)
{
    free(num_stack_a);
    free(num_stack_b);
    write(1, "Error\n", 6);
    exit(0);
}

void ft_free_stack(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b)
{
    free(stack_a);
    free(stack_b);
    free(num_stack_a);
    free(num_stack_b);
    exit(0);
}

