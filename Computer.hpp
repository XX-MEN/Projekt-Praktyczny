/*
 * Computer.h
 *
 *  Created on: 10.06.2017
 *      Author: xyhu
 */

#ifndef COMPUTER_HPP_
#define COMPUTER_HPP_

#include "machine.hpp"

class Computer : public Machine {
public:
	Computer(std::string Type, int Model)
	:Machine(Type, Model)
	{
	}

	virtual void show();
	virtual void sayWhatYouCanDo();

	void calculating();
};

#endif /* COMPUTER_HPP_ */
