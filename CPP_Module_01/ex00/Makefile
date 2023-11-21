NAME = BraiiiiiiinnnzzzZ

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

SOURCES = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

OBJECTS = $(SOURCES:.cpp=.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)
	@echo "\n==========Compiled Successfully==========\n"
	@sleep 2
	@clear
	@echo " _       __                            __              "
	@echo "| |     / /___ ___  ____  __  ______ _/ /_  ____ ______"
	@echo "| | /| / / __ \__ \/ __ \/ / / / __ \/ __ \/ __ \/ ___/"
	@echo "| |/ |/ / / / / / / /_/ / /_/ / /_/ / / / / /_/ / /    "
	@echo "|__/|__/_/ /_/ /_/\____/\__,_/\__, /_/ /_/\__,_/_/     "
	@echo "                             /____/                    "

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)
	@clear
	@echo "\n==========Cleaned Successfully==========\n"

re: fclean all