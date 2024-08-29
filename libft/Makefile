SRCS	= ft_isalnum.c  ft_isascii.c  ft_isprint.c  ft_strrchr.c  ft_toupper.c  ft_isalpha.c  ft_isdigit.c  ft_strchr.c   ft_tolower.c  ft_strlen.c  ft_strncmp.c  ft_memset.c
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
LIBC	= ar rc
LIBR	= ranlib
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I./

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all, clean, fclean, re
