NAME = school
CC = gcc
SRC = main.c school.c
OBJ = $(SRC:.c=.o)
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic

all: $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) *~ *.swp $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean

re: oclean all
