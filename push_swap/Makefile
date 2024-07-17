CC = gcc
FLAGS =

PROGRAM_NAME = push_swap
AR_NAME = $(PROGRAM_NAME).a
C_PROGRAM_ENTRY = $(PROGRAM_NAME).c
SRCS = utils.c
OBJS = $(SRCS:.c=.o)

$(PROGRAM_NAME): $(AR_NAME) $(C_PROGRAM_ENTRY)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(AR_NAME): $(OBJS)
	ar rcs $@ $^

all: $(PROGRAM_NAME)

clean:
	rm -f $(OBJS) $(AR_NAME)

fclean: clean
	rm -f $(PROGRAM_NAME)

re: fclean all

.PHONY: all clean fclean re
