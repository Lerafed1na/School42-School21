NAME = ft_display_file
SRC = main.c
HEADER = includes/
OBJ = main.o
FLAG = -Wall -Wextra -Werror

all:
	gcc $(FLAG) -I $(HEADER) -c $(SRC)
	gcc $(OBJ) -o ft_display_file

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
