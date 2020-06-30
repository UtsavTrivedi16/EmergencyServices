#include "Civilian.hpp"
#ifndef VICTIM_HPP_
#define VICTIM_HPP_

class Victim : public Civilian {
//TODO add members as needed
private:

    	Victim& operator=(const Victim& other);
    	Victim(const Victim& other);
    	int treat_cnt;
    	bool treated;
public:
	Victim(const std::string &name);
	bool isTreated();
	int getTreatedByAmount();
	void treatvictim();
	virtual ~Victim();
};

#endif /* VICTIM_HPP_ */
