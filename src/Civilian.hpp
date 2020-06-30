#include "Human.hpp"
#ifndef CIVILIAN_HPP_
#define CIVILIAN_HPP_

class Civilian : public Human {
//TODO Implement Civilian Class
private:

    int totaldebt;
	Civilian& operator=(const Civilian& other);
    Civilian(const Civilian& other);
protected:

    std::string name;
public:
	Civilian(const std::string &name);
	int getDebt();
	void increaseDebt(int debt);
	void decreaseDebt(int debt);

};

#endif /* CIVILIAN_HPP_ */
