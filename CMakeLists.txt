cmake_minimum_required (VERSION 2.6)
project (Machine)
SET(CMAKE_CXX_FLAGS "-std=c++0x")
add_executable(Machine
	main.cpp
	machine.cpp
	CoffeeMachine.cpp
	WeldingMachine.cpp
	Computer.cpp
	Laptop.cpp
	functions.cpp) 


enable_testing()
find_package(GTest REQUIRED)
add_executable(Tests
	tests.cpp
	machine.cpp
	CoffeeMachine.cpp
	WeldingMachine.cpp
	Computer.cpp
	Laptop.cpp)
target_link_libraries(Tests ${GTEST_BOTH_LIBRARIES} pthread)
