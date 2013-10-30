#include "Validator.h"
#include "Common.h"

//default constructor
Validator::Validator()
{

}
//default destructor
Validator::~Validator()
{

}

//validate the input
bool Validator::validateInput(const string *answer)
{
	for(int i = 0; i < NUMINPUT; i++)
	{
		if((answer[i] != "a") && (answer[i] != "A")&&
			(answer[i] != "b")&&(answer[i] != "B")&&
				(answer[i] != "c") && (answer[i] != "C") &&	
					(answer[i] != "d")&&(answer[i] != "D"))
			{
				cout << i+1 << "th answer <" <<answer[i] << "> is invalid format " << endl;
			} 

	}
	return true;
}
