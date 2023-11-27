NAME = moreForms

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g -pedantic #-fsanitize=address

SOURCES = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp\
			PresidentialPardonForm.cpp

OBJECTS = $(SOURCES:.cpp=.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)
	@clear
	@echo "\n==========Compiled Successfully==========\n"
	@echo " _       __                            __              "
	@echo "| |     / /___ ___  ____  __  ______ _/ /_  ____ ______"
	@echo "| | /| / / __ \__ \/ __ \/ / / / __ \/ __ \/ __ \/ ___/"
	@echo "| |/ |/ / / / / / / /_/ / /_/ / /_/ / / / / /_/ / /    "
	@echo "|__/|__/_/ /_/ /_/\____/\__,_/\__, /_/ /_/\__,_/_/     "
	@echo "                             /____/                    \n"


clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME) Home_shrubbery
	@clear
	@echo "\n==========Cleaned Successfully==========\n"

re: fclean all