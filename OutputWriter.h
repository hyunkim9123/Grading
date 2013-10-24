#ifndef OUTPUTWRITER_H
#define OUTPUTWRITER_H

#include "Common.h"
class OutputWriter{
public:
	//default constructor
	OutputWriter();
	//default destructor
	~OutputWriter();
	//display grading result
	void displayResult(const float score);
};
#endif
