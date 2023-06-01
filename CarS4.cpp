#include "CarS4.h"
#include <iostream>  //  for cout
Car::Car(float ss, int ww, float pp) {
	speed = ss;
	wheels = ww;
	price = pp;
	std::cout << " new Car \n";
}
// = operator
Car& Car::operator=(const Car & AA){
	this->wheels = AA.wheels;
	this->price = AA.price;
	return *this;
}
// << operator
std::ostream& operator<<(std::ostream& os, const Car& car) {
	os << car.speed << " speed, " << car.wheels << " wheels, " << car.price << "dollars";
	return os;
}
// + operator
Car& Car::operator+(const Car& AA) {
	Car BB;
	BB.speed = this->speed + AA.speed;
	BB.wheels = this->wheels + AA.wheels;
	BB.price = this->price + AA.price;
	return BB;
}
// basic functions
void Car::speedUp(float x) { speed += x; }
void Car::speedDown(float x) { speed -= x; }
void Car::setPrice(float x) { price = x; }
float Car::getPrice() { return price; }
void Car::speedChange(float x) {
	if (x > 0) speedUp(x);
	else speedDown(-x);}
void Car::setWheels(int n) { wheels = n; }
int Car::getWheels() { return wheels; }
void Car::klaxon(int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "  no horn \n";}}
void Car::airconditioner(int n) {
	std::cout << "  no airconditioning system \n";}