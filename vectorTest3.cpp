#include <iostream>
#include <vector>

int main(){
	std::vector<float> Weights;
	Weights.push_back(155.55);
	Weights.push_back(135.25);
	Weights.push_back(145.72);
	for (auto iterator = Weights.begin(); iterator !=  Weights.end(); iterator++) {
		std::cout << "Element: " << *iterator << std::endl;
		std::cout << "AddressOfIterator: " << &iterator << std::endl;
		std::cout << "AddressOfElement: " << &(*iterator) << std::endl;
		std::cout << std::endl;
	};
};

