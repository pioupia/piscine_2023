SRC_FILES := $(addprefix srcs/,ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)
NAME := libft.a

SRC_DIR := srcs/
HEAD_DIR := includes/

OBJECT_FILES = $(SRC_FILES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

.c.o:
	$(CC) $(CFLAGS) -I $(HEAD_DIR) -c $< -o $(<:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECT_FILES)
	ar rcs $(NAME) $(OBJECT_FILES)

clean :
	rm -f $(OBJECT_FILES)

fclean : clean
	rm -f $(NAME)

re : fclean all
