NAME = libftprintf.a
SOURCES = \
	./sources/ft_words.c \
	./sources/ft_string.c \
	./sources/ft_printf.c \

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