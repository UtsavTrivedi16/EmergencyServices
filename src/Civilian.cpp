#include "Civilian.hpp"

Civilian::Civilian(const std::string &name) : Human(name) {
	//TODO Implement
	this -> name = name;
    this -> totaldebt = 0;


}

int Civilian::getDebt(){
	//TODO Implement

    return totaldebt;
}

void Civilian::increaseDebt(int debt){
	//TODO Implement

	 totaldebt += debt;

}

void Civilian::decreaseDebt(int debt){
	//TODO Implement

    totaldebt -= debt;
    if(totaldebt < 0){
    	totaldebt = 0;
    }

}






