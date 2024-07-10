CFILE = AForm.cpp AForm.hpp Bureaucrat.cpp Bureaucrat.hpp Makefile PresidentialPardonForm.cpp \
		PresidentialPardonForm.hpp RobotomyRequestForm.cpp RobotomyRequestForm.hpp \
		ShrubberyCreationForm.cpp ShrubberyCreationForm.hpp main.cpp
OFILE = $(CFILE:.cpp=.o)
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Test

all: $(NAME)

$(NAME): $(OFILE)
	c++ $(CPPFLAGS) -o $(NAME) $(OFILE)

%.o:%.cpp
	c++ $(CPPFLAGS) -c -Wshadow $< -o $@

clean:
	$(RM) $(OFILE)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re
