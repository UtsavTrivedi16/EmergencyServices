#include "Vehicle.hpp"

Vehicle::Vehicle(const std::string &name, int capacity) {
	//TODO Implement
	this -> capacity = capacity;
	this -> name = name;
}

int Vehicle::getCapacity(){
	//TODO Implement

	return capacity;
}

std::string Vehicle::getName(){
	//TODO Implement


	return name;
}

Vehicle::~Vehicle() {
	// TODO Auto-generated destructor stub
}

