# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboutami <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 00:21:16 by aboutami          #+#    #+#              #
#    Updated: 2024/10/28 00:21:24 by aboutami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

########################### VARIABLES DECLARATION #############################
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memcpy.c ft_memset.c \
      ft_strlcat.c ft_strlen.c ft_strnstr.c ft_tolower.c ft_strrchr.c ft_toupper.c\
      ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcmp.c ft_memmove.c\
      ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_calloc.c ft_strdup.c \
      ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_striteri.c\
      ft_strmapi.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c

OBJ = $(SRC:.c=.o)

##########################        MAKE ENTRY     ###############################

all: $(NAME) #by default maake starts by the the first Traget.

$(NAME): $(OBJ) #to create libft.a we need object files if they exist run the ar if not search for rule to build it 
	ar rc $(NAME) $(OBJ)

%.o: %.c libft.h Makefile #rule to build .o files from .c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 

