NAME		:=	libftprintf.a	
CC			:=	cc
CFLAGS		:=	-Wall -Wextra -Werror -g
AR			:=	ar 
AR_FLAGS	:=  rcs
RM			:=	rm -f
INCDIR		:= include
SRCDIR		:= src

SRCS		=	ft_printf.c \
				$(SRCDIR)/parser/parser.c \
				$(SRCIDR)/utils/utils.c \
				$(SRCDIR)/conv/print_char.c \
				$(SRCDIR)/conv/print_int.c \
				$(SRCDIR)/conv/print_str.c \
				$(SRCDIR)/conv/print_hex.c \
				$(SRCIDR)/conv/print_pointer.c \
				$(SRCDIR)/conv/print_percent.c \
	
OBJS		=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

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
