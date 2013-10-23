//main driver file of grading system project

#include <iostream>
#include "InputReader.h"
#include "Validator.h"
#include "Grader.h"
#include "OutputWriter.h"

int main(int argc, char* argv[])
{
	InputReader iReader;
	Validator validator;
	Grader grader;
//	OutputWriter oWriter;
	
	iReader.scanSubmissionMethod(argc);
	iReader.scanInput();
//	validator.validateInput(iReader.getInput());
//	grader.grade(iReader.getInput());
//	oWriter.displayResult(grader.getGrade());
	

	
	return 0;
}
