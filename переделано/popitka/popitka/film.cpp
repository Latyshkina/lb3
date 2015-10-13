#include "stdafx.h"
#include "film.h"
#include "programm.h"
#include "rezecer.h"
#include <iostream>
using namespace std;

film::film(string fln, string name, int vosrast, string prname, string ocnov):programm(prname,ocnov)
{
	flname = fln;
	rez1.setnamee(name);
	rez1.setVosrast(vosrast);
}
void film::setrez1(string name, int vosrast)
{
	rezecer::rezecer(name, vosrast);
}
rezecer film::getreze()
{
	return rezecer();
}
void film::setnamefilm(string fln)
{
	flname = fln;
}
string film::getnamefilm()
{
	return flname;
}
void film::print()
{
	programm::print();
	cout<<"Программа:\t"<<"\n";
	rez1.print();
	cout<<"Название фильма:\t"<<getnamefilm()<<"\n";
}