NAME		= libftprintf.a

SRC			= ft_printf.c \
			  ft_handle_format.c \
			  ft_putchar_len.c \
			  ft_putstr_len.c \
			  ft_putstr.c \
			  ft_putnbr_len.c \
			  ft_putunbr.c \
			  ft_puthex_len.c \
			  ft_putptr_len.c \ 
			  ft_putchar.c \


OBJ			= $(SRC:.c=.o)

CC			= cc
CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f
AR			= ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re