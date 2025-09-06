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
				$(SRCDIR)/utils/write_utils.c \
				$(SRCDIR)/utils/int_utils.c \
				$(SRCDIR)/conv/print_char.c \
				$(SRCDIR)/conv/print_int.c \
				$(SRCDIR)/conv/print_str.c \
				$(SRCDIR)/conv/print_hex.c \
				$(SRCDIR)/conv/print_pointer.c \
				$(SRCDIR)/conv/print_percent.c \
	
OBJS		=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
	$(RM) $(NAME)

re:		fclean all

test: $(NAME) tests/main.c
	$(CC) $(CFLAGS) tests/main.c $(NAME) -I$(INCDIR) -o test_printf && ./test_printf

.PHONY:		all clean fclean re bonus
