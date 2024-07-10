#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){

	Bureaucrat obj("test", 5);
	Form	f1("form1", 5, 6);
	Form	f2("form2", 5, 6);

	// std::cout << f1;
	std::cout << obj;
	obj.signForm(f1);
	obj.downGrade();
	std::cout << obj;
	obj.signForm(f2);
	// std::cout << f1;

	return 0;
}

