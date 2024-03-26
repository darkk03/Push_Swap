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

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

// printf library
# include <stdio.h>
// ----------------

// main

int main(int argc, char **argv);
void	fill_stack(t_list **stack, int argc, char **argv);
int check_params(int argc, char **argv);
void sort(t_list **stack_a, t_list **stack_b);

// libft

void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(int content);
int	ft_lstsize(t_list *lst);
int	ft_wordcount(const char *str, char c);
char	ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strndup(const char *src, size_t n);
char	**ft_split(char const *s, char c);

// utils

int	ft_atoi(const char *str);
void	index_stack(t_list **stack);
t_list	*get_next_min(t_list **stack);
int	get_distance(t_list **stack, int index);
int	get_min(t_list **stack, int val);

// push

int push(t_list **src, t_list **dst);
void pa(t_list **stack_a, t_list **stack_b);
void pb(t_list **stack_a, t_list **stack_b);

// rotate

int	rotate(t_list **stack);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);

// swap

int    swap(t_list **stack);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);

// reverse rotate

int	reverse_rotate(t_list **stack);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

// radix

int	get_max_bits(t_list **stack);
void	radix_sort(t_list **stack_a, t_list **stack_b);

// checker utils

int is_number(char *str);
int is_duplicate(int index, char **argv, int i);
int is_sorted(t_list *stack);

// memory

void	ft_free(char **str);
void ft_free_stack(t_list **stack);
void	ft_exit(char *msg);

// sort 

void 	sort_3(t_list **stack_a);
void 	sort_4(t_list **stack_a, t_list **stack_b);
void	sort_5(t_list **stack_a, t_list **stack_b);

#endif
