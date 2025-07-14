NAME = PhoneBook

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CPP = c++
CFLAGS = -Wall -Werror -Wextra

HEADER = header.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP)  $(CFLAGS) $^ -o $(NAME)


%.o: %.cpp $(HEADER)
	$(CPP)  $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

