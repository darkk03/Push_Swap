/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:06:17 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/18 12:06:17 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack(t_list **stack, int argc, char **argv)
{
	t_list	*new;
	char	**args;
	int		i;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	index_stack(stack);
	if (argc == 2)
		ft_free(args);
}

int check_params(int argc, char **argv)
{
    int i;
    long tmp;
    char **args;

    i = 0;

    if (argc == 2)
        args = ft_split(argv[1], ' ');
    else
    {
        args = argv;
        i = 1;
    }
    while (args[i])
    {
        tmp = ft_atoi(args[i]);
        if (tmp > 2147483647 || tmp < -2147483648)
            ft_exit("limit\n");
        if (!is_number(args[i]))
            ft_exit("not_a_number\n");
        if (is_duplicate(tmp, args, i))
            ft_exit("duplicate\n");
        i++;
    }
    if (argc == 2)
        ft_free(args);
    return (0);
}

void sort(t_list **stack_a, t_list **stack_b)
{
    if(ft_lstsize(*stack_a) == 2)
        sa(stack_a);
    else if(ft_lstsize(*stack_a) == 3)
        sort_3(stack_a);
    else if(ft_lstsize(*stack_a) == 4)
        sort_4(stack_a, stack_b);
    else if(ft_lstsize(*stack_a) == 5)
        sort_5(stack_a, stack_b);
    else
        radix_sort(stack_a, stack_b);
}

int main(int argc, char **argv)
{
    t_list **stack_a;
    t_list **stack_b;

	if (argc < 2)
		return (-1);
	check_params(argc, argv);
    stack_a = (t_list **)malloc(sizeof(t_list));
    stack_b = (t_list **)malloc(sizeof(t_list));
    *stack_a = NULL;
    *stack_b = NULL;
    fill_stack(stack_a, argc, argv);
	if (is_sorted(*stack_a))
	{
        write(1, "stack_is_sorted\n", 16);
		ft_free_stack(stack_a);
		ft_free_stack(stack_b);
		return (0);
	}
    sort(stack_a, stack_b);
    while (*stack_a)
	{
		printf("%d\n", (*stack_a)->value);
		*stack_a = (*stack_a)->next;
	}
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
    return (0);
}