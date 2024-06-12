NAME := ft_display_file
SRC := main.c error.c strings.c

CC = gcc
CFLAGS = -Werror -Wall -Wextra
HEAD_DIR = ./includes/
SRC_FILES = $(SRC:%=./src/%)

$(NAME):
	$(CC) $(CFLAGS) -I$(HEAD_DIR) $(SRC_FILES) -o $(NAME)

all : $(NAME)

clean :
	rm -f ./src/*.o

fclean : clean
	rm -f $(NAME)

re: fclean all
