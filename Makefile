NAME= prueba
SRCS = main.c
OBJS = $(SRCS:.c=.o)
CC=gcc
%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@
$(NAME): $(OBJS)
	$(CC) $(OBJS) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)
clean:
	$(RM_RF) $(OBJS)
fclean: clean
	$(RM_RF) $(OBJS) $(NAME)
re: fclean all