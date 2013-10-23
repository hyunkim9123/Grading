#include "Validator.h"
#include "Common.h"

Validator::Validator()
{

}
Validator::~Validator()
{

}
bool Validator::validateInput(const string *answer)
{
	for(int i = 0; i < NUMINPUT; i++)
	{
		if((answer[i] != "a") && (answer[i] != "A")&&
			(answer[i] != "b")&&(answer[i] != "B")&&
				(answer[i] != "c") && (answer[i] != "C") &&	
					(answer[i] != "c")&&(answer[i] != "D"))
			{
				return false;
			} 

	}
	return true;
}
