NAME = libft.a
CC = gcc -c
INCLUDE = libft.h
FLAGS = -Wall -Wextra -Werror
AR = ar rc
SRCS = *.c
OBJ = *.o

all: $(NAME)

$(NAME): 
	$(CC)  $(FLAGS) $(SRCS)
	$(AR)  $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all