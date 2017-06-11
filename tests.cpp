#include <gtest/gtest.h>
#include "CoffeeMachine.hpp"
#include "Computer.hpp"
#include "Laptop.hpp"
#include "machine.hpp"
#include "WeldingMachine.hpp"

TEST(makeCoffeeTest, TestZwracania) {
	CoffeeMachine cm2("Kawomat", 666);
	EXPECT_EQ(1, cm2.makeCoffee(1));
	EXPECT_EQ(2, cm2.makeCoffee(2));
	EXPECT_EQ(3, cm2.makeCoffee(3));
	EXPECT_EQ(4, cm2.makeCoffee(4));
	EXPECT_NE(5, cm2.makeCoffee(5));
	EXPECT_NE(0, cm2.makeCoffee(0));
}

TEST(App,startCoffeeMachine_OK)
{
	CoffeeMachine cm2("Kawomat", 666);
	std::stringstream input("5");
	std::cin.rdbuf(input.rdbuf());
	int l = cm2.startCoffeeMachine();
	EXPECT_EQ(0, l);
}

TEST(App,stopCoffeeMachine_FAIL)
{
	CoffeeMachine cm2("Kawomat", 666);
	int stop = cm2.stopCoffeeMachine();
	EXPECT_NE(-1, stop);
}

TEST(Machine, CheckConstructor_Machine) 
{
	Machine m = Machine("Maszyna",1000);
	ASSERT_EQ("Maszyna (klasa bazowa)", m.getType());
	ASSERT_EQ(1000, m.getModel());
}

TEST(CoffeeMachine, CheckConstructor_CoffeeMachine) 
{
	CoffeeMachine c = CoffeeMachine("Kawomat",666);
	ASSERT_EQ("Kawomat (klasa bazowa)", c.getType());
	ASSERT_EQ(666, c.getModel());
	ASSERT_EQ(0, c.coffeeCounter[0]);
	ASSERT_EQ(0, c.coffeeCounter[1]);
	ASSERT_EQ(0, c.coffeeCounter[2]);
	ASSERT_EQ(0, c.coffeeCounter[3]);
}

TEST(WeldingMaschine, CheckConstructor_WeldingMaschine)
{
	WeldingMachine wm = WeldingMachine("Spawarka",3000);
	ASSERT_EQ("Spawarka (klasa bazowa)", wm.getType());
	ASSERT_EQ(3000, wm.getModel());
}

TEST(Computer, CheckConstructor_Computer)
{
	Computer cp = Computer("Server", 2017);
	ASSERT_EQ("Server (klasa bazowa)", cp.getType());
	ASSERT_EQ(2017, cp.getModel());
}

TEST(Laptop, CheckConstructor_Laptop)
{
	Laptop lt = Laptop("ThinkPad", 2018);
	ASSERT_EQ("ThinkPad (klasa bazowa)", lt.getType());
	ASSERT_EQ(2018, lt.getModel());
}


int test(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

