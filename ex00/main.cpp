#include "Bureaucrat.hpp"

int main(){

	Bureaucrat obj("test", 150);

	try{
		obj.downGrade();
	}catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << obj << std::endl;
	

	return 0;
}