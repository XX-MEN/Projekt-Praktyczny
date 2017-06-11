/*
 * Laptop.cpp
 *
 *  Created on: 10.06.2017
 *      Author: xyhu
 */

#include "Laptop.hpp"

void Laptop::show()
{
	std::cout << " Maszyna: "<< type << " model: " <<  model  << " (klasa pochodna level2)\n" << std::endl;
}

void Laptop::sayWhatYouCanDo()
{
	std::cout << " Jestem Laptopem. Potrafię pracować na baterie"<< std::endl;
}

int Laptop::onBateries() {
	std::cout << "Pracuję bez prądu w gniazdku\n";
	return 0;
}


