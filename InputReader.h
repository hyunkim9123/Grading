#ifndef INPUTREADER_H
#define INPUTREADER_H
#include <iostream>

using namespace std;
class Examinee
{
public:
	Examinee()
	{
		cout << "created" << endl;
	}
	~Examinee()
	{
		cout << "Destroyed" << endl;
	}
};
#endif
