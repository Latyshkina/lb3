#pragma once
#include <string>
using namespace std;

class rezecer
{
	string name;
	int vosrast;
public:
	rezecer(string, int);
	rezecer();
	void setnamee(string);
	string getnamee();
	void setVosrast(int);
	int getVosrast();
	virtual void print();
};