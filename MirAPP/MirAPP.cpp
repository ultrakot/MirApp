// MirAPP.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
#include "Cat.h"
#include "Tweeter.h"
using std::string;
using std::cout;
using std::endl;
using std::cin;

#include "Utility.h"

int main()
{
	
	Cat c1("asha", "", 42);
	{
		Tweeter("some","otehr",43,":");
	}
	cout << "after inner most block" << endl;
	cout << "c1: " << c1.getName() << " " << c1.GetNumber() << endl;
	c1.SetNumber(7);
	cout << "c1: " << c1.getName() << " " << c1.GetNumber() << endl;

	cout << "this is a changed code from home computer" << endl;

#pragma region classes and inheritance
	/*Cat cat1("tabby", "gingi", 7);
	{
		Tweeter t1("somekot", "blue", 42, "@whoever");

		string name = t1.getName();

		Cat cat2;
	}
	cout << "after iinermost" << endl;
	string name = cat1.getName();

	cout << "cats name " << name << endl;

	return 0;*/
#pragma endregion
}

int DoubleIt(int& num) 
{
	num *= num;
	return num; 
}