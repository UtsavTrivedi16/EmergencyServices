#include "PoliceOfficer.hpp"
//TODO Implement the PoliceOfficer class

PoliceOfficer::PoliceOfficer(const std::string &name) : Staff(name){
    Staff::getID();
    assign_suspect = 0;



}


void PoliceOfficer::assignSuspect(Suspect* suspect){

	assign_suspect = suspect;
    assigned = true;
    Staff::setAssigned(assigned);

}

void PoliceOfficer::performJob(){

	assign_suspect -> catchsuspect();
    Staff::performJob();



}

Suspect*PoliceOfficer::getAssignedSuspect(){
	return assign_suspect;
}

PoliceOfficer::~PoliceOfficer(){

}
