#pragma once
#include "programm.h"
#include "rezecer.h"
using namespace std;

class film:	public programm 
{	 
	rezecer rez1;
	string flname;

public:
	film() {};
	film(string,string,int,string,string);
	void setrez1(string, int);
	rezecer getreze();
	void setnamefilm(string);
	string getnamefilm();
	virtual void print();

protected: 
	int a;
};