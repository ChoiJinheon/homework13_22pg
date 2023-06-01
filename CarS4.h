#pragma once
#include <iostream>
class Car {
public:
	// = operator
	Car& operator= (const Car&);
	// + operator
	Car& operator+ (const Car&);
	// << operator
	friend std::ostream& operator<< (std::ostream&, const Car&);

	Car() :speed(0.1), wheels(0), price(0.2) {};
	Car(float, int, float);
	void klaxon(int);
	virtual void airconditioner(int);
	void setPrice(float);
	float getPrice();
	float speed;
	void speedChange(float);
	int wheels;
	void setWheels(int);
	int getWheels();
	float price;
protected:
	void speedUp(float);
	void speedDown(float);
};

