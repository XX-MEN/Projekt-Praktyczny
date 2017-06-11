/*
 * WeldingMachine.cpp
 *
 *  Created on: 10.06.2017
 *      Author: xyhu
 */
#include "WeldingMachine.hpp"

void WeldingMachine::show()
{
	std::cout << " Maszyna: "<< type << " model: " <<  model  << " (klasa pochodna level1)\n" << std::endl;
}

void WeldingMachine::sayWhatYouCanDo()
{
	std::cout << " Jestem spawarką. Potrafię łączyć metale"<< std::endl;
}

void WeldingMachine::welding() {
	std::cout << "Spawam\n";
	return;
}

