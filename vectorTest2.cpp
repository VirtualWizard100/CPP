#include <iostream>
#include <vector>

int main(){
	std::vector<float> Weights;
	Weights.push_back(155.55);
	Weights.push_back(135.25);
	Weights.push_back(145.72);
	for (float Weight: Weights) {
		std::cout << Weight << std::endl;
	};
};

