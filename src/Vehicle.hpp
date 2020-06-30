
#ifndef VEHICLE_HPP_
#define VEHICLE_HPP_
#include <string>
class Vehicle {
private:
	//TODO Add members
	std::string name;
	int capacity;
    	Vehicle& operator=(const Vehicle& other);
    	Vehicle(const Vehicle& other);
public:
	Vehicle(const std::string &name, int capacity);
	int getCapacity();
	std::string getName();
	virtual ~Vehicle();
};

#endif /* VEHICLE_HPP_ */
