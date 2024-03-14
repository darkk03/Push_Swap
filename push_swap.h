/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:06:55 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/03/13 14:06:55 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>


//-----
# include <stdio.h>
//-----


void ft_stack_algoritm(long *stack_a, int *num_stack_a);
void ft_checker(int argc, char **argv, int *num_stack_a, int *num_stack_b);
void ft_exit(int *num_stack_a, int *num_stack_b);
void ft_free_stack(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b);
void reverse_rotate_a(long *stack_a, int *num_stack_a);
void rotate_a(long *stack_a, int *num_stack_a);
void rotate_b(long *stack_b, int *num_stack_b);
void rotate_ab(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b);
void sort_3(long *stack_a, int *num_stack_a);
void swap_a(long *stack_a, int *num_stack_a);
void ft_setnums(int *num_stack_a, int *num_stack_b, int argc);
void fill_stack(int argc, char **argv, long *stack_a);




//utils

int stack_size(int argc, char **argv);
int ft_strlen(char *str);
int ft_atoi(char *str);

#endif
