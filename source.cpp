//FunctionDefinitions.cpp Source File For Method Definitions
#include "Header.h"

//Class Phone Set Method for Age
void Phone::setAge(int x) {
	age = x;
}

//Class Phone Set Method for Price
void Phone::setPrice(float x) {
	price = x;
}

//Class Phone Get Method for Age
int Phone::getAge() {
	return age;
}

//Class Phone Get Method for Price
float Phone::getPrice() {
	return price;
}

//Class Iphone Set Method for Apple Id
void Iphone::setAppleId(int x) {
	AppleId = x;
}

//Class Iphone Get Method for Apple Id
int Iphone::getAppleId() {
	return AppleId;
}

//Class IPhone8 Set Method for Augmented Reality Status
void Iphone8::setAugmentedRealityStatus(bool x) {
	augmentedRealityStatus = x;
}

//Class IPhone8 Get Method for Augmented Reality Status
bool Iphone8::getAugmentedRealityStatus() {
	return augmentedRealityStatus;
}

//Source.cpp Source File For Phone and Derived Classes
#include "Header.h"

using namespace std;

int main() {
	//Instance of Class Phone Declaration
	Phone x;

	//Display Initial Age and Price
	cout << "Initial value for x: " << endl;
	cout << "Age = " << x.getAge() << "  Price = " << x.getPrice() << endl;

	//Method Call and Set
	x.setAge(3);
	x.setPrice(200);

	//Display Modified Values
	cout << "Modified value for x: " << endl;
	cout << "Age = " << x.getAge() << "  Price = " << x.getPrice() << endl;


	//Instance of Class Iphone Declaration
	Iphone y;

	//Display Initial Age and Price
	cout << "Initial value for y: " << endl;
	cout << "Age = " << y.getAge() << "  Price = " << y.getPrice() << "  Apple ID = " << y.getAppleId() << endl;


	//Method Call and Set
	y.setAge(2);
	y.setPrice(300);
	y.setAppleId(1234);

	//Display Modified Values
	cout << "Modified value for y: " << endl;
	cout << "Age = " << y.getAge() << "  Price = " << y.getPrice() << "  Apple ID = " << y.getAppleId() << endl;


	//Instance of Class Iphone8 Declaration
	Iphone8 z;


	//Display Initial Age and Price
	cout << "Initial value for z: " << endl;
	cout << "Age = " << z.getAge() << "  Price = " << z.getPrice() << "  Apple ID = " << z.getAppleId() << "  AugmentedReality status = " << z.getAugmentedRealityStatus() << endl;


	//Method Call and Set
	z.setAge(1);
	z.setPrice(500);
	z.setAppleId(3234);
	z.setAugmentedRealityStatus(true);

	//Display Modified Values
	cout << "Modified value for z: " << endl;
	cout << "Age = " << z.getAge() << "  Price = " << z.getPrice() << "  Apple ID = " << z.getAppleId() << "  AugmentedReality status = " << z.getAugmentedRealityStatus() << endl;





	return 0;
}
