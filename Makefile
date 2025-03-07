NAME = libft.a

CC = cc
C_FLAGS = -Wall -Wextra -Werror
BUILD_DIR = .build

INCLUDES_DIR = ./includes
INCLUDES_FILES = libft.h ft_printf.h lst.h types.h get_next_line.h
INCLUDES = $(addprefix $(INCLUDES_DIR)/, $(INCLUDES_FILES))
		
SRCS_DIR = srcs
SRCS_HELPERS_FILES = is/ft_isalnum.c is/ft_isalpha.c is/ft_isascii.c is/ft_isdigit.c is/ft_isprint.c is/ft_isinbase.c is/ft_isnumber.c is/ft_isspace.c \
		mem/ft_bzero.c mem/ft_calloc.c mem/ft_memchr.c mem/ft_memcmp.c mem/ft_memcpy.c mem/ft_memmove.c mem/ft_memset.c \
		put/ft_putchar_fd.c put/ft_putendl_fd.c put/ft_putnbr_base_fd.c put/ft_putstr_fd.c put/ft_putull_base_fd.c \
		str/ft_split.c str/ft_strchr.c str/ft_strdup.c str/ft_strjoin.c str/ft_strlcat.c str/ft_strlcpy.c str/ft_strlen.c str/ft_strmapi.c str/ft_strncmp.c str/ft_strcmp.c str/ft_strnstr.c str/ft_strrchr.c str/ft_strtrim.c str/ft_substr.c \
		to/ft_atoi_base.c to/ft_itoa_base.c to/ft_tolower.c to/ft_toupper.c \
		lst/ft_lstadd_back.c lst/ft_lstadd_front.c lst/ft_lstclear.c lst/ft_lstdelone.c lst/ft_lstiter.c lst/ft_lstlast.c lst/ft_lstmap.c lst/ft_lstnew.c lst/ft_lstsize.c \
		utils/ft_intlen_base.c utils/ft_handle_free.c utils/ft_handle_free_split.c utils/ft_split_len.c 

SRCS_FTPRINTF_FILES = ft_printf.c \
		callbacks/ft_print_char.c callbacks/ft_print_hex_upper.c callbacks/ft_print_hex.c callbacks/ft_print_int.c callbacks/ft_print_percent.c callbacks/ft_print_pointer.c callbacks/ft_print_string.c callbacks/ft_print_unsigned_int.c                                    

SRCS_GNL_FILES = get_next_line.c skip_file.c

SRCS_HELPERS = $(addprefix $(SRCS_DIR)/helpers/, $(SRCS_HELPERS_FILES))
SRCS_FTPRINTF = $(addprefix $(SRCS_DIR)/ft_printf/, $(SRCS_FTPRINTF_FILES))
SRCS_GNL = $(addprefix $(SRCS_DIR)/gnl/, $(SRCS_GNL_FILES))
SRCS = $(SRCS_HELPERS) $(SRCS_FTPRINTF) $(SRCS_GNL)
OBJS = $(patsubst $(SRCS_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

$(NAME): $(OBJS) 
	ar -rcs $(NAME) $(OBJS) 

all: $(NAME)

$(BUILD_DIR)/%.o: $(SRCS_DIR)/%.c $(INCLUDES) Makefile
	@mkdir -p $(@D)
	$(CC) $(C_FLAGS) -I $(INCLUDES_DIR) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME)

re:	fclean all

norm:
	norminette $(SRCS_DIR) $(INCLUDES_DIR)

.PHONY: all clean fclean re norm