#ifndef MACHINE_HPP_
#define MACHINE_HPP_

#include <iostream>


class Machine {
public:
	Machine (std::string Type, int Model)
		:type(Type),model(Model)
	{}

	virtual void show();
	virtual void sayWhatYouCanDo();

	std::string getType();
	int getModel();

protected:
	std::string type;
	int model;
};

#endif /* MACHINE_HPP_ */
