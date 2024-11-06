NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror -I .
HEADER = libft.h
SRCS =	ft_atoi.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_memmove.c \
	ft_strchr.c \
	ft_strlcpy.c \
	ft_strncmp.c \
	ft_tolower.c \
	ft_bzero.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_memcpy.c \
	ft_memset.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strrchr.c \
	ft_toupper.c \
	ft_putnbr.c

OBJS    = $(SRCS:.c=.o)
 
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c  $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re 
