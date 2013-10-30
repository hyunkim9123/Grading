//TODO: print out the results of grading
#ifndef OUTPUTWRITER_H
#define OUTPUTWRITER_H

#include "Common.h"
class OutputWriter{
public:
	OutputWriter();
	~OutputWriter();
	void displayResult(const float score);
};
#endif
