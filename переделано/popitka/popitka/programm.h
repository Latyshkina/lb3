#pragma once 
#include <string>
#include "AAA.h"
using namespace std;

class programm: public AAA
{
	string prname;
	string ocnov;
	
public: 
	programm(string, string);
	programm() {};
	void setname(string);
	string getname();
	void setnomer(string);
	string getnomer();
	virtual void print();
	void add();
};