#pragma once
#include<string>
#include<iostream>
#include<iomanip>
using namespace std;

class Isotope
{
private:
	string halflife;//半衰期
	short decaymode;//衰变方式
	char name[8];//同位素名称
	char product[8];//衰变产物
	double abundance;//丰度
public:
	Isotope(const char* halflife, short decaymode, const char* name, const char* product, double abundance);
	string getHalflife() { return this->halflife; }
	short getDecaymode() { return this->decaymode; }
	char* getName() { return this->name; }
	char* getProdect() { return this->product; }
	double getAbundance() { return this->abundance; }
	void setHalflife(string halflife) { this->halflife = halflife; }
	void setDecaymode(short decaymode) { this->decaymode = decaymode; }
	void setName(char* name) { *this->name = *name; }
	void setProduct(char* product) { *this->product = *product; }
	void setAbundance(double abundance) { this->abundance = abundance; }
	void display();
};

inline Isotope::Isotope(const char* halflife, short decaymode, const char* name, const char* product, double abundance)
{
	this->halflife = halflife;
	this->decaymode = decaymode;
	*this->name = *name;
	*this->product = *product;
	this->abundance = abundance;
}

inline void Isotope::display()
{
	cout << "\t名称\t丰度\t半衰期\t衰变方式\t衰变产物" << endl;
	cout << '\t' << this->name << '\t' << ((this->abundance < 0.001) ? "痕量" : to_string(this->abundance).substr(0, 6)) << "%\t" << this->halflife << '\t'
		<< (this->decaymode == 0 ? "——" : (this->decaymode == 1 ? "α" : (this->decaymode == 2 ? "β" : "其他"))) << '\t' << this->product << endl;
}