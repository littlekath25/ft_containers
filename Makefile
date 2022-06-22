NAME		= 	containers
CC			= 	clang++
RM			=		rm -f

SRC			=		tests/tests.cpp
OBJ			=		$(SRC:%.cpp=%.o)
FLAGS		=		-std=c++11 -pedantic
LIBS		=		-o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIBS) $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $(LIBS) $@ $< -I catch2

clean:
	$(RM) $(OBJ) $(CREATIONS)

fclean: clean
	$(RM) $(NAME)

re: fclean all