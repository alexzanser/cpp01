NAME = zombieHorde
SOURCE = Zombie.cpp
CFLAGS = -Wall -Werror -Wextra -std=c++98
HEADER = Zombie.hpp
CC = c++
OBJ = $(SOURCE:%.cpp=%.o)
.PHONY : all clean fclean re
#
all : $(NAME)
#
$(NAME) :	$(SOURCE) ${HEADER}
	$(CC) $(CFLAGS) ${HEADER} $(SOURCE) -o $(NAME)
#
%.o :	%.c ${HEADER}
	$(CC) $(CFLAGS) ${HEADER} -c $< -o $@
#
clean :
	@rm -f $(OBJ)
#
fclean : clean
	@rm -f $(NAME)
#
re : fclean all
