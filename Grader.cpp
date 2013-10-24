#include "Grader.h"
//set the right answers in the system
Grader::Grader()
{
	setRightAnswers();
}
Grader::~Grader()
{

}
//get grade
float Grader::getGrade()
{
	return score;
}
//do grading
bool Grader::grade(const string *answer)
{
	int cnt = 0;
	for(int i = 0 ; i < NUMINPUT; i++)
	{
		if(answer[i] == rgtAnswers[i])
		{
			cnt++;
		}
	}	
	score = (float) cnt / 20 * 100;
}
//set the right answers in the system
void Grader::setRightAnswers()
{
	rgtAnswers = new string[NUMINPUT];
	int k;
	srand(time(NULL));
	string temp[4] = {"a", "b", "c", "d"};
	for(int i = 0; i < NUMINPUT; i++)
	{
		k = rand() % 4;
		rgtAnswers[i] = temp[k];		
	
	}

}
