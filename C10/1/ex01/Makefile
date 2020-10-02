NAME = ft_cat
SRCS = ft_cat.c
OBJS = ${SRCS:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all:		${OBJS}
					${CC} ${CFLAGS} -o ${NAME} ${SRCS}

clean:
			${RM} ${OBJS}

fclean:		clean
					${RM} ${NAME}
