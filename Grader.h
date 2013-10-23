#ifndef GRADER_H
#define GRADER_H
#include "Common.h"
class Grader{
public:
	Grader();
	~Grader();
	bool grade(const string *answer);
	float getGrade();
private:
	float score;
	string *rgtAnswers;
	void setRightAnswers();
};
#endif
