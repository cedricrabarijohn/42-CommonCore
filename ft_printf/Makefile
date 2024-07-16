# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Library and executable
LIB = libftprintf.a
EXEC = test_ft_printf

# Source files and object files
SRCS = ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putunbr.c ft_putptr.c ft_putstr.c
OBJS = $(SRCS:.c=.o)

# Test file
TEST_SRC = test_ft_printf.c

# Rule to create the library
$(LIB): $(OBJS)
	ar rcs $@ $^

# Rule to create the executable
$(EXEC): $(TEST_SRC) $(LIB)
	$(CC) $(CFLAGS) -o $@ $(TEST_SRC) -L. -lftprintf

# Rule to compile object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and executable
clean:
	rm -f $(OBJS) $(EXEC)

# Clean up everything
fclean: clean
	rm -f $(LIB)

# Rebuild everything
re: fclean $(LIB) $(EXEC)

# Phony targets
.PHONY: clean fclean re
