#ifndef GRADER_H
#define GRADER_H
#include "Common.h"
class Grader{
public:
	//set the right answers in the system
	Grader();
	//default destructor
	~Grader();
	//do grading
	bool grade(const string *answer);
	//get grade
	float getGrade();
private:
	//the grading result score
	float score;
	//right answer string
	string *rgtAnswers;
	//set the right answers in the system
	void setRightAnswers();
};
#endif
