#pragma once 

class AAA{
protected: 
	static AAA *head; //статическая компонента 
public:

	AAA *next; 
	virtual void add()=0;
	static void show();
	virtual void print()=0;
};