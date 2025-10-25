NAME = Plymorphism

SRC =  AMateria.cpp  Character.cpp  \
		Cure.cpp  Ice.cpp  main.cpp MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

CPP = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

HEADER = AMateria.hpp  Character.hpp  Cure.hpp \
		 Ice.hpp  ICharacter.hpp  IMateriaSource.hpp

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