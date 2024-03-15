/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkparams.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:03:07 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/15 12:03:07 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int stack_is_sorted(long *stack_a, int *num_stack_a)
{
	int		i;
	int		j;
	long	max;

	i = 1;
	j = 0;
	max = stack_a[0];
	while (i < num_stack_a[1])
	{
		if (stack_a[i] > max)
		{
			max = stack_a[i];
			j++;
		}
		i++;
	}
	if (j == num_stack_a[1] - 1)
    {
        write(1, "stack_is_sorted\n", 16);
        return (-1);
    }
	return (0);
}


int repeated_numbers(long *stack_a, int *num_stack_a)
{
    int i;
    int j;

    i = 0;
    while (i < num_stack_a[0])
    {
        j = i + 1;
        while (j < num_stack_a[0])
        {
            if (stack_a[i] == stack_a[j])
            {
                write(1, "repeated_numbers\n", 17);
                return (-1);
            }
            j++;
        }
        i++;
    }
    return (0);
}

int numbers_limit(long *stack_a, int *num_stack_a)
{
    int i;

    i = 0;
    while (i < num_stack_a[0])
    {
        if (stack_a[i] > 2147483647 || stack_a[i] < -2147483648)
        {
            write(1, "limit_error\n", 12);
            return (-1);
        }
        i++;
    }
    return (0);
}

int checkparams(long *stack_a, int *num_stack_a)
{
    if(repeated_numbers(stack_a, num_stack_a) == -1)
        return (-1);
    if(numbers_limit(stack_a, num_stack_a) == -1)
        return (-1);
    if(stack_is_sorted(stack_a, num_stack_a) == -1)
        return (-1);
    return (0);
}