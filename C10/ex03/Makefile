DIRSRC = srcs/
SRCS = ${DIRSRC}ft_hexdump.c ${DIRSRC}ft_dump.c ${DIRSRC}main.c
NAME = ft_hexdump
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:		all clean fclean re