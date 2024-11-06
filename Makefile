NAME = libft.a
SRC_DIR = ./
INC_DIR = ./
CC = gcc
FLAGS = -Wall -Wextra -Werror
HEADER = $(INC_DIR)/libft.h
SRCS =	$(SRC_DIR)/ft_atoi.c \
	$(SRC_DIR)/ft_isalnum.c \
	$(SRC_DIR)/ft_isascii.c \
	$(SRC_DIR)/ft_isprint.c \
	$(SRC_DIR)/ft_memmove.c \
	$(SRC_DIR)/ft_strchr.c \
	$(SRC_DIR)/ft_strlcpy.c \
	$(SRC_DIR)/ft_strncmp.c \
	$(SRC_DIR)/ft_tolower.c \
	$(SRC_DIR)/ft_bzero.c \
	$(SRC_DIR)/ft_isalpha.c \
	$(SRC_DIR)/ft_isdigit.c \
	$(SRC_DIR)/ft_memcpy.c \
	$(SRC_DIR)/ft_memset.c \
	$(SRC_DIR)/ft_strlcat.c \
	$(SRC_DIR)/ft_strlen.c \
	$(SRC_DIR)/ft_strrchr.c \
	$(SRC_DIR)/ft_toupper.c \
	$(SRC_DIR)/ft_putnbr \

OBJS    = $(SRCS:.c=.o)
 
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c  $< -o $@ -I $(INC_DIR)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re 
