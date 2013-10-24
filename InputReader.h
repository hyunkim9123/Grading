#ifndef INPUTREADER_H
#define INPUTREADER_H
#include "Common.h"
class InputReader
{
public:
//allocate the answer string
	InputReader();
//de-allocate the answer string
	~InputReader();
//decide scan method
	void scanSubmissionMethod(const int argc);
//get the answer from the user
	void scanInput();
//return the answer in the instance
	string *getInput();
private:
	SUB_TYPE subtype;
	string *answer;
};
#endif
