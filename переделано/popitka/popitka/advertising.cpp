#include "stdafx.h"
#include "advertising.h"
#include "rezecer.h"
#include <iostream>
using namespace std;

advertising::advertising()
{
	cout<<"вызывается конструктор рекламы"<<endl;
}
 
void advertising::setadvertising(int time)
{
	this->time=time;
}
void advertising::getadvertising()
{
	cout<<"Время продолжительности в секундах:"<<this->time<<endl;
}
advertising::~advertising()
{
	cout<<"Вызывается деструктор рекламы"<<endl;
}