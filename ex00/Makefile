NAME = ScalarConverter

SRC = 	main.cpp ScalarConverter.cpp
OBJ = $(SRC:.cpp=.o)

C++ = c++
C++FLAGS = -Wall -Wextra -Werror -std=c++17

all: $(NAME)

$(NAME): $(OBJ)
	$(C++)	$(C++FLAGS)	$(OBJ)	-o	$(NAME)

%.o: %.cpp
	$(C++)	$(C++FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re