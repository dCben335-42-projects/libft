NAME = libft.a

# Compiler and flags
CC = cc
C_FLAGS = -Wall -Wextra -Werror

# opt
RM = rm -rf
MKDIR = mkdir -p
BUILD_DIR   = ./.build

# configurations
CONF_DIR   = ./config
CONF_MK_INCLUDES = $(CONF_DIR)/includes.mk
CONF_MK_SOURCES = $(CONF_DIR)/sources.mk

# includes
INCLUDES_DIR = ./includes
INCLUDES_FILES :=
-include $(CONF_MK_INCLUDES)

INCLUDES = $(addprefix $(INCLUDES_DIR)/, $(INCLUDES_FILES))
INCLUDES_FLAGS = -I $(INCLUDES_DIR)

# sources
SRC_DIR		= ./srcs
SRC_FILES	:=
-include $(CONF_MK_SOURCES)

SRC         = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ 		= $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRC))

$(NAME): $(OBJ) 
	ar -rcs $(NAME) $(OBJ) 

all: $(NAME)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDES) Makefile
	@mkdir -p $(@D)
	$(CC) $(C_FLAGS) -I $(INCLUDES_DIR) -c $< -o $@

clean:
	$(RM) $(BUILD_DIR)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

norm:
	norminette $(SRC) $(INCLUDES)

gen: 
	@$(MKDIR) $(CONF_DIR)
	@echo "Generating includes.mk..."
	@./config/generate_mk.sh $(INCLUDES_DIR) "*.h" $(CONF_MK_INCLUDES) INCLUDES_FILES
	@echo "Generating sources.mk..."
	@./config/generate_mk.sh $(SRC_DIR) "*.c" $(CONF_MK_SOURCES) SRC_FILES
	$(MAKE)

.PHONY: all clean fclean re norm