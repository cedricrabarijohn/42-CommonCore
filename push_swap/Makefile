CC					=		gcc

# FLAGS 				=		-Wall -Wextra -Werror

LIBFT_SRC			=		libft
LIBFT_AR			=		libft/libft.a

RM					=		rm -rf

PROGRAM_NAME		=		push_swap

AR_NAME				=		$(PROGRAM_NAME).a

C_PROGRAM_ENTRY 	= 		main.c

SRCS 				= 		push_swap.c \
							swap.c \
							push.c \
							rotate.c \
							reverse_rotate.c \
							utils.c
							
OBJS 				= 		$(SRCS:.c=.o)

$(PROGRAM_NAME)		: 		$(C_PROGRAM_ENTRY) $(AR_NAME) $(LIBFT_AR)
							$(CC) $(FLAGS) $^ -o $@

%.o					: 		%.c
							$(CC) $(FLAGS) -c $< -o $@

$(AR_NAME)			: 		$(OBJS)
							ar rcs $@ $^

$(LIBFT_AR)			:		$(OBJS)
							cd $(LIBFT_SRC) && make all

all					: 		$(PROGRAM_NAME)

clean				:
							$(RM) $(OBJS) $(AR_NAME)
							cd $(LIBFT_SRC) && make clean

fclean				: 		clean
							$(RM) $(PROGRAM_NAME)
							cd $(LIBFT_SRC) && make fclean

re					:		fclean all
							cd $(LIBFT_SRC) && make re

.PHONY				: 		all clean fclean re
