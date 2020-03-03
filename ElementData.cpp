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
	iso[0] = Isotope("20分", 2, "C-11", "B-11", 0.0);
	iso[1] = Isotope("——", 0, "C-12", "——", 98.9);
	iso[2] = Isotope("——", 0, "C-13", "——", 1.1);
	iso[3] = Isotope("5730年", 2, "C-14", "N-14", 0.0);
	static Element C(iso, "[He]s2p2", 3675, 4027, 12.011f, oxi, "碳", "C", "ⅣA", 6, 2);
	periodicTable.push_back(C);

	cout << '=';
	static char oxiN[8] = { 7,8,9,11,12,13,14,15 };
	memcpy(oxi, oxiN, sizeof(char) * 8);
	iso[0] = Isotope("9.965分", 5, "N-13", "C-13", 0.0);
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
	iso[0] = Isotope("109.77分", 2, "F-18", "O-18", 0.0);
	iso[1] = Isotope("109.77分", 5, "F-18", "O-18", 0.0);
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
	iso[5] = Isotope("109.34分", 2, "Ar-41", "K-41", 0.0);
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
	periodicTable.push_back(Ca);

	cout << '=';
	oxi[0] = 11, oxi[1] = 12, oxi[2] = 13;
	iso[0] = Isotope("——", 0, "Sc-45", "——", 100);
	iso[1] = Isotope("83.79天", 2, "Sc-46", "Ti-46", 0.0);
	iso[2] = Isotope("3.3492天", 2, "Sc-47", "Ti-47", 0.0);
	iso[3] = Isotope("43.67时", 2, "Sc-48", "Ti-48", 0.0);
	iso[4] = Isotope();
	iso[5] = Isotope();
	iso[6] = Isotope();
	iso[7] = Isotope();
	iso[8] = Isotope();
	static Element Sc(iso, "[Ar]d1s2", 1541, 2836, 44.956f, oxi, "钪", "Sc", "ⅢB", 21, 4);
	periodicTable.push_back(Sc);

	oxi[3] = 14;
	iso[0] = Isotope("63年", 5, "Ti-44", "Sc-44", 0.0);
	iso[1] = Isotope("——", 0, "Ti-46", "——", 8.0);
	iso[2] = Isotope("——", 0, "Ti-47", "——", 7.3);
	iso[3] = Isotope("——", 0, "Ti-48", "——", 73.8);
	iso[4] = Isotope("——", 0, "Ti-49", "——",5.5);
	iso[5] = Isotope("——", 0, "Ti-50", "——", 5.4);
	static Element Ti(iso, "[Ar]d2s2", 1668, 3287, 47.867f, oxi, "钛", "Ti", "ⅣB", 22, 4);
	periodicTable.push_back(Ti);

	cout << '=';
	oxi[4] = 15;
	iso[0] = Isotope("15.9735天", 2, "V-48", "Ti-48", 0.0);
	iso[1] = Isotope("330天", 5, "V-49", "Ti-49", 0.0);
	iso[2] = Isotope("14亿亿年", 5, "V-50", "Ti-50", 0.25);
	iso[3] = Isotope("14亿亿年", 2, "V-50", "Cr-50", 0.25);
	iso[4] = Isotope("——", 0, "V-51", "——", 99.75);
	iso[5] = Isotope();
	static Element V(iso, "[Ar]d3s2", 1910, 3407, 50.942f, oxi, "钒", "V", "ⅤB", 23, 4);
	periodicTable.push_back(V);

	oxi[5] = 16;
	iso[0] = Isotope(">18亿亿年", 5, "Cr-50", "Ti-50", 4.345);
	iso[1] = Isotope("27.7025天", 5, "Cr-51", "V-51", 0.0);
	iso[2] = Isotope("——", 0, "Cr-52", "——", 83.789);
	iso[3] = Isotope("——", 0, "Cr-53", "——", 9.501);
	iso[4] = Isotope("——", 0, "Cr-54", "——", 2.365);
	static Element Cr(iso, "[Ar]d5s1", 1907, 2671, 51.996f, oxi, "铬", "Cr", "ⅥB", 24, 4);
	periodicTable.push_back(Cr);

	cout << '=';
	oxi[6] = 17;
	iso[0] = Isotope("5.6天", 5, "Mn-52", "Cr-52", 0.0);
	iso[1] = Isotope("5.6天", 2, "Mn-52", "Cr-52", 0.0);
	iso[2] = Isotope("374万年", 5, "Mn-53", "Cr-53", 0.0);
	iso[3] = Isotope("312天", 5, "Mn-54", "Cr-54", 0.0);
	iso[4] = Isotope("——", 0, "Mn-55", "——", 100);
	static Element Mn(iso, "[Ar]d5s2", 1246, 2061, 54.938f, oxi, "锰", "Mn", "ⅦB", 25, 4);
	periodicTable.push_back(Mn);

	oxi[6] = 0;
	iso[0] = Isotope(">310万亿亿年", 2, "Fe-54", "Cr-54", 5.8);
	iso[1] = Isotope("2.73年", 5, "Fe-55", "Mn-55", 0.0);
	iso[2] = Isotope("——", 0, "Fe-56", "——", 91.72);
	iso[3] = Isotope("——", 0, "Fe-57", "——", 2.2);
	iso[4] = Isotope("——", 0, "Fe-58", "——", 0.28);
	iso[5] = Isotope("44.503天", 2, "Fe-59", "Co-59", 0.0);
	iso[6] = Isotope("260万年", 2, "Fe-60", "Co-60", 0.0);
	static Element Fe(iso, "[Ar]d6s2", 1538, 2862, 55.845f, oxi, "铁", "Fe", "Ⅷ", 26, 4);
	periodicTable.push_back(Fe);

	cout << '=';
	oxi[5] = 0;
	iso[0] = Isotope("——", 0, "Co-59", "——", 100);
	iso[1] = Isotope("5.2714年", 2, "Co-60", "Ni-60", 0.0);
	iso[2] = Isotope();
	iso[3] = Isotope();
	iso[4] = Isotope();
	iso[5] = Isotope();
	iso[6] = Isotope();
	static Element Co(iso, "[Ar]d7s2", 1495, 2927, 58.933f, oxi, "钴", "Co", "Ⅷ", 27, 4);
	periodicTable.push_back(Co);

	oxi[4] = 0;
	iso[0] = Isotope(">7万亿亿年", 2, "Ni-58", "Fe-58", 68.077);
	iso[1] = Isotope("7.6万年", 5, "Ni-59", "Co-59", 0.0);
	iso[2] = Isotope("——", 0, "Ni-60", "——", 26.223);
	iso[3] = Isotope("——", 0, "Ni-61", "——", 1.14);
	iso[4] = Isotope("——", 0, "Ni-62", "——", 3.634);
	iso[5] = Isotope("100.1年", 2, "Ni-63", "Cu-63", 0.0);
	iso[6] = Isotope("——", 0, "Ni-64", "——", 0.926);
	static Element Ni(iso, "[Ar]d8s2", 1455, 2913, 58.693f, oxi, "镍", "Ni", "Ⅷ", 28, 4);
	periodicTable.push_back(Ni);

	cout << '=';
	oxi[3] = oxi[2] = 0;
	iso[0] = Isotope("——", 0, "Cu-63", "——", 69.15);
	iso[1] = Isotope("12.7时", 5, "Cu-64", "Ni-64", 0.0);
	iso[2] = Isotope("12.7时", 2, "Cu-64", "Zn-64", 0.0);
	iso[3] = Isotope("——", 0, "Cu-65", "——", 30.85);
	iso[4] = Isotope("61.83时", 2, "Cu-67", "Zn-67", 0.0);
	iso[5] = Isotope();
	iso[6] = Isotope();
	static Element Cu(iso, "[Ar]d10s1", 1084.62f, 2562, 63.546f, oxi, "铜", "Cu", "ⅠB", 29, 4);
	periodicTable.push_back(Cu);

	cout << '=';
	iso[0] = Isotope(">230亿亿年", 2, "Zn-64", "Ni-64", 48.6);
	iso[1] = Isotope("243.8天", 5, "Zn-65", "Cu-65", 0.0);
	iso[2] = Isotope("——", 0, "Zn-66", "——", 27.9);
	iso[3] = Isotope("——", 0, "Zn-67", "——", 4.1);
	iso[4] = Isotope("——", 0, "Zn-68", "——", 18.8);
	iso[5] = Isotope("56分", 2, "Zn-69", "Ga-69", 0.0);
	iso[6] = Isotope(">1.3亿亿年", 2, "Zn-70", "Ge-70", 0.6);
	iso[7] = Isotope("2.4分", 2, "Zn-71", "Ga-71", 0.0);
	iso[8] = Isotope("46.5时", 2, "Zn-72", "Ga-72", 0.0);
	static Element Zn(iso, "[Ar]d10s2", 419.53f, 907, 65.38f, oxi, "锌", "Zn", "ⅡB", 30, 4);
	periodicTable.push_back(Zn);

	cout << '=';
	oxi[1] = 0, oxi[0] = 13;
	iso[0] = Isotope("——", 0, "Ga-69", "——", 60.11);
	iso[1] = Isotope("——", 0, "Ga-71", "——", 39.89);
	iso[2] = Isotope();
	iso[3] = Isotope();
	iso[4] = Isotope();
	iso[5] = Isotope();
	iso[6] = Isotope();
	iso[7] = Isotope();
	iso[8] = Isotope();
	static Element Ga(iso, "[Ar]d10s2p1", 29.765f, 2400, 69.723f, oxi, "镓", "Ga", "ⅢA", 31, 4);
	periodicTable.push_back(Ga);

	oxi[0] = 12, oxi[1] = 14;
	iso[0] = Isotope("270.8天", 5, "Ge-68", "Ga-68", 0.0);
	iso[1] = Isotope("——", 0, "Ge-70", "——", 21.23);
	iso[2] = Isotope("11.26天", 5, "Ge-71", "Ga-71", 0.0);
	iso[3] = Isotope("——", 0, "Ge-72", "——", 27.66);
	iso[4] = Isotope("——", 0, "Ge-73", "——", 7.73);
	iso[5] = Isotope("——", 0, "Ge-74", "——", 35.94);
	iso[6] = Isotope("17.8万亿亿年", 2, "Ge-76", "Se-76", 60.11);
	static Element Ge(iso, "[Ar]d10s2p2", 938.25f, 2833, 72.63f, oxi, "锗", "Ge", "ⅣA", 32, 4);
	periodicTable.push_back(Ge);

	cout << '=';
	static char oxiAs[8] = { 7,11,12,13,15 };
	memcpy(oxi, oxiAs, sizeof(char) * 8);
	iso[0] = Isotope("80.3天", 5, "As-73", "Ge-73", 0.0);
	iso[1] = Isotope("17.78天", 5, "As-74", "Ge-74", 0.0);
	iso[2] = Isotope("17.78天", 2, "As-74", "Ge-74", 0.0);
	iso[3] = Isotope("17.78天", 5, "As-74", "Se-74", 0.0);
	iso[4] = Isotope("——", 0, "As-75", "——", 100);
	iso[5] = Isotope();
	iso[6] = Isotope();
	static Element As(iso, "[Ar]d10s2p3", 817, 614, 74.922f, oxi, "砷", "As", "ⅤA", 33, 4);
	periodicTable.push_back(As);

	static char oxiSe[8] = { 8,12,14,16 };
	memcpy(oxi, oxiSe, sizeof(char) * 8);
	iso[0] = Isotope("8.4天", 5, "Se-72", "As-72", 0.0);
	iso[1] = Isotope("——", 0, "Se-74", "——", 0.87);
	iso[2] = Isotope("119.779天", 5, "Se-75", "As-75", 0.0);
	iso[3] = Isotope("——", 0, "Se-76", "——", 9.36);
	iso[4] = Isotope("——", 0, "Se-77", "——", 7.63);
	iso[5] = Isotope("——", 0, "Se-78", "——", 23.78);
	iso[6] = Isotope("32.7万年", 2, "Se-79", "Br-79", 0.0);
	iso[7] = Isotope("——", 0, "Se-80", "——", 49.61);
	iso[8] = Isotope("1.08万亿亿年", 2, "Se-82", "Kr-82", 8.73);
	static Element Se(iso, "[Ar]d10s2p4", 221, 685, 78.971f, oxi, "硒", "Se", "ⅥA", 34, 4);
	periodicTable.push_back(Se);

	cout << '=';
	static char oxiBr[8] = { 9,11,13,14,15,17 };
	memcpy(oxi, oxiBr, sizeof(char) * 8);
	iso[0] = Isotope("——", 0, "Br-79", "——", 50.69);
	iso[1] = Isotope("——", 0, "Br-81", "——", 49.31);
	iso[2] = Isotope();
	iso[3] = Isotope();
	iso[4] = Isotope();
	iso[5] = Isotope();
	iso[6] = Isotope();
	iso[7] = Isotope();
	iso[8] = Isotope();
	static Element Br(iso, "[Ar]d10s2p5", -7.2f, 58.8f, 79.904f, oxi, "溴", "Br", "ⅦA", 35, 4);
	periodicTable.push_back(Br);

	static char oxiKr[8] = { 0 };
	memcpy(oxi, oxiKr, sizeof(char) * 8);
	iso[0] = Isotope("92万亿亿年", 2, "Kr-78", "Se-78", 0.35);
	iso[1] = Isotope("35.04时", 5, "Kr-79", "Br-79", 0.0);
	iso[2] = Isotope("35.04时", 2, "Kr-79", "Br-79", 0.0);
	iso[3] = Isotope("——", 0, "Kr-80", "——", 2.25);
	iso[4] = Isotope("22.9万年", 5, "Kr-81", "Br-81", 0.0);
	iso[5] = Isotope("——", 0, "Kr-82", "——", 11.6);
	iso[6] = Isotope("——", 0, "Kr-83", "——", 11.5);
	iso[7] = Isotope("——", 0, "Kr-84", "——", 57.0);
	iso[8] = Isotope("10.756年", 2, "Kr-85", "Rb-85", 0.0);
	iso[9] = Isotope("——", 0, "Kr-86", "——", 17.3);
	static Element Kr(iso, "[Ar]d10s2p6", -157.36f, -153.22f, 83.798f, oxi, "氪", "Kr", "0", 36, 4);
	periodicTable.push_back(Kr);

	cout << '=';
	oxi[0] = 11;
	iso[0] = Isotope("86.2天", 5, "Rb-83", "Kr-83", 0.0);
	iso[1] = Isotope("32.9天", 5, "Rb-84", "Kr-84", 0.0);
	iso[2] = Isotope("32.9天", 2, "Rb-84", "Kr-84", 0.0);
	iso[3] = Isotope("32.9天", 2, "Rb-84", "Sr-84", 0.0);
	iso[4] = Isotope("——", 0, "Rb-85", "——", 72.168);
	iso[5] = Isotope("18.65天", 2, "Rb-86", "Sr-86", 0.0);
	iso[6] = Isotope("488亿年", 2, "Rb-87", "Sr-87", 27.835);
	iso[7] = Isotope();
	iso[8] = Isotope();
	iso[9] = Isotope();
	static Element Rb(iso, "[Kr]s1", 39.31f, 688, 85.468f, oxi, "铷", "Rb", "ⅠA", 37, 5);
	periodicTable.push_back(Rb);

	oxi[0] = 12;
	iso[0] = Isotope("25.36天", 5, "Sr-82", "Rb-82", 0.0);
	iso[1] = Isotope("——", 0, "Sr-84", "——", 0.56);
	iso[2] = Isotope("64.84天", 5, "Sr-85", "Rb-85", 0.0);
	iso[3] = Isotope("——", 0, "Sr-86", "——", 9.86);
	iso[4] = Isotope("——", 0, "Sr-87", "——", 7.0);
	iso[5] = Isotope("——", 0, "Sr-88", "——", 82.58);
	iso[6] = Isotope("50.53天", 5, "Sr-89", "Rb-89", 0.0);
	iso[7] = Isotope("50.53天", 2, "Sr-89", "Y-89", 0.0);
	iso[8] = Isotope("28.9年", 2, "Sr-90", "Y-90", 0.0);
	static Element Sr(iso, "[Kr]s2", 777, 1382, 87.62f, oxi, "锶", "Sr", "ⅡA", 38, 5);
	periodicTable.push_back(Sr);

	return periodicTable;
}
//ⅠⅡⅢⅣⅤⅥⅦⅧ