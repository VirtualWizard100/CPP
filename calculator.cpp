#include <iostream>

int main()
{
	int a;
	int b;
	int operation;
	std::cout << "Please put in a number: " << std::endl;
	std::cin >> a;
	std::cout << "Please put in another number: " << std::endl;
	std::cin >> b;
	std::cout << "What kind of operation do you want to do on the numbers (1 = +, 2 =  -, 3 = /, 4 = *, 5 = %):" << std::endl;
	std::cin >> operation;
	float sum;
	switch (operation)
	{
		case 1:
			sum = a + b;
			std::cout << a <<  " + " << b << " = " << sum << std::endl;
			break;
		case 2:
			sum = a - b;
			std::cout << a << " - " << b << " = " << sum << std::endl;
			break;
		case 3:
			sum = a / b;
			std::cout << a << " / " << b << " = " << sum << std::endl;
			break;
		case 4:
			sum = a * b;
			std::cout << "a * b = " << sum << std::endl;
			break;
		case 5:
			sum = a % b;
			std::cout << "a % b = " << sum << std::endl;
			break;
		default:
			std::cout << "Not a valid operation" << std::endl;
	};
	return 0;
}
