#pragma once
#include<string>
#include<iostream>
#include<iomanip>
using namespace std;

class Isotope
{
private:
	string halflife;//半衰期
	short decaymode;//衰变方式,α，β，中子，质子，电子俘获
	char name[8];//同位素名称
	char product[8];//衰变产物
	double abundance;//丰度
public:
	Isotope();
	Isotope(const char* halflife, short decaymode, const char* name, const char* product, double abundance);
	string getHalflife() { return this->halflife; }
	short getDecaymode() { return this->decaymode; }
	char* getName() { return this->name; }
	char* getProdect() { return this->product; }
	double getAbundance() { return this->abundance; }
	void setHalflife(string halflife) { this->halflife = halflife; }
	void setDecaymode(short decaymode) { this->decaymode = decaymode; }
	void setName(char* name) { strcpy_s(this->name, name); }
	void setProduct(char* product) { strcpy_s(this->product, product); }
	void setAbundance(double abundance) { this->abundance = abundance; }
	friend ostream& operator<<(ostream& output, const Isotope& isotope);
};

inline Isotope::Isotope()
{
	this->halflife = "";
	this->decaymode = 0;
	double abundance = 0.0;
}

inline Isotope::Isotope(const char* halflife, short decaymode, const char* name, const char* product, double abundance)//半衰期，方式，名称，产物，丰度
{
	this->halflife = halflife;
	this->decaymode = decaymode;
	strcpy_s(this->name, name);
	strcpy_s(this->product, product);
	this->abundance = abundance;
}

inline ostream& operator<<(ostream& output, const Isotope& isotope)
{
	output << '\t' << setiosflags(ios::left) << setw(10) << setfill(' ') << isotope.name << setw(10) << setfill(' ')
		<< ((isotope.abundance < 0.000001) ? "痕量" : to_string(isotope.abundance).substr(0, 6).insert(6, 1, '%'))
		<< setw(10) << setfill(' ') << isotope.halflife << setw(10) << setfill(' ')
		<< (isotope.decaymode == 0 ? "——" : (isotope.decaymode == 1 ? "α衰变" : (isotope.decaymode == 2 ? "β衰变" : (isotope.decaymode == 3 ? "中子" : (isotope.decaymode == 4 ? "质子" : "电子俘获")))))
		<< setw(10) << setfill(' ') << isotope.product;
	return output;
}