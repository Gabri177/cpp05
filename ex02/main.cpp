#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main(){

	Bureaucrat obj("test", 5);
	AForm	f1("Form1", 5, 6);
	AForm	f2("Form2", 5, 6);

	// std::cout << f1;
	std::cout << obj;
	obj.signForm(f1);
	obj.downGrade();
	std::cout << obj;
	obj.signForm(f2);
	// std::cout << f1;

	return 0;
}

