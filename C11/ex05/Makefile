SRC := atoi.c console.c main.c operations.c 
HEADER_DIR := .
NAME := do-op

CC = cc
CFLAGS = -Wall -Wextra -Werror

$(NAME):
	$(CC) $(CFLAGS) -I$(HEADER_DIR) $(SRC) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(SRC:.c=.o)

fclean : clean
	rm -f $(NAME)

re : fclean all
