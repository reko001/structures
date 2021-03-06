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
	std::shared_ptr<Material> madeOf;
};

int main()
{
	Thing* chair = new Thing;
	chair->name = "Chair";
	chair->mass = 3.5;
	chair->height = 0.9;
	std::shared_ptr<Material> madeOfPlastic;
	madeOfPlastic->material = "plastic";
	madeOfPlastic->color = "black";
	chair->madeOf = madeOfPlastic;
	Thing* bin = new Thing;
	bin->name = "Bin";
	bin->mass = 0.2;
	bin->height = 0.4;
	bin->madeOf = madeOfPlastic;
	delete chair;
	delete bin;
}