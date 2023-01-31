//Header.h File For Class Definitions
#pragma once
#include <iostream>
using namespace std;

//Phone Class 
class Phone {
	//Phone Attributes
	int age;
	float price;

//Public Methods
public:
	//Default Constructor With Inline Definition
	Phone() { age = 0; price = 0.0; }

	//Parameterized Constructor With Inline Definition
	Phone(int a, float b) { age = a; price = b; }
	
	//Set Methods
	void setAge(int);
	void setPrice(float);

	//Get Methods
	int getAge();
	float getPrice();



};
