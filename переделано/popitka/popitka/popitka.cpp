// popitka.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	
	programm t("���", "�����");
	t.add();
	AAA::show();
	cout<<endl;

	cartoon car("������ �", "��������", 34, "���", "�������");
	car.add();
	AAA::show();
	cout<<endl;

	film fil("��������", "�����", 26, "���", "�������");
	fil.add();
	AAA::show();
	cout<<endl;

	picfilm picfil("���� ����", "�������", 44, "���", "������");
	picfil.add();
	AAA::show();

	
	return 0;
}

