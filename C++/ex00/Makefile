NAME = megaphone

.PHONY: all, fclean, re

SRCS = megaphone.cpp

OBJS = $(SRCS:.c=.o)

CC = g++

CFLAGS = 
# -Wall -Wextra -Werror

all: $(NAME)

$(NAME):$(SRCS)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)


fclean:
		rm -f $(NAME)

re: fclean all