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
	Isotope();
	Isotope(const char* halflife, short decaymode, const char* name, const char* product, double abundance);
	//~Isotope() { cout << "析构" << endl; }
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
	void display();
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

inline void Isotope::display()
{
	cout << '\t'<<setiosflags(ios::left)<<setw(10) <<setfill(' ')<< this->name << setw(10) << setfill(' ') << ((this->abundance < 0.001) ? "痕量" : to_string(this->abundance).substr(0, 6).insert(6, 1, '%'))  << setw(10) << setfill(' ') << this->halflife
		<< setw(10) << setfill(' ') << (this->decaymode == 0 ? "——" : (this->decaymode == 1 ? "α" : (this->decaymode == 2 ? "β" : "其他")))  << setw(10) << setfill(' ') << this->product << endl;
}