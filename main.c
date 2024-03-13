/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:06:40 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/13 14:06:40 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_cheker(int argc, char **argv, int *num_stack_a, int *num_stack_b)
{
    int i;
    int j;

    i = 1;
    j = 0;

    if(argc < 2)
        ft_exit(num_stack_a, num_stack_b);
    while(i < argc)
    {
        j = 0;
        while(argv[i][j] != '\0')
        {
            if((argv[i][j] < '0' || argv[i][j] > '9') && argv[i][j] != ' ' && argv[i][j] != '-')
                ft_exit(num_stack_a, num_stack_b);
            j++;
        }
        i++;
    }
}

void ft_stack_algoritm(int argc, char **argv, long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b)
{
	if ((num_stack_a[1] == 2) && (stack_a[0] > stack_a[1]))
		rotate_a(stack_a, num_stack_a);
	else if (num_stack_a[1] == 3)
		sort_3(stack_a, num_stack_a);
	else if (num_stack_a[1] == 5)
		sort_5(stack_a, stack_b, num_stack_a, num_stack_b);
	else
		sort(stack_a, stack_b, num_stack_a, num_stack_b);
}

int main(int argc, char **argv)
{
    long *stack_a;
    long *stack_b;
    int *num_stack_a;
    int *num_stack_b;

    num_stack_a = (int *)malloc(2 * sizeof(int));
    num_stack_b = (int *)malloc(sizeof(int));
    ft_cheker(argc, argv, num_stack_a, num_stack_b);
    stack_a = (long *)malloc(sizeof(long) * stack_size(argc, argv));
    stack_b = (long *)malloc(sizeof(long) * stack_size(argc, argv));
    ft_stack_algoritm(argc, argv, stack_a, stack_b, num_stack_a, num_stack_b);
    ft_free_stack(stack_a, stack_b, num_stack_a, num_stack_b);
    return (0);
}