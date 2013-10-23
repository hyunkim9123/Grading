#include <iostream>
#include "InputReader.h"
InputReader::InputReader()
{
	answer = new string[NUMINPUT];
}
InputReader::~InputReader()
{
	delete[] answer;
}
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
string* InputReader::getInput()
{
	return answer;
}
void InputReader::scanInput()
{
	if(subtype == PROMPT){
		for(int i = 0; i < 20; i ++)
		{
			cout << "Enter your answer for " << i + 1 << "th problem " << endl;
			cin >> answer[i];
			cin.clear();
		}
/*		for(int i =0 ; i < 20; i++)
		{
			cout << "Entered answer : " << answer[i] << endl;
		}	*/
	}
}

