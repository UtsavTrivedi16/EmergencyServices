#include "Paramedic.hpp"
//TODO Implement Paramedic Class


Paramedic::Paramedic(const std::string &name): Staff(name){
    Staff::getID();
	assign_victim = 0;

}



void Paramedic::assignVictim(Victim* victim){
	assign_victim = victim;
	assigned = true;
	Staff::setAssigned(assigned);
}

void Paramedic::performJob(){
	assign_victim -> treatvictim();
    Staff::performJob();

}

Victim* Paramedic::getAssignedVictim(){
	return assign_victim;
}

Paramedic::~Paramedic(){

}
