#ifndef ADDRESS_HPP_
#define ADDRESS_HPP_
#include <iostream>
class Address {
private:
	//TODO Add Members
	std::string street;
	std::string suburb;
	std::string postcode;
	int number;
    	Address& operator=(const Address& other);
    	Address(const Address& other);
public:
	Address(int number, std::string street, std::string suburb, std::string postcode);
	int getNumber();
	std::string getStreet();
	std::string getSuburb();
	std::string getPostcode();
	bool operator != (const Address& other);
    void checkNumber(int number);
    void checkPostcode( std:: string postcode); // helper member to check postcode
	void changeAddressTo(int number, std::string street, std::string suburb, std::string postcode);

	virtual ~Address();
};

#endif /* ADDRESS_HPP_ */
