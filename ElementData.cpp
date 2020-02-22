#ifndef ELEMENTDATA
#define ELEMENTDATA
#include<vector>
#include<string>
#include<iostream>
#include"Element.h"
using namespace std;

vector<Element> createPeriodicTable()
{
	vector<Element> periodicTalbe(118);
	Isotope iso[10];
	static short oxi[8] = { -1, 1 };

	iso[0] = Isotope("——", 0, "H-1", "——", 99.9885);
	iso[1] = Isotope("——", 0, "H-2", "——", 0.0115);
	iso[2] = Isotope("12.32年", 2, "H-3", "He-3", 0.0);
	Element H(iso, "1s1", -259.16, -252.879, 0.08988, oxi, "氢", "H", "ⅠA", 1, 1);
	periodicTalbe[0] = H;

	iso[0] = Isotope("——", 0, "He-3", "——", 0.000137);
	iso[1] = Isotope("——", 0, "He-4", "——", 99.999863);
	iso[2] = Isotope("<1纳秒", 3, "He-5", "He-4", 0.0);
	Element He(iso, "2s1", -272.20, -268.928, 0.1786, oxi, "氦", "He", "0", 2, 1);
	periodicTalbe[1] = He;
	periodicTalbe[0].display();
	periodicTalbe[1].display();
	system("pause");

	return periodicTalbe;
}

#endif//ELEMENTDATA