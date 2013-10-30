//TODO: Detect invalid formatted answers
#ifndef VALIDATOR_H
#define VALIDATOR_H
#include <iostream>
using namespace std;
class Validator{
public:
	Validator();
	~Validator();
	//validate the input
	bool validateInput(const string *answer);
private:
};
#endif
