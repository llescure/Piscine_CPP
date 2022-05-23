NAME = Recap

OBJS = $(SRCS:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	./main.cpp \
		./Character.cpp \
		./Cure.cpp \
		./Ice.cpp \
		./Materia.cpp \
		./MateriaSource.cpp

BLACK		:= $(shell tput -Txterm setaf 0)
RED			:= $(shell tput -Txterm setaf 1)
GREEN		:= $(shell tput -Txterm setaf 2)
YELLOW		:= $(shell tput -Txterm setaf 3)
LIGHTPURPLE	:= $(shell tput -Txterm setaf 4)
PURPLE		:= $(shell tput -Txterm setaf 5)
BLUE		:= $(shell tput -Txterm setaf 6)
WHITE		:= $(shell tput -Txterm setaf 7)
RESET		:= $(shell tput -Txterm sgr0)

SAN = -g3 -fsanitize=address

RM = rm -rf

$(NAME): $(OBJS)
		@echo "$(LIGHTPURPLE)Compilation...$(RESET)"
		@($(CXX) -o $(NAME) $(SRCS) $(CXXFLAGS))
		@echo "$(GREEN)Compilation OK$(RESET)"

all: $(NAME)

clean:
	@ $(RM) $(OBJS)
	@echo "$(RED)Deleting objects...$(RESET)"

san:
	@(c++ -o $(NAME) $(SRCS) $(CXXFLAGS) $(SAN))

re: clean all

.PHONY: all clean re