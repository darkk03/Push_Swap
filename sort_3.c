/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:12:29 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/13 20:12:29 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_3(long *stack_a, int *num_stack_a)
{
    if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2] && stack_a[0] < stack_a[2])
        swap_a(stack_a, num_stack_a);
    else if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2] && stack_a[0] > stack_a[2])
    {
        swap_a(stack_a, num_stack_a);
        reverse_rotate_a(stack_a, num_stack_a);
    }
    else if (stack_a[0] > stack_a[1] && stack_a[1] > stack_a[2])
    {
        swap_a(stack_a, num_stack_a);
        rotate_a(stack_a, num_stack_a);
    }
    else if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2] && stack_a[0] < stack_a[2])
        reverse_rotate_a(stack_a, num_stack_a);
    else if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2] && stack_a[0] > stack_a[2])
        swap_a(stack_a, num_stack_a);
}