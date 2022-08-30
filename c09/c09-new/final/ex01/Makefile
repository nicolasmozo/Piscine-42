NAME = libft.a
SOURCE_FILES = srcs/
OBJS = ${SRCS:.c=.o}
SRCS = $(SOURCE_FILES)ft_putchar.c $(SOURCE_FILES)ft_swap.c $(SOURCE_FILES)ft_putstr.c $(SOURCE_FILES)ft_strlen.c $(SOURCE_FILES)ft_strcmp.c
HEADER_FILES = includes
INCLUDES = -I $(HEADER_FILES)
COMPILE_FLAGS =  -Wall -Wextra -Werror
TEMP_FILES = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
RM = rm -f
CC = gcc
.c.o: 
		 ${CC} ${COMPILE_FLAGS} -c $< -o ${<:.c=.o} ${INCLUDES}

${NAME}: ${OBJS}
		 ar rc ${NAME} ${OBJS}
all: ${NAME}

clean:	
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all