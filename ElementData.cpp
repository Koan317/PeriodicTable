#pragma once
#include<vector>
#include<iostream>
#include"Element.h"
using namespace std;

vector<Element> createPeriodicTable()
{
	vector<Element> periodicTable;
	static Isotope iso[10];
	static char oxi[8] = { 9,11 };

	cout << '=';
	iso[0] = Isotope("——", 0, "H-1", "——", 99.9885);
	iso[1] = Isotope("——", 0, "H-2", "——", 0.0115);
	iso[2] = Isotope("12.32年", 2, "H-3", "He-3", 0.0);
	static Element H(iso, "s1", -259.16f, -252.879f, 1.008f, oxi, "氢", "H", "ⅠA", 1, 1);
	periodicTable.push_back(H);

	oxi[0] = oxi[1] = 0;
	iso[0] = Isotope("——", 0, "He-3", "——", 0.000137);
	iso[1] = Isotope("——", 0, "He-4", "——", 99.999863);
	iso[2] = Isotope("<1微秒", 3, "He-5", "He-4", 0.0);
	static Element He(iso, "s2", -272.20f, -268.928f, 4.003f, oxi, "氦", "He", "0", 2, 1);
	periodicTable.push_back(He);

	cout << '=';
	oxi[0] = 11;
	iso[0] = Isotope("<1微秒", 4, "Li-5", "He-4", 0.0);
	iso[1] = Isotope("——", 0, "Li-6", "——", 7.5);
	iso[2] = Isotope("——", 0, "Li-7", "——", 92.5);
	static Element Li(iso, "[He]s1", 180.54f, 1342, 6.941f, oxi, "锂", "Li", "ⅠA", 3, 2);
	periodicTable.push_back(Li);

	oxi[0] = 12;
	iso[0] = Isotope("53.12天", 5, "Be-7", "Li-7", 0.0);
	iso[1] = Isotope("——", 0, "Be-9", "——", 100);
	iso[2] = Isotope("136万年", 2, "Be-10", "B-10", 0);
	static Element Be(iso, "[He]s2", 1287, 2469, 9.012f, oxi, "铍", "Be", "ⅡA", 4, 2);
	periodicTable.push_back(Be);

	cout << '=';
	oxi[0] = 13;
	iso[0] = Isotope("——", 0, "B-10", "——", 19.9);
	iso[1] = Isotope("——", 0, "B-11", "——", 80.1);
	iso[2] = Isotope();
	static Element B(iso, "[He]s2p1", 2076, 3927, 10.811f, oxi, "硼", "B", "ⅢA", 5, 2);
	periodicTable.push_back(B);

	static char oxiC[8] = { 6,7,8,9,11,12,13,14 };
	memcpy(oxi, oxiC, sizeof(char) * 8);
	iso[0] = Isotope("20分钟", 2, "C-11", "B-11", 0.0);
	iso[1] = Isotope("——", 0, "C-12", "——", 98.9);
	iso[2] = Isotope("——", 0, "C-13", "——", 1.1);
	iso[3] = Isotope("5730年", 2, "C-14", "N-14", 0.0);
	static Element C(iso, "[He]s2p2", 3675, 4027, 12.011f, oxi, "碳", "C", "ⅣA", 6, 2);
	periodicTable.push_back(C);

	cout << '=';
	static char oxiN[8] = { 7,8,9,11,12,13,14,15 };
	memcpy(oxi, oxiN, sizeof(char) * 8);
	iso[0] = Isotope("9.965分钟", 5, "N-13", "C-13", 0.0);
	iso[1] = Isotope("——", 0, "N-14", "——", 99.643);
	iso[2] = Isotope("——", 0, "N-15", "——", 0.366);
	iso[3] = Isotope();
	static Element N(iso, "[He]s2p3", -210.0f, -195.79f, 14.007f, oxi, "氮", "N", "ⅤA", 7, 2);
	periodicTable.push_back(N);

	static char oxiO[8] = { 8,9,12 };
	memcpy(oxi, oxiO, sizeof(char) * 8);
	iso[0] = Isotope("——", 0, "O-16", "——", 99.76);
	iso[1] = Isotope("——", 0, "O-17", "——", 0.039);
	iso[2] = Isotope("——", 0, "O-18", "——", 0.201);
	static Element O(iso, "[He]s2p4", -218.79f, -182.962f, 15.999f, oxi, "氧", "O", "ⅥA", 8, 2);
	periodicTable.push_back(O);

	cout << '=';
	oxi[0] = 9, oxi[1] = oxi[2] = 0;
	iso[0] = Isotope("109.77分钟", 2, "F-18", "O-18", 0.0);
	iso[1] = Isotope("109.77分钟", 5, "F-18", "O-18", 0.0);
	iso[2] = Isotope("——", 0, "F-19", "——", 100);
	static Element F(iso, "[He]s2p5", -219.62f, -188.12f, 18.998f, oxi, "氟", "F", "ⅦA", 9, 2);
	periodicTable.push_back(F);

	cout << '=';
	oxi[0] = 0;
	iso[0] = Isotope("——", 0, "Ne-20", "——", 90.48);
	iso[1] = Isotope("——", 0, "Ne-21", "——", 0.27);
	iso[2] = Isotope("——", 0, "Ne-22", "——", 9.25);
	static Element Ne(iso, "[He]s2p6", -248.59f, -246.08f, 20.180f, oxi, "氖", "Ne", "0", 10, 2);
	periodicTable.push_back(Ne);

	cout << '=';
	oxi[0] = 11;
	iso[0] = Isotope("2.602年", 2, "Na-22", "Ne-22", 0.0);
	iso[1] = Isotope("2.602年", 5, "Na-22", "Ne-22", 0.0);
	iso[2] = Isotope("——", 0, "Na-23", "——", 100);
	static Element Na(iso, "[Ne]s1", 97.72f, 883, 22.990f, oxi, "钠", "Na", "ⅠA", 11, 3);
	periodicTable.push_back(Na);

	oxi[0] = 12;
	iso[0] = Isotope("——", 0, "Mg-24", "——", 78.99);
	iso[1] = Isotope("——", 0, "Mg-25", "——", 10.00);
	iso[2] = Isotope("——", 0, "Mg-26", "——", 11.01);
	static Element Mg(iso, "[Ne]s2", 650, 1091, 24.869f, oxi, "镁", "Mg", "ⅡA", 12, 3);
	periodicTable.push_back(Mg);

	cout << '=';
	oxi[0] = 13;
	iso[0] = Isotope("71.7万年", 2, "Al-26", "Mg-26", 0.0);
	iso[1] = Isotope("71.7万年", 5, "Al-26", "Mg-26", 0.0);
	iso[2] = Isotope("——", 0, "Al-27", "——", 100);
	static Element Al(iso, "[Ne]s2p1", 660.32f, 2519, 26.982f, oxi, "铝", "Al", "ⅢA", 13, 3);
	periodicTable.push_back(Al);

	oxi[0] = 14;
	iso[0] = Isotope("——", 0, "Si-28", "——", 92.23);
	iso[1] = Isotope("——", 0, "Si-29", "——", 4.67);
	iso[2] = Isotope("——", 0, "Si-30", "——", 3.1);
	iso[3] = Isotope("153年", 2, "Si-32", "P-32", 0.0);
	static Element Si(iso, "[Ne]s2p2", 1414, 3265, 28.085f, oxi, "硅", "Si", "ⅣA", 14, 3);
	periodicTable.push_back(Si);

	cout << '=';
	static char oxiP[8] = { 7,11,13,15 };
	memcpy(oxi, oxiP, sizeof(char) * 8);
	iso[0] = Isotope("——", 0, "P-31", "——", 100);
	iso[1] = Isotope("14.28天", 2, "P-32", "S-32", 4.67);
	iso[2] = Isotope("25.3天", 2, "P-33", "S-33", 3.1);
	iso[3] = Isotope();
	static Element P(iso, "[Ne]s2p3", 44.2f, 280.5f, 30.974f, oxi, "磷", "P", "ⅤA", 15, 3);
	periodicTable.push_back(P);

	static char oxiS[8] = { 8,12,14,16 };
	memcpy(oxi, oxiS, sizeof(char) * 8);
	iso[0] = Isotope("——", 0, "S-32", "——", 95.02);
	iso[1] = Isotope("——", 0, "S-33", "——", 0.75);
	iso[2] = Isotope("——", 0, "S-34", "——", 4.21);
	iso[3] = Isotope("87.32天", 2, "S-35", "Cl-35", 0.0);
	iso[4] = Isotope("——", 0, "S-36", "——", 0.02);
	static Element S(iso, "[Ne]s2p4", 115.21f, 444.6f, 32.066f, oxi, "硫", "S", "ⅥA", 16, 3);
	periodicTable.push_back(S);

	cout << '=';
	static char oxiCl[8] = { 9,11,13,14,15,17 };
	memcpy(oxi, oxiCl, sizeof(char) * 8);
	iso[0] = Isotope("——", 0, "Cl-35", "——", 75.77);
	iso[1] = Isotope("30.1万年", 2, "Cl-36", "Ar-36", 0.0);
	iso[2] = Isotope("30.1万年", 5, "Cl-36", "S-36", 0.0);
	iso[3] = Isotope("——", 0, "Cl-37", "——", 24.23);
	iso[4] = Isotope();
	static Element Cl(iso, "[Ne]s2p5", -101.5f, -34.04f, 35.45f, oxi, "氯", "Cl", "ⅦA", 17, 3);
	periodicTable.push_back(Cl);

	static char oxiAr[8] = { 0 };
	memcpy(oxi, oxiAr, sizeof(char) * 8);
	iso[0] = Isotope("——", 0, "Ar-36", "——", 0.337);
	iso[1] = Isotope("35天", 5, "Ar-37", "Cl-37", 0.0);
	iso[2] = Isotope("——", 0, "Ar-38", "——", 0.063);
	iso[3] = Isotope("269年", 2, "Ar-39", "K-39", 0.0);
	iso[4] = Isotope("——", 0, "Ar-40", "——", 99.600);
	iso[5] = Isotope("109.34分钟", 2, "Ar-41", "K-41", 0.0);
	iso[6] = Isotope("32.9年", 2, "Ar-42", "K-42", 0.0);
	static Element Ar(iso, "[Ne]s2p6", -189.35f, -185.85f, 39.948f, oxi, "氩", "Ar", "0", 18, 3);
	periodicTable.push_back(Ar);

	cout << '=';
	oxi[0] = 11;
	iso[0] = Isotope("——", 0, "K-39", "——", 93.26);
	iso[1] = Isotope("12.48亿年", 2, "K-40", "Ca-40", 0.015);
	iso[2] = Isotope("12.48亿年", 5, "K-40", "Ar-40", 0.015);
	iso[3] = Isotope("——", 0, "K-41", "——", 6.73);
	iso[4] = Isotope();
	iso[5] = Isotope();
	iso[6] = Isotope();
	static Element K(iso, "[Ar]s1", 63.38f, 759, 39.098f, oxi, "钾", "K", "ⅠA", 19, 4);
	periodicTable.push_back(K);

	cout << '=';
	oxi[0] = 12;
	iso[0] = Isotope(">59万亿亿年", 2, "Ca-40", "Ar-40", 96.941);
	iso[1] = Isotope("10.3万年", 5, "Ca-41", "K-41", 0.0);
	iso[2] = Isotope("——", 0, "Ca-42", "——", 0.647);
	iso[3] = Isotope("——", 0, "Ca-43", "——", 0.135);
	iso[4] = Isotope("——", 0, "Ca-44", "——", 2.086);
	iso[5] = Isotope("162.7天", 2, "Ca-45", "Sc-45", 0.0);
	iso[6] = Isotope(">2800万亿年", 2, "Ca-46", "Ti-46", 0.004);
	iso[7] = Isotope("4.536天", 2, "Ca-47", "Sc-47", 0.0);
	iso[8] = Isotope("43亿亿年", 2, "Ca-48", "Ti-48", 0.187);
	static Element Ca(iso, "[Ar]s2", 842, 1484, 40.078f, oxi, "钙", "Ca", "ⅡA", 20, 4);
	periodicTable.push_back(K);

	return periodicTable;
}
//ⅠⅡⅢⅣⅤⅥⅦⅧ