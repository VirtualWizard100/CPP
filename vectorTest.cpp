#include <iostream>
#include <vector>

int main(){
	std::vector<float> Weight;
	Weight.push_back(155.55);
	Weight.push_back(135.25);
	Weight.push_back(145.72);
	for (int i = 0; i < Weight.size(); i++) {
		std::cout << Weight[i] << std::endl;
	};
};

