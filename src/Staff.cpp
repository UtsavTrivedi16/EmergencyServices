#include "Staff.hpp"

int Staff::nextID = 0; // Static variable


Staff::Staff(const std::string &name) : Human(name) {

	this -> ID = nextID;
	this -> jobcomplete = false;
	this -> assigned = false;
    this -> transported = false;

	nextID++;
	//TODO Implement
}

void Staff::performJob(){
	//TODO Implement
	jobcomplete = true;

}

void Staff::setAssigned(bool assigned){
	this -> assigned = assigned;

	//TODO Implement
}

bool Staff::isAssigned(){
	//TODO Implement
	return assigned;
}

bool Staff::isJobComplete(){
	//TODO Implement
	return jobcomplete;
}


bool Staff::isTransported(bool transported){
	return transported;
}

int Staff::getID(){
	//TODO Implement

	return ID;
}



Staff::~Staff() {
	// TODO Auto-generated destructor stub
}

