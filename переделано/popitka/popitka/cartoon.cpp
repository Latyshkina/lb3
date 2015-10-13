#include "stdafx.h"
#include "cartoon.h"
#include "rezecer.h"
#include <iostream>
#include "programm.h"
using namespace std;

cartoon::cartoon(string crn, string name, int vosrast, string prname, string ocnov):programm(prname,ocnov)
{
	crname = crn;
	rez.setnamee(name);
	rez.setVosrast(vosrast);
}
void cartoon::setrez(string name, int vosrast)
{
	rezecer::rezecer(name, vosrast);
}
rezecer cartoon::getrez()
{
	return rezecer();
}
void cartoon::setnamecartoon(string crn)
{
	crname = crn;
}
string cartoon::getnamecartoon()
{
	return crname;
}
void cartoon::print()
{
	programm::print();
	cout<<"Мультфильм:\t"<<"\n";
	rez.print();
	cout<<"Название мультфильма:\t"<<getnamecartoon()<<"\n";
}