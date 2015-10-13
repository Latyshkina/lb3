// popitka.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "film.h"
#include "picfilm.h"
#include "programm.h"
#include "rezecer.h"
#include "advertising.h"
#include "cartoon.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	
	programm t("ОНТ", "Белов");
	t.add();
	AAA::show();
	cout<<endl;

	cartoon car("Гадкий я", "Соловьёв", 34, "НТВ", "Синицин");
	car.add();
	AAA::show();
	cout<<endl;

	film fil("Мстители", "Лютин", 26, "ВТВ", "Никитин");
	fil.add();
	AAA::show();
	cout<<endl;

	picfilm picfil("Один день", "Голубев", 44, "РТР", "Дятлов");
	picfil.add();
	AAA::show();

	
	return 0;
}

