#ifndef ELEMENTDATA
#define ELEMENTDATA
#include<vector>
#include<string>
#include<iostream>
#include"Element.h"
using namespace std;

vector<Element> createPeriodicTable()
{
	vector<Element> periodicTable;
	static Isotope iso[10];
	static short oxi[8] = { -1, 1 };

	iso[0] = Isotope("——", 0, "H-1", "——", 99.9885);
	iso[1] = Isotope("——", 0, "H-2", "——", 0.0115);
	iso[2] = Isotope("12.32年", 2, "H-3", "He-3", 0.0);
	static Element H(iso, "s1", -259.16, -252.879, oxi, "氢", "H", "ⅠA", 1, 1);
	periodicTable.push_back(H);

	oxi[0] = oxi[1] = 0;
	iso[0] = Isotope("——", 0, "He-3", "——", 0.000137);
	iso[1] = Isotope("——", 0, "He-4", "——", 99.999863);
	iso[2] = Isotope("<1微秒", 3, "He-5", "He-4", 0.0);
	static Element He(iso, "s2", -272.20, -268.928, oxi, "氦", "He", "0", 2, 1);
	periodicTable.push_back(He);

	oxi[0] = 1;
	iso[0] = Isotope("<1微秒", 4, "Li-5", "He-4", 0.0);
	iso[1] = Isotope("——", 0, "Li-6", "——", 7.5);
	iso[2] = Isotope("——", 0, "Li-7", "——", 92.5);
	static Element Li(iso, "[He]s1", 180.54, 1342, oxi, "锂", "Li", "ⅠA", 3, 2);
	periodicTable.push_back(Li);

	oxi[0] = 2;
	iso[0] = Isotope("53.12天", 5, "Be-7", "Li-7", 0.0);
	iso[1] = Isotope("——", 0, "Be-9", "——", 100);
	iso[2] = Isotope("136万年", 2, "Be-10", "B-10", 0);
	static Element Be(iso, "[He]s2", 1287, 2469, oxi, "铍", "Be", "ⅡA", 4, 2);
	periodicTable.push_back(Be);

	oxi[0] = 3;
	iso[0] = Isotope("——", 0, "B-10", "——", 19.9);
	iso[1] = Isotope("——", 0, "B-11", "——", 80.1);
	iso[2] = Isotope();
	static Element B(iso, "[He]s2p1", 2076, 3927, oxi, "硼", "B", "ⅢA", 5, 2);
	periodicTable.push_back(B);

	return periodicTable;
}

#endif//ELEMENTDATA
//ⅠⅡⅢⅣⅤⅥⅦⅧA