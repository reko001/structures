#include <iostream> //github.com/reko001/structures
#include <string>

struct Material
{
	std::string material = "wood";
	std::string color = "brown";
};

struct Thing
{
	std::string name = "Desk";
	double mass = 10.0;
	double height = 1.0;
	Material* madeOf;
};

int main()
{
	Thing* chair = new Thing;
	chair->name = "Chair";
	chair->mass = 3.5;
	chair->height = 0.9;
	Material* classicPtr = new Material;
	classicPtr->material = "wood";
	classicPtr->color = "gray";
	chair->madeOf = classicPtr;
	delete classicPtr;
	delete chair;
}