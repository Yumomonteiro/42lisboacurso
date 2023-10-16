NAME = libftprintf.a
SOURCES = ./sources/ft_printf.c \
	   		./sources/ft_numbers.c \
				./sources/ft_words.c \

OBJECTS = $(SOURCES:.c=.o)
AR = ar
ARFLAGS = -rcs
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS) 
	$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re