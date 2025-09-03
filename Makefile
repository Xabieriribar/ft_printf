NAME		=	libftprintf.a	
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -g
AR			=	ar rcs
RM			=	rm -f

SRCS		=	ft_printf.c \
				parser.c \
				utils.c \
				print_char.c \
				print_int.c \
				print_str.c \
				print_unsigned.c \
				print_hex.c \
				print_pointer.c \
				print_percent.c \
	
OBJS		=	$(SRCS:.c=.o)
OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus:		$(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)

%.o:		%.c
	$(CC) $(CFLAGS) -I . -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
	$(RM) $(NAME)

re:		fclean all

test: $(NAME) main.c
	$(CC) $(CFLAGS) main.c $(NAME) -o test_printf && ./test_printf

.PHONY:		all clean fclean re bonus
