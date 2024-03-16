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


// printf library
# include <stdio.h>
// ----------------

// main

int main(int argc, char **argv);
void ft_setnums(int *num_stack_a, int *num_stack_b, int argc);
void ft_stack_algoritm(long *stack_a, int *num_stack_a, long *stack_b, int *num_stack_b);
void ft_checker(int argc, char **argv, int *num_stack_a, int *num_stack_b);

// memory

void ft_exit(int *num_stack_a, int *num_stack_b);
void ft_free_stack(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b);

// utils

int ft_atoi(char *str);
int ft_strlen(char *str);
int stack_size(int argc, char **argv);

// push

void push_a(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b);
void push_b(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b);

//swap

void swap_a(long *stack_a, int *num_stack_a);
void swap_b(long *stack_b, int *num_stack_b);
void swap_ab(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b);

// rotate

void rotate_a(long *stack_a, int *num_stack_a);
void rotate_b(long *stack_b, int *num_stack_b);
void rotate_ab(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b);

// reverse rotate

void reverse_rotate_a(long *stack_a, int *num_stack_a);

//sorts 5 numbers

void sort_5(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b);
void sorting(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b);
void sorting_a_push1(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b);
void sorting_a_push2(long *stack_a, long *stack_b, int *num_stack_a, int *num_stack_b);

//sorts 3 numbers

void sort_3(long *stack_a, int *num_stack_a);

//parametres checker

int checkparams(long *stack_a, int *num_stack_a);
int numbers_limit(long *stack_a, int *num_stack_a);
int repeated_numbers(long *stack_a, int *num_stack_a);
int stack_is_sorted(long *stack_a, int *num_stack_a);

//utils

int stack_size(int argc, char **argv);
int ft_strlen(char *str);
int ft_atoi(char *str);

// fill stack

void fill_stack(int argc, char **argv, long *stack_a);

#endif
