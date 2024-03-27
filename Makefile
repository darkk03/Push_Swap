#**************************************************************************** #
# #
# :: : :: :: :: ::#
#Makefile : + : : + : : + : #
#+ : + + : + + : + #
#By : aaizenbe < aaizenbe @student .42.fr> + # + + : ++# + #
#+ #+ #+ #+ #+ #+ + #+ #
#Created : 2024 / 03 / 13 14 : 06 : 38 by aaizenbe # + # # + # #
#Updated : 2024 / 03 / 13 14 : 06 : 38 by aaizenbe## # ########.fr #
# #
#**************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC =	main.c ft_lstadd_back.c ft_lstnew.c ft_lstsize.c \
		ft_split.c ft_push.c radix.c utils.c ft_rotate.c \
		mem.c checker_utils.c ft_swap.c ft_reverse_rotate.c \
		sort.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
