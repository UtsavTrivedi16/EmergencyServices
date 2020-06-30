#include <iostream>
#include "FireFighter.hpp"


FireFighter::FireFighter(const std::string &name) : Staff(name) {
	//Constructed using parent

    Staff::getID();

}


void FireFighter::performJob(){

    Staff::performJob();
}



FireFighter::~FireFighter() {

}

