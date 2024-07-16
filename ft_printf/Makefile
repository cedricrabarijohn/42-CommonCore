CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIB = libftprintf.a
EXEC = test_ft_printf

SRCS = ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putunbr.c ft_putptr.c ft_putstr.c
OBJS = $(SRCS:.c=.o)

TEST_SRC = test_ft_printf.c

all: $(NAME)

$(LIB): $(OBJS)
	ar rcs $@ $^

$(EXEC): $(TEST_SRC) $(LIB)
	$(CC) $(CFLAGS) -o $@ $(TEST_SRC) -L. -lftprintf

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)

fclean: clean
	rm -f $(LIB)

re: fclean $(LIB) $(EXEC)

.PHONY: clean fclean re
