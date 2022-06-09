SRCS = ft_printf.c ft_printf_utils.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

RM = rm -f

CC = cc

CFLAGS = -Wall -Werror -Wextra

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
