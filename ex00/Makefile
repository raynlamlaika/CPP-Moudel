# NAME = megaphone

# SRC = megaphone.cpp

# OBJ = $(SRC:.c=.o)

# CPP = g++ 
# CFLAGS = -Wall -Werror -Wextra


# all: $(NAME)

# $(NAME): $(OBJ)
# 	$(CPP)  $(CFLAGS) $^ -o $(NAME)


# %.o: %.cpp
# 	$(CPP)  $(CFLAGS) -c $< -o $@


# clean:
# 	rm -f $(OBJ)

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CPP = g++
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
