/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:52:39 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/14 22:52:39 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void fill_stack(int argc, char **argv, long *stack_a)
{
    int i;

    i = 1;

    while (i < argc)
    {
        stack_a[i - 1] = ft_atoi(argv[i]);
        i++;
    }
}