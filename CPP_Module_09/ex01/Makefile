NAME = RPN

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g -pedantic -fsanitize=address

SOURCES = main.cpp Exception.cpp RPN.cpp helpers.cpp

OBJECTS = $(SOURCES:.cpp=.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CPP) $(CPPFLAGS) $(OBJECTS) -o $(NAME)
	@clear
	@echo "\n==========Compiled Successfully==========\n"
	@echo " _       __                            __              "
	@echo "| |     / /___ ___  ____  __  ______ _/ /_  ____ ______"
	@echo "| | /| / / __ \__ \/ __ \/ / / / __ \/ __ \/ __ \/ ___/"
	@echo "| |/ |/ / / / / / / /_/ / /_/ / /_/ / / / / /_/ / /    "
	@echo "|__/|__/_/ /_/ /_/\____/\__,_/\__, /_/ /_/\__,_/_/     "
	@echo "                             /____/                    \n"

%.o: %.cpp
	$(CC) $(CPPFLAGS) -I. -c $< -o $@

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)
	@clear
	@echo "\n==========Cleaned Successfully==========\n"

re: fclean all