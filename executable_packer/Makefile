
NAME = packer

SDIR = src/

IDIR = include

ODIR = out/

_OBJ = main.o

INCFLAGS = -Iinclude

CFLAGS = -Wall -Wextra -Wshadow -Wswitch-default -Wunreachable-code

PERFOMANCE_FLAGS = -O3 -Ofast

CC = gcc

CXX = g++

OBJ = $(patsubst %,$(ODIR)%,$(_OBJ))

$(ODIR)%.o: $(SDIR)%.c
	$(CC) -c -o $@ $< $(INCFLAGS) $(CFLAGS)

%.o: $(SDIR)%.cpp
	$(CXX) $(CTOCPP) -c -o $@ $< $(INCFLAGS) $(CFLAGS)

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(LDFLAGS) $(CFLAGS) $(INCFLAGS) $(OBJ) -o $(NAME)
