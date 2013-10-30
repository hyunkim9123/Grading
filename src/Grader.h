//TODO: set the right answers in the system and grade the submitted answers

#ifndef GRADER_H
#define GRADER_H
#include "Common.h"
class Grader{
public:
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
	void setRightAnswers();
};
#endif
