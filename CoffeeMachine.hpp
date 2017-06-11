/*
 * CoffeeMachine.hpp
 *
 *  Created on: 10.06.2017
 *      Author: xyhu
 */

#ifndef COFFEEMACHINE_HPP_
#define COFFEEMACHINE_HPP_

#include <array>

#include "machine.hpp"

class CoffeeMachine : public Machine {
public:
	CoffeeMachine(std::string Type, int Model)
	:Machine(Type, Model)
	{
		coffeeCounter= {0, 0, 0, 0};
	}

	virtual void show();
	virtual void sayWhatYouCanDo();

	int startCoffeeMachine();
	int makeCoffee(int choice);
	int stopCoffeeMachine();
	std::array<int,4> coffeeCounter;
};

#endif /* COFFEEMACHINE_HPP_ */
