#include "OutputWriter.h"

//default constructor
OutputWriter::OutputWriter()
{

}
//default destructor
OutputWriter::~OutputWriter()
{
}
//display grading result
void OutputWriter::displayResult(const float score)
{
	cout << "Your score is " << score << endl;
}	
