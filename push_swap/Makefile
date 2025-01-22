SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = inc/

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

SRC = $(wildcard $(SRC_DIR)*.c) # $(wildcard pattern) > Automatically include all .c files in the current directory 
OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o) #$(var:pattern=replacement)# >Pattern substitution
HEADERS = $(wildcard $(INC_DIR)*.h)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(HEADERS)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re

clean: 
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

