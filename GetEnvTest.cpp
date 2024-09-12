#include <iostream>
#include <cstdlib>

int main(){
	std::string a = getenv("Test");
	std::string b = "Oi lads";
	if (a == b){
		std::cout << "It worked!" << std::endl;
	} else {
		std::cout << "Not there yet" << std::endl;
	};
};
