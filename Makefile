NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
SRC = ft_printf.c\
	ft_putchar_l.c\
	ft_putnbr_l.c\
	ft_putstr_l.c\
	ft_putnbr_l.c\
	ft_hd_d_l.c\
	ft_put_unbr_l.c\
	ft_hdp_d_l.c\

OBJ = ${SRC:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
	ar rc ${NAME} ${OBJ}

clean : 
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}

re : fclean all