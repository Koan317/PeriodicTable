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

	Element* H;
	Isotope isotemp("——", 0, "H-1", "——", 99.9885);
	isotemp.display();
	//H->setBoilPT

	return periodicTalbe;
}

#endif//ELEMENTDATA