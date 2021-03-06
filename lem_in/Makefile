# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wned <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/17 15:15:05 by wned              #+#    #+#              #
#    Updated: 2019/08/17 15:15:11 by wned             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= lem-in
NAME_VIS		= visual
NAME_CHECKER	= checker
FLAGS			= -g -Wall -Werror -Wextra

LIBFT_DIR		= ./libft
SRC_DIR 		= ./src
INC_DIR 		= ./includes
OBJ_DIR 		= ./obj

SRC				=	find_way.c \
					list_add.c \
					list2.c \
					list3.c \
					reader1.c \
					reader2.c \
					reader3.c \

MAIN			=	main.c
VISUAL			=	vizual.c \
					read_ant.c \
					vizual2.c

CHECKER			=	chek.c

OBJS			= $(addprefix $(OBJ_DIR)/,$(SRC:%.c=%.o))
MAIN_OBJ		= $(addprefix $(OBJ_DIR)/,$(MAIN:%.c=%.o))
VIS_OBJ			= $(addprefix $(OBJ_DIR)/,$(VISUAL:%.c=%.o))
CHECKER_OBJ		= $(addprefix $(OBJ_DIR)/,$(CHECKER:%.c=%.o))
LIBFT			= $(LIBFT_DIR)/libft.a

all: $(NAME) $(NAME_VIS) $(NAME_CHECKER)

$(OBJ_DIR):
	@echo "\033[33mMaking binaries\033[0m"
	@mkdir -p $(OBJ_DIR)

$(LIBFT):
	@make -C libft

$(NAME): $(LIBFT) $(OBJ_DIR) $(OBJS) $(MAIN_OBJ)
	@echo "\033[33mCompiling ./lem-in\033[0m"
	@gcc $(LIBFT) $(FLAGS) -I$(INC_DIR) $(OBJS) $(MAIN_OBJ) -o $(NAME)

$(NAME_VIS): $(LIBFT) $(OBJ_DIR) $(OBJS) $(VIS_OBJ)
	@echo "\033[33mCompiling ./visual\033[0m"
	@gcc $(LIBFT) $(FLAGS) -I$(INC_DIR) $(OBJS) -lmlx -framework OpenGL -framework Appkit $(VIS_OBJ) -o $(NAME_VIS)

$(NAME_CHECKER): $(LIBFT) $(OBJ_DIR) $(OBJS) $(CHECKER_OBJ)
	@echo "\033[33mCompiling ./checker\033[0m"
	@gcc $(LIBFT) $(FLAGS) -I$(INC_DIR) $(OBJS) $(CHECKER_OBJ) -o $(NAME_CHECKER)


$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@gcc $(FLAGS) -c $< -I$(INC_DIR) -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "\033[33mDeleting project binaries\033[0m"
	@make -C libft clean

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(NAME_VIS)
	@echo "\033[33mDeleting project\033[0m"
	@make -C libft fclean

re: fclean all

norm:
	@make -C libft norm
	@norminette $(SRC_DIR) $(INC_DIR)

.PHONY: all clean fclean re norm
