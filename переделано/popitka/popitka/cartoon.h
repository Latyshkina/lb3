#pragma once
#include "rezecer.h"
#include "programm.h"
using namespace std;

class cartoon: public programm 
{
	rezecer rez;
	string crname;

public:
	cartoon() {};
	cartoon(string,string,int,string,string);
	void setrez(string,int);
	rezecer getrez();
	void setnamecartoon(string);
	string getnamecartoon();
	virtual void print();

protected:
	int a;
};