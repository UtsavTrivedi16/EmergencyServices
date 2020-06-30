#include "Human.hpp"
#include "Address.hpp"
#include "Civilian.hpp"


#ifndef STAFF_HPP_
#define STAFF_HPP_

class Staff : public Human {
//TODO Implement Human class
private:
	static int nextID;

	Staff& operator=(const Staff& other);
    	Staff(const Staff& other);
protected:

    int ID;
    bool assigned;
    bool jobcomplete;
    bool transported;
public:
	Staff(const std::string &name);
	virtual void performJob();

	void setAssigned(bool assigned);
	bool isAssigned();
	bool isTransported(bool transported); // helper transport
	bool isJobComplete();
	int getID();
	virtual ~Staff();
};



#endif /* STAFF_HPP_ */
