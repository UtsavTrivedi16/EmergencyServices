#include "Suspect.hpp"

Suspect::Suspect(const std::string &name) : Civilian(name) {
	//TODO Implement
    this->caught = false;
    this->caught_cnt = 0;

}

bool Suspect::isCaught(){
	//TODO Implement
	return caught;
}

int Suspect::getCaughtByAmount(){
	//TODO Implement
   if(caught){
	caught_cnt++;
   }
   return caught_cnt;
}

void Suspect::catchsuspect(){
	caught = true;
}

Suspect::~Suspect() {
	// TODO Auto-generated destructor stub
}

