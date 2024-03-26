/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:42:45 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/23 23:42:45 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_number(char *str)
{
    int i = 0;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

int is_duplicate(int index, char **argv, int i)
{
    i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == index)
			return (1);
		i++;
	}
	return (0);
}

int is_sorted(t_list *stack)
{
    t_list *head = stack;
    while (head && head->next)
    {
        if (head->value > head->next->value)
        {
            return (0);
        }

        head = head->next;
    }
    write(1, "stack_is_sorted\n", 16);
    return (-1);
}