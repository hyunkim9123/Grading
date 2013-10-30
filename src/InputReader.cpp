#include <iostream>
#include "InputReader.h"
//allocate the answer string
InputReader::InputReader()
{
	answer = new string[NUMINPUT];
}
//de-allocate the answer string
InputReader::~InputReader()
{
	delete[] answer;
}
//decide scan method
void InputReader::scanSubmissionMethod(const int argc)
{
	if(argc == 1)
	{
		subtype = PROMPT;
	}
        else if(argc == 2)
	{
		subtype = COM_LINE;
	}
}
//return the answer in the instance
string* InputReader::getInput()
{
	return answer;
}
//scan the input from the user
void InputReader::scanInput()
{
	if(subtype == PROMPT){
		for(int i = 0; i < 20; i ++)
		{
			cout << "Enter your answer for " << i + 1 << "th problem " << endl;
			cin >> answer[i];
			cin.clear();
		}
	}
}

