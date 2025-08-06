NAME = helo

SRC = main.cpp  Weapon.cpp  HumanA.cpp HumanB.cpp 

OBJ = $(SRC:.cpp=.o)

CPP = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -Iincludes

HEADRES = Weapon.hpp HumanA.hpp HumanB.hpp
all: $(NAME)

$(NAME): $(OBJ)
	$(CPP)  $(CFLAGS) $^ -o $(NAME)


%.o: %.cpp $(HEADRES)
	$(CPP)  $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
