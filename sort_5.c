/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:02:25 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/15 19:02:25 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_5(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b) 
{
    push_b(stack_a, stack_b, num_stack_a, num_stack_b);
    push_b(stack_a, stack_b, num_stack_a, num_stack_b);
    sort_3(stack_a, num_stack_a);

    if (stack_b[0] < stack_b[1])
        push_a(stack_b, num_stack_b);
    
}   