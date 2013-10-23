#ifndef INPUTREADER_H
#define INPUTREADER_H
#include "Common.h"
class InputReader
{
public:
	InputReader();
	~InputReader();
	void scanSubmissionMethod(const int argc);
	void scanInput();
	string *getInput();
private:
	SUB_TYPE subtype;
	string *answer;
};
#endif
