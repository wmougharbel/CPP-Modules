NAME = megaphone

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

SOURCES = megaphone.cpp

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