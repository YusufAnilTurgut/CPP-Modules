SRCS = MateriaSource.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp 

NAME = main

OBJS = $(SRCS:.cpp=.o)

CC = c++

RM = rm -rf

FLAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98

all : $(NAME)

$(NAME) :	$(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $(NAME)

.cpp.o :
	@$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

clean :
				$(RM) $(OBJS)

fclean :		clean
				$(RM) $(NAME)

re : fclean all

.PHONY = all clean fclean re