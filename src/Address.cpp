#include "Address.hpp"

Address::Address(int number, std::string street, std::string suburb, std::string postcode){
	//TODO IMPLEMENT


    this -> number = number;
	this -> street = street;
	this -> suburb = suburb;
	this -> postcode = postcode;




}

void Address::checkNumber(int number){
	if(number > 999|| number < 10){
        this -> number = 10;
	}else{
		this -> number = number;
	}
}

void Address::checkPostcode(std::string postcode){
	int i = 0;
        if((postcode.size() != 4)){
        	this->postcode  = "1111";

        }else if((postcode[i] < '1') || (postcode[i] > '4')){
		    this->postcode  = "1111";

		}else if((postcode[i+1] < '1') || (postcode[i+1] > '4')){
			this->postcode  = "1111";

		}else if((postcode[i+2] < '0') || (postcode[i+2] > '9')){
			this->postcode  = "1111";

		}else if(postcode[i+3] < '0' || postcode[i+3] > '9'){
		    this->postcode  = "1111";

		}else{
			this -> postcode = postcode;
		}


}

void Address::changeAddressTo(int number, std::string street, std::string suburb, std::string postcode){
	//TODO IMPLEMENT
	this -> number = number;
	this -> street = street;
	this -> suburb = suburb;
	this -> postcode = postcode;
checkNumber(number);
checkPostcode(postcode);

}

int Address::getNumber() {
	//TODO IMPLEMENT
    checkNumber(number);
	return this->number;
}

std::string Address::getPostcode() {
	//TODO IMPLEMENT

    checkPostcode(postcode);
	return this->postcode;
}

std::string Address::getStreet() {
	//TODO IMPLEMENT
	return this->street;
}

std::string Address::getSuburb() {
	//TODO IMPLEMENT
	return this->suburb;
}
bool Address::operator !=(const Address& other){
	if(number != other.number && postcode != other.postcode && street != other.street && suburb != other.suburb ){

		return true;
	}else{
		   return false;
	 }

}

Address::~Address() {
	// TODO Auto-generated destructor stub
}

