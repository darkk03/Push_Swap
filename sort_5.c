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

    while(num_stack_b[0] != 0)
        sorting(stack_a, stack_b, num_stack_a, num_stack_b);  
} 

void sorting(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b)
{
    if(num_stack_a[0] == 3)
        sorting_a_push1(stack_a, stack_b, num_stack_a, num_stack_b);
    else if(num_stack_a[0] == 4)
        sorting_a_push2(stack_a, stack_b, num_stack_a, num_stack_b);
}

void sorting_a_push1(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b)
{
    if(stack_b[0] < stack_a[0])
        push_a(stack_a, stack_b, num_stack_a, num_stack_b);
    else if ((stack_b[0] > stack_a[0]) && (stack_b[0] < stack_a[1]))
    {
        rotate_a(stack_a, num_stack_a);
        push_a(stack_a, stack_b, num_stack_a, num_stack_b);
        reverse_rotate_a(stack_a, num_stack_a);
    }
    else if ((stack_b[0] > stack_a[1]) && (stack_b[0] < stack_a[2]))
    {
        reverse_rotate_a(stack_a, num_stack_a);
        push_a(stack_a, stack_b, num_stack_a, num_stack_b);
        reverse_rotate_a(stack_a, num_stack_a);
        reverse_rotate_a(stack_a, num_stack_a);
    }
    else if (stack_b[0] > stack_a[2])
    {
        push_a(stack_a, stack_b, num_stack_a, num_stack_b);
        rotate_a(stack_a, num_stack_a);
    }
}

void sorting_a_push2(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b)
{
    if(stack_b[0] < stack_a[0])
        push_a(stack_a, stack_b, num_stack_a, num_stack_b);
    else if ((stack_b[0] > stack_a[0]) && (stack_b[0] < stack_a[1]))
    {
        rotate_a(stack_a, num_stack_a);
        push_a(stack_a, stack_b, num_stack_a, num_stack_b);
        reverse_rotate_a(stack_a, num_stack_a);
    }
    else if ((stack_b[0] > stack_a[1]) && (stack_b[0] < stack_a[2]))
    {
        rotate_a(stack_a, num_stack_a);
        push_a(stack_a, stack_b, num_stack_a, num_stack_b);
        swap_a(stack_a, num_stack_a);
        reverse_rotate_a(stack_a, num_stack_a);
    }
    else if ((stack_b[0] > stack_a[2]) && (stack_b[0] < stack_a[3]))
    {
        reverse_rotate_a(stack_a, num_stack_a);
        push_a(stack_a, stack_b, num_stack_a, num_stack_b);
        rotate_a(stack_a, num_stack_a);
        rotate_a(stack_a, num_stack_a);        
    }
    else if (stack_b[0] > stack_a[3])
    {
        push_a(stack_a, stack_b, num_stack_a, num_stack_b);
        rotate_a(stack_a, num_stack_a);
    }
}




