#include "Civilian.hpp"
#ifndef SUSPECT_HPP_
#define SUSPECT_HPP_

class Suspect : public Civilian{
//TODO Add members as needed
private:

    	Suspect& operator=(const Suspect& other);
    	Suspect(const Suspect& other);
    	int caught_cnt;
        bool caught;


public:
	Suspect(const std::string &name);
	bool isCaught();
	int getCaughtByAmount();
	void catchsuspect();
	virtual ~Suspect();

};

#endif /* SUSPECT_HPP_ */
