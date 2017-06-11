/*
 * Computer.cpp
 *
 *  Created on: 10.06.2017
 *      Author: xyhu
 */

#include "Computer.hpp"

void Computer::show()
{
	std::cout << " Maszyna: "<< type << " model: " <<  model  << " (klasa pochodna level1)\n" << std::endl;
}

void Computer::sayWhatYouCanDo()
{
			std::cout << " Jestem komputerem. Potrafię tyle co mój właściciel"<< std::endl;
}

void Computer::calculating() {
	std::cout << "Przeliczam wszystko\n";
	return;
}
