#ifndef VALIDATOR_H
#define VALIDATOR_H
#include <iostream>
using namespace std;
class Validator{
public:
	//default constructor
	Validator();
	//default destructor
	~Validator();
	//validate the input
	bool validateInput(const string *answer);
private:
};
#endif
