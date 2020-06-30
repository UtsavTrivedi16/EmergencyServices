#include "Emergency.hpp"

Emergency::Emergency(Address* address, Victim* victim, Suspect* suspect ) {
	//TODO Implement
	this->status = CRITICAL;
	this->victim = victim;
	this->address = address;
	this->suspect = suspect;

	this->assigned = false;
}

Address* Emergency::getAddress(){
	//TODO Implement
	return  this->address;
}

Suspect* Emergency::getSuspect(){
	//TODO Implement
	return this->suspect;
}

Victim* Emergency::getVictim(){
	//TODO Implement
	return  this->victim;
}

Status Emergency::getStatus(){
	//TODO Implement
	return this->status;
}

void Emergency::setStatus(Status status){
	//TODO Implement
	this ->status = status;
}

void Emergency::TransportStaff(Staff* assignedStaff){



	 status = TRANSPORTED;
	 assignedStaff->isTransported(true);
}

std::vector<Staff*> Emergency::getAssignedStaff(){

	return this->assignedStaff;
}

void Emergency::assignStaff(Staff *staff){
	//TODO Implement
	if((status != TRANSPORTED) && (status != COMPLETED)){
	   assigned = true;
       staff->setAssigned(assigned);



	   assignedStaff.push_back(staff);


       status = ASSIGNED;
	}else{
		assigned = false;
		staff->setAssigned(assigned);


    }


}




bool Emergency::resolve(){
	//TODO Implement
	if(status == COMPLETED){
        return true;
    }else if(status != COMPLETED && (assigned)){
		for(unsigned int i = 0; i < assignedStaff.size();i++){
			assignedStaff[i]->performJob();
		}
		status = COMPLETED;
		return true;
	}else{
	    return false;
	}
}


Emergency::~Emergency() {

	delete victim;
	victim = 0;
	delete suspect;
    suspect = 0;
	delete address;
	address = 0;

    // TODO Auto-generated destructor stub
}

