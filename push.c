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
    int i;

    num_stack_a[0]++;
    i = num_stack_a[0] - 1;

    while (i > 0)
    {
        stack_a[i] = stack_a[i - 1];
        i--;
    }

    stack_a[0] = stack_b[0];
    i = 0;
    while (i < num_stack_b[0])
    {
        stack_b[i] = stack_b[i + 1];
        i++;
    }
    num_stack_b[0]--;
    if(num_stack_b[0] == 0)
        stack_b[0] = 0;
    
    for (int i = 0; i < num_stack_a[0]; i++)
        printf("stack_a[%d] = %ld\n", i, stack_a[i]);
    
    write(1, "pa\n", 3);
}

void push_b(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b)
{
	int	i;

    num_stack_b[0]++;
	i = num_stack_b[0] - 1;
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = stack_a[0];
	i = 0;
	while (i < num_stack_a[0])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	num_stack_a[0]--;
	if (num_stack_a[0] == 0)
		stack_a = NULL;
    
    for (int i = 0; i < num_stack_b[0]; i++)
        printf("stack_b[%d] = %ld\n", i, stack_b[i]);
    
    write(1, "pb\n", 3);
}
