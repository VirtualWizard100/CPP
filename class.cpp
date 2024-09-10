#include <iostream>
#include <cstring>
#include <string>

class Person{
private:
	std::string First;
	std::string Last;
	int Age;
	float Weight;
	float Height;
public:
	Person(std::string first, std::string last, int age, float weight, float height) /* Constructor in c++ */
	{
		First = first;
		Last = last;
		Age = age;
		Weight = weight;
		Height = height;
	};

	void info()
        {
                std::cout << "\n" << "Name: " << First << " " << Last << std::endl;
                std::cout << "Age: " << Age << std::endl;
                std::cout << "Weight: " << Weight << std::endl;
                std::cout << "Height: " << Height << std::endl;
        };

	void setFirst(std::string first, int mode)
        {
                First = first;
                if (mode == 1)
                {
                        std::cout << "First name successfully changed to " << first << "." << std::endl;
                };
        };

	void setLast(std::string last, int mode)
	{
		Last = last;
		if (mode == 1)
		{
			std::cout << "Last name successfully changed to " << last << "." << std::endl;
		};
	};

        const char* getName()
        {
                std::string fullname = First + " " + Last;
		return fullname.c_str();
        };

	void setAge(int age, int mode)
	{
		if (age >= 18)
		{
			Age = age;
			if (mode == 1)
			{
				std::cout << "Age successfully set to " << age << std::endl;
			};
		};
	};

};
int main() {
	Person Virtual_Wizard = Person( "Virtual", "Wizard", 22, 150.55, 5.9);
	Virtual_Wizard.info();
	Person John = Person( "John", "Moot", 31, 150.75, 6.1);
	John.info();
	Virtual_Wizard.getName();
	Virtual_Wizard.setFirst("Water", 1);
	std::cout << Virtual_Wizard.getName() << std::endl;
};
