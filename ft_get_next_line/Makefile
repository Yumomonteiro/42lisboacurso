NAME = libftprintf.a
SOURCES = get_next_line.c \
	   		get_next_line_utils.c \

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