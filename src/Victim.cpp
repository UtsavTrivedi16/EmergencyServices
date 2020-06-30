#include "Victim.hpp"

Victim::Victim(const std::string &name) : Civilian(name) {
	//TODO Implement
	this -> treated = false;
	this -> treat_cnt = 0;
}

bool Victim::isTreated(){
	//TODO Implement
	return treated;
}

int Victim::getTreatedByAmount(){
	//TODO Implement
	if(treated){
	treat_cnt++;
	}
	return treat_cnt;
}

void Victim::treatvictim(){
	treated = true;
}

Victim::~Victim() {
	// TODO Auto-generated destructor stub
}

