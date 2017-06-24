
NAME = Colleen

NAME2 = Grace

NAME3 = Sully

SDIR = src/

IDIR = include

ODIR = out/


_OBJ = main.o

_OBJ2 = Grace.o

_OBJ3 = Sully.o

INCFLAGS = -Iinclude

CFLAGS = -Wall -Wextra -Werror -Wshadow -Wswitch-default -Wunreachable-code

PERFOMANCE_FLAGS = -O3 -Ofast

CC = gcc

CXX = g++

OBJ = $(patsubst %,$(ODIR)%,$(_OBJ))

OBJ2 = $(patsubst %,$(ODIR)%,$(_OBJ2))

OBJ3 = $(patsubst %,$(ODIR)%,$(_OBJ3))

$(ODIR)%.o: $(SDIR)%.c
	$(CC) -c -o $@ $< $(INCFLAGS) $(CFLAGS)

%.o: $(SDIR)%.cpp
	$(CXX) $(CTOCPP) -c -o $@ $< $(INCFLAGS) $(CFLAGS)

all : $(NAME) $(NAME2) $(NAME3)

$(NAME): $(OBJ)
	$(CC) $(LDFLAGS) $(CFLAGS) $(INCFLAGS) $(OBJ) -o $(NAME)

$(NAME2): $(OBJ2)
	$(CC) $(LDFLAGS) $(CFLAGS) $(INCFLAGS) $(OBJ2) -o $(NAME2)

$(NAME3): $(OBJ3)
	$(CC) $(LDFLAGS) $(CFLAGS) $(INCFLAGS) $(OBJ3) -o $(NAME3)

clean :
	rm -rf $(OBJ) $(OBJ2)

fclean : clean
	rm -rf $(NAME) $(NAME2)
