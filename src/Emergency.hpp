#include "Address.hpp"
#include "Victim.hpp"
#include "Suspect.hpp"
#include "Staff.hpp"
#include <vector>
#ifndef EMERGENCY_HPP_
#define EMERGENCY_HPP_
enum Status {
	CRITICAL,
	ASSIGNED,
	TRANSPORTED,
	COMPLETED
};
//TODO Add members as needed
class Emergency {
private:

	Emergency& operator=(const Emergency& other);
	Emergency(const Emergency& other);
	Status status;
	Victim *victim;
	Suspect *suspect;
	Address *address;
	bool assigned;







public:
	Emergency(Address* address, Victim* victim, Suspect* suspect);

	Address* getAddress();
	Suspect* getSuspect();
	Victim* getVictim();
	Status getStatus();
	void setStatus(Status status);
	void assignStaff(Staff* staff);
	std::vector<Staff*> getAssignedStaff();
	void TransportStaff(Staff* assignedStaff);
	bool resolve();
	std::vector<Staff*> assignedStaff;


	virtual ~Emergency();
};

#endif /* EMERGENCY_HPP_ */
