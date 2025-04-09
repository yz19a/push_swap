# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/03 19:45:59 by yaperalt          #+#    #+#              #
#    Updated: 2025/04/09 18:29:52 by yaperalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

# Directories
SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = include/

# Source files
SRC_FILES = main.c algorithm.c check_args.c index.c m_push.c m_reverse.c \
            m_rotate.c m_swap.c sort_stack.c sort_utils.c utils.c utils2.c

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Commands
RM = rm -f
MKDIR = mkdir -p

# ANSI color codes
GREEN = \033[0;32m
YELLOW = \033[0;33m
RESET = \033[0m

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(GREEN)Linking $@$(RESET)"
	@$(CC) $(CFLAGS) -o $@ $^
	@echo "$(GREEN)Executable $(NAME) created!$(RESET)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(MKDIR) $(OBJ_DIR)
	@echo "$(YELLOW)Compiling $<$(RESET)"
	@$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	@echo "$(YELLOW)Cleaning object files...$(RESET)"
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@echo "$(YELLOW)Removing executable...$(RESET)"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
