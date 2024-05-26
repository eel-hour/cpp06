NAME = convert
SRC = main.cpp ScalarConerter.cpp
OBJ = main.o ScalarConerter.o
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all