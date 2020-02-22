#ifndef ELEMENTDATA
#define ELEMENTDATA
#include<vector>
#include<string>
#include<iostream>
#include"Element.h"
using namespace std;

vector<Element> createPeriodicTable()
{
	vector<Element> periodicTalbe;

	Isotope iso[3];
	iso[0] = Isotope("——", 0, "H-1", "——", 99.9885);
	iso[1] = Isotope("——", 0, "H-2", "——", 0.0115);
	iso[2] = Isotope("12.32年", 2, "H-3", "He-3", 0.0);
	short oxi[8] = { -1, 1, 0 };
	Element H(iso, "1s1", -259.16, -252.879, 0.08988, oxi, "氢", "H", "ⅠA", 1, 1);
	periodicTalbe.push_back(H);

	periodicTalbe[0].display();
	system("pause");

	return periodicTalbe;
}

#endif//ELEMENTDATA