NAME = phonebook

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98 -fsanitize=address

SOURCES = main.cpp Contact.cpp PhoneBook.cpp utils.cpp

OBJECTS = $(SOURCES:.cpp=.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)
	@echo "\n==========Compiled Successfully==========\n"

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)
	@echo "\n==========Cleaned Successfully==========\n"

re: fclean all