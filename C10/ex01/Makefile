DIRSRC = srcs/
SRCS = ${DIRSRC}main.c ${DIRSRC}no_args.c ${DIRSRC}ft_putchar.c ${DIRSRC}ft_putstr.c ${DIRSRC}ft_file_read.c 
OBJS = ${SRCS:.c=.o}
NAME = ft_cat
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

${NAME}:${OBJS}
		${CC} -o ${NAME} ${OBJS} ${CFLAGS}

all: ${NAME}

clean:
	 ${RM} ${OBJS}

fclean:clean
	   ${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean re