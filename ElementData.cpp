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
	static short oxi[8] = { -1,1 };

	iso[0] = Isotope("——", 0, "H-1", "——", 99.9885);
	iso[1] = Isotope("——", 0, "H-2", "——", 0.0115);
	iso[2] = Isotope("12.32年", 2, "H-3", "He-3", 0.0);
	static Element H(iso, "s1", -259.16, -252.879, 1.008, oxi, "氢", "H", "ⅠA", 1, 1);
	periodicTable.push_back(H);

	oxi[0] = oxi[1] = 0;
	iso[0] = Isotope("——", 0, "He-3", "——", 0.000137);
	iso[1] = Isotope("——", 0, "He-4", "——", 99.999863);
	iso[2] = Isotope("<1微秒", 3, "He-5", "He-4", 0.0);
	static Element He(iso, "s2", -272.20, -268.928, 4.003, oxi, "氦", "He", "0", 2, 1);
	periodicTable.push_back(He);

	oxi[0] = 1;
	iso[0] = Isotope("<1微秒", 4, "Li-5", "He-4", 0.0);
	iso[1] = Isotope("——", 0, "Li-6", "——", 7.5);
	iso[2] = Isotope("——", 0, "Li-7", "——", 92.5);
	static Element Li(iso, "[He]s1", 180.54, 1342, 6.941, oxi, "锂", "Li", "ⅠA", 3, 2);
	periodicTable.push_back(Li);

	oxi[0] = 2;
	iso[0] = Isotope("53.12天", 5, "Be-7", "Li-7", 0.0);
	iso[1] = Isotope("——", 0, "Be-9", "——", 100);
	iso[2] = Isotope("136万年", 2, "Be-10", "B-10", 0);
	static Element Be(iso, "[He]s2", 1287, 2469, 9.012, oxi, "铍", "Be", "ⅡA", 4, 2);
	periodicTable.push_back(Be);

	oxi[0] = 3;
	iso[0] = Isotope("——", 0, "B-10", "——", 19.9);
	iso[1] = Isotope("——", 0, "B-11", "——", 80.1);
	iso[2] = Isotope();
	static Element B(iso, "[He]s2p1", 2076, 3927, 10.811, oxi, "硼", "B", "ⅢA", 5, 2);
	periodicTable.push_back(B);

	short oxiC[8] = { -4,-3,-2,-1,1,2,3,4 };
	memcpy(oxi, oxiC, sizeof(short) * 8);
	iso[0] = Isotope("20分钟", 2, "C-11", "B-11", 0.0);
	iso[1] = Isotope("——", 0, "C-12", "——", 98.9);
	iso[2] = Isotope("——", 0, "C-13", "——", 1.1);
	iso[3] = Isotope("5730年", 2, "C-14", "N-14", 0.0);
	static Element C(iso, "[He]s2p2", 3675, 4027, 12.011, oxi, "碳", "C", "ⅣA", 6, 2);
	periodicTable.push_back(C);

	short oxiN[8] = { -3,-2,-1,1,2,3,4,5 };
	memcpy(oxi, oxiN, sizeof(short) * 8);
	iso[0] = Isotope("9.965分钟", 5, "N-13", "C-13", 0.0);
	iso[1] = Isotope("——", 0, "N-14", "——", 99.643);
	iso[2] = Isotope("——", 0, "N-15", "——", 0.366);
	iso[3] = Isotope();
	static Element N(iso, "[He]s2p3", -210.0, -195.79, 14.007, oxi, "氮", "N", "ⅤA", 7, 2);
	periodicTable.push_back(N);

	short oxiO[8] = { -2,-1,2 };
	memcpy(oxi, oxiO, sizeof(short) * 8);
	iso[0] = Isotope("——", 0, "O-16", "——", 99.76);
	iso[1] = Isotope("——", 0, "O-17", "——", 0.039);
	iso[2] = Isotope("——", 0, "O-18", "——", 0.201);
	static Element O(iso, "[He]s2p4", -218.79, -182.962, 15.999, oxi, "氧", "O", "ⅥA", 8, 2);
	periodicTable.push_back(O);

	oxi[0] = -1, oxi[1] = oxi[2] = 0;
	iso[0] = Isotope("109.77分钟", 2, "F-18", "O-18", 0.0);
	iso[1] = Isotope("109.77分钟", 5, "F-18", "O-18", 0.0);
	iso[2] = Isotope("——", 0, "F-19", "——", 100);
	static Element F(iso, "[He]s2p5", -219.62, -188.12, 18.998, oxi, "氟", "F", "ⅦA", 9, 2);
	periodicTable.push_back(F);

	oxi[0] = 0;
	iso[0] = Isotope("——", 0, "Ne-20", "——", 90.48);
	iso[1] = Isotope("——", 0, "Ne-21", "——", 0.27);
	iso[2] = Isotope("——", 0, "Ne-22", "——", 9.25);
	static Element Ne(iso, "[He]s2p6", -248.59, -246.08, 20.180, oxi, "氖", "Ne", "0", 10, 2);
	periodicTable.push_back(Ne);

	oxi[0] = 1;
	iso[0] = Isotope("2.602年", 2, "Na-22", "Ne-22", 0.0);
	iso[1] = Isotope("2.602年", 5, "Na-22", "Ne-22", 0.0);
	iso[2] = Isotope("——", 0, "Na-23", "——", 100);
	static Element Na(iso, "[Ne]s1", 97.72, 883, 22.990, oxi, "钠", "Na", "ⅠA", 11, 3);
	periodicTable.push_back(Na);

	oxi[0] = 2;
	iso[0] = Isotope("——", 0, "Mg-24", "——", 78.99);
	iso[1] = Isotope("——", 0, "Mg-25", "——", 10.00);
	iso[2] = Isotope("——", 0, "Mg-26", "——", 11.01);
	static Element Mg(iso, "[Ne]s2", 650, 1091, 24.869, oxi, "镁", "Mg", "ⅡA", 12, 3);
	periodicTable.push_back(Mg);

	oxi[0] = 3;
	iso[0] = Isotope("71.7万年", 2, "Al-26", "Mg-26", 0.0);
	iso[1] = Isotope("71.7万年", 5, "Al-26", "Mg-26", 0.0);
	iso[2] = Isotope("——", 0, "Al-27", "——", 100);
	static Element Al(iso, "[Ne]s2p1", 660.32, 2519, 26.982, oxi, "铝", "Al", "ⅢA", 13, 3);
	periodicTable.push_back(Al);

	oxi[0] = 4;
	iso[0] = Isotope("——", 0, "Si-28", "——", 92.23);
	iso[1] = Isotope("——", 0, "Si-29", "——", 4.67);
	iso[2] = Isotope("——", 0, "Si-30", "——", 3.1);
	iso[3] = Isotope("153年", 2, "Si-32", "P-32", 0.0);
	static Element Si(iso, "[Ne]s2p2", 1414, 3265, 28.085, oxi, "硅", "Si", "ⅣA", 14, 3);
	periodicTable.push_back(Si);

	return periodicTable;
}

#endif//ELEMENTDATA
//ⅠⅡⅢⅣⅤⅥⅦⅧA