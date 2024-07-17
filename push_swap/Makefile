CC					=		gcc

FLAGS 				=		-Wall -Wextra -Werror

PROGRAM_NAME		=		push_swap

AR_NAME				=		$(PROGRAM_NAME).a

C_PROGRAM_ENTRY 	= 		main.c

SRCS 				= 		utils.c \
							push_swap.c 
							
OBJS 				= 		$(SRCS:.c=.o)

RM					=		rm -rf

$(PROGRAM_NAME)		: 		$(C_PROGRAM_ENTRY) $(AR_NAME)
							$(CC) $(FLAGS) $^ -o $@

%.o					: 		%.c
							$(CC) $(FLAGS) -c $< -o $@

$(AR_NAME)			: 		$(OBJS)
							ar rcs $@ $^

all					: 		$(PROGRAM_NAME)

clean				:
							$(RM) $(OBJS) $(AR_NAME)

fclean				: 		clean
							$(RM) $(PROGRAM_NAME)

re					:		fclean all

.PHONY				: 		all clean fclean re
