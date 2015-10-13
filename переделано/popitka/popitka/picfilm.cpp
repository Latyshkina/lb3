#include "stdafx.h"
#include "programm.h"
#include "picfilm.h"
#include <iostream>
#include "rezecer.h"
using namespace std;

picfilm::picfilm(string pfln, string name, int vosrast, string prname, string ocnov):programm(prname,ocnov)
{
	pflname = pfln;
	rez2.setnamee(name);
	rez2.setVosrast(vosrast);
}
void picfilm::setrez2(string name, int vosrast)
{
	rezecer::rezecer(name, vosrast);
}
rezecer picfilm::getreze()
{
	return rezecer();
}
void picfilm::setnamepicfilm(string pfln)
{
	pflname = pfln;
}
string picfilm::getnamepicfilm()
{
	return pflname;
}
void picfilm::print()
{
	programm::print();
	cout<<"Программа:\t"<<"\n";
	rez2.print();
	cout<<"Название художественного фильма:\t"<<getnamepicfilm()<<"\n";
}