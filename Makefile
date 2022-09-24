# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 17:43:52 by dolvin17          #+#    #+#              #
#    Updated: 2022/09/16 18:24:31 by dolvin17         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= so-long
SRCS = main.c
MINILIBX = libmlx.a
OBJS = $(SRCS:.c=.o)
CC=gcc
RM_RF = rm -rf
%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@
all: $(NAME)

$(NAME): $(MINILIBX) $(OBJS)
	@echo $(NAME)
	$(CC) $(OBJS) $(MINILIBX) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)
$(MINILIBX):
	@echo $(MINILIBX)
	@make -C $(dir $(MLX))
	@echo "	- MINILIBX compiled"

clean:
	$(RM_RF) $(OBJS)
fclean: clean
	$(RM_RF) $(OBJS) $(NAME)
re: fclean all
.PHONY: clean fclean all bonus re
