NAME		= 	containers
TEST		=		con_tests
CC			= 	clang++
RM			=		rm -f

SRC			=		src/main.cpp
OBJ			=		$(SRC:%.cpp=%.o)

TSRC		=		tests/tests.cpp
TOBJ		=		$(TSRC:%.cpp=%.o)

FLAGS		=		-std=c++11 -pedantic
LIBS		=		-o

all: $(NAME)

test: $(TEST)

$(TEST): $(TOBJ)
	$(CC) $(TOBJ) $(LIBS) $(TEST)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIBS) $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $(LIBS) $@ $< -I catch2

clean:
	$(RM) $(OBJ) $(TOBJ)

fclean: clean
	$(RM) $(NAME) $(TEST)

re: fclean all