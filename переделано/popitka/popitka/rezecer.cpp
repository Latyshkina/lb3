#include "stdafx.h"
#include "rezecer.h"
#include <iostream>
using namespace std;

rezecer::rezecer(string n, int v)
{
	name = n;
	vosrast = v;
}
rezecer::rezecer()
{
	name = "";
	vosrast = 0;
}
void rezecer::setnamee(string str)
{
	name = str;
}
string rezecer::getnamee()
{
	return name;
}
void rezecer::setVosrast(int vos)
{
	vosrast = vos;
}
int rezecer::getVosrast()
{
	return vosrast;
}

void rezecer::print()
{
	cout<<"Имя режисера:\t"<<getnamee()<<"\n";
	cout<<"Возраст режисера:\t"<<getVosrast()<<"\n";
}