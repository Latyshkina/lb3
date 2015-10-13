#pragma once 
#include "rezecer.h"
#include "programm.h"
using namespace std;

class picfilm: public programm 
{	
	rezecer rez2;
	string pflname;

public:
	picfilm() {};
	picfilm(string,string,int,string,string);
	void setrez2(string, int);
	rezecer getreze();
	void setnamepicfilm(string);
	string getnamepicfilm();
	virtual void print();

protected: 
	int a;
};