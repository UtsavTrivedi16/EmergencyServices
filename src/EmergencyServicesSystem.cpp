#include "EmergencyServicesSystem.hpp"
#include <iostream>
#include <vector>

EmergencyServicesSystem::EmergencyServicesSystem() {

	this->diff_emergency =true;
	this->select = 0;
    this->capacity = 0;
    this->check_transported = CRITICAL;
    this->assigned = false;


}




bool EmergencyServicesSystem::checkAddress(Address* address){
	 for(unsigned int i = 0; i < emergencies.size();i++){
		 if(*emergencies[i]->getAddress() != *address){
		   diff_emergency = true;

		 }else{
		  select= i;
		  diff_emergency = false;
		  break;


		  }

     }
	 return diff_emergency;
}

bool EmergencyServicesSystem::addEmergency(Emergency* emergency){

   if(emergencies.size()>=1){

		for(unsigned int i = 0; i < emergencies.size();i++){

			diff_emergency = checkAddress(emergency ->getAddress());
			if(diff_emergency){
				emergencies.push_back(emergency);
			}else{
				break;
			}

		}
    }else{
	    emergencies.push_back(emergency);


	}
     return diff_emergency;
}

void EmergencyServicesSystem::buyVehicle(Vehicle* vehicle){
	vehicles.push_back(vehicle);
    capacity = capacity + vehicle ->getCapacity();



}

bool EmergencyServicesSystem::transportStaff(Address* address){
    diff_emergency = checkAddress(address);
    if(diff_emergency){
    	return false;

    }else if(emergencies[select]->assignedStaff.size() == 0){
    	return false;

    }else if(capacity < emergencies[select]->assignedStaff.size()){
    	return false;

    }else{
    	for(unsigned int i = 0; i < (emergencies[select]->assignedStaff.size());i++){
    	emergencies[select]->TransportStaff(emergencies[select]->assignedStaff[i]);

        }
        return true;

    }
}

// I chose to assign my staff to my victims and suspects in system_services rather than emergency
bool EmergencyServicesSystem::assignStaffToEmergency(Address* address, int numPoliceOfficers, int numParamedics, int numFireFighters){
      int not_assigned = 0;
	  diff_emergency = checkAddress(address);


	  if(diff_emergency){
	      return false;
	  }else if(policemen.size() < unsigned(numPoliceOfficers) || firefighters.size() < unsigned(numFireFighters) || paramedics.size() < unsigned(numParamedics)){

	      return false;
      }else{
		for(unsigned int i = 0; i < firefighters.size();i++){
			assigned = firefighters[i]->isAssigned();

			if(!assigned){

			emergencies[select]->assignStaff(firefighters[i]);

			}else{
				not_assigned++;
			}

		}

		for(unsigned int i = 0; i < policemen.size();i++){
			assigned = policemen[i]->isAssigned();
			if(!assigned){

			emergencies[select]->assignStaff(policemen[i]);
			policemen[i]->assignSuspect(emergencies[select]->getSuspect());

			}else{
				not_assigned++;
			}


		}

		for(unsigned int i = 0; i < paramedics.size();i++){

			assigned = paramedics[i]->isAssigned();
			if(!assigned){

			emergencies[select]->assignStaff(paramedics[i]);
			paramedics[i]->assignVictim(emergencies[select]->getVictim());

			}else{
				not_assigned++;
			}

		}
		   if(not_assigned > 0){

		       return false;
           }else{
        	   return true;
           }
        }

     }



bool EmergencyServicesSystem::resolveEmergency(Address* address){
	 diff_emergency = checkAddress(address);
	 check_transported = emergencies[select]->getStatus();

	 if(diff_emergency){
		return false;

	 }else if(check_transported != TRANSPORTED){
		 return false;
	 }else{
		 emergencies[select]->resolve();
		 return true;
	     }
	 }



int  EmergencyServicesSystem::getStaffCount(){
	unsigned int staff = firefighters.size() + paramedics.size() + policemen.size();

	return staff;
}

void EmergencyServicesSystem::hireFireFighter(FireFighter* fireFighter){
	firefighters.push_back(fireFighter);

}

void EmergencyServicesSystem::hirePoliceOfficer(PoliceOfficer* policeOfficer){
	policemen.push_back(policeOfficer);

}

void EmergencyServicesSystem::hireParamedic(Paramedic* paramedic){
	paramedics.push_back(paramedic);
}

std::string EmergencyServicesSystem::author(){
	//TODO Implement
	return "utri092";
}

// TODO implement all the other methods and destructor for EmergencyServicesSystem

EmergencyServicesSystem::~EmergencyServicesSystem(){


	for(unsigned int i = 0; i < emergencies.size();i++){

		    delete emergencies[i];
	}

	for(unsigned int i = 0; i < firefighters.size();i++){
		    delete firefighters[i];
	}

	for(unsigned int i = 0; i < paramedics.size();i++){

			delete paramedics[i];
	}

	for(unsigned int i = 0; i < policemen.size();i++){
			delete policemen[i];
    }

	for(unsigned int i = 0; i < vehicles.size();i++){
			delete vehicles[i];
	}





	//TODO Implement destructor
}

