#include "stdafx.h"
#include "advertising.h"
#include "rezecer.h"
#include <iostream>
using namespace std;

advertising::advertising()
{
	cout<<"���������� ����������� �������"<<endl;
}
 
void advertising::setadvertising(int time)
{
	this->time=time;
}
void advertising::getadvertising()
{
	cout<<"����� ����������������� � ��������:"<<this->time<<endl;
}
advertising::~advertising()
{
	cout<<"���������� ���������� �������"<<endl;
}