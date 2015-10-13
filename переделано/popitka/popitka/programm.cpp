#include "stdafx.h"
#include "programm.h"
#include <iostream>
using namespace std;

programm::programm(string n, string oc)
{
	prname = n;
	ocnov = oc;
}
void programm::setname(string str)
{
	prname = str;
}
string programm::getname()
{
	return prname;
}
void programm::setnomer(string str)
{
	ocnov = str;
}
string programm::getnomer()
{
	return ocnov;
}

void programm::print()
{
	cout<<"Название программы:\t"<<getname()<<"\n";
	cout<<"Основатель программы:\t"<<getnomer()<<"\n";
}

void programm::add()
{
	if(!head)
	{
		head = this;
		this->next= NULL;
	}
	else
		{	AAA *p = head;
			if (p->next==NULL)
			{
				p->next = this;
				this->next=NULL;
			}
			else
			{
				while(p->next!=NULL)
				p=p->next;
			}
		p->next=this;
		this->next=NULL;
		}
}
