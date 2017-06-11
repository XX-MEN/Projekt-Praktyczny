#include "machine.hpp"

#include <iostream>
#include <string>

void Machine::show()
{
	std::cout << " Maszyna "<< type << " jej model " <<  model  << " (klasa bazowa)" << std::endl;
}

void Machine::sayWhatYouCanDo()
{
	std::cout << " Jestem maszyną potrafię zrobić wszystko szybciej i dokładniej"<< std::endl;
}

std::string Machine::getType() {
	return type+" (klasa bazowa)";
}

int Machine::getModel()
{
	return model;
}


