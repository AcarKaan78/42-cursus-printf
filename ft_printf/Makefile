NAME		= libftprintf.a

SRCS		= ft_print_hex.c \
			  ft_print_nbr.c \
			  ft_print_ptr.c \
			  ft_printcs.c \
			  ft_printf.c \
			
OBJS		= $(SRCS:%.c=%.o)

FLAGS		= -Wall -Werror -Wextra

$(NAME):
	gcc $(FLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
