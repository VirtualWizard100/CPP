#include <iostream>
#include <stdint.h>

int main() {
	enum Range{
		Low = 0,
		Medium = 1,
		High = 2
	};
	Range a = Medium;
	std::cout << a << std::endl;
};
