#pragma once
#include<string>
#include"Isotope.h"
using namespace std;

class Element
{
private:
	Isotope isotope[10];//常见同位素
	string electron;//电子排布
	double meltPT;//熔点
	double boilPT;//沸点
	double density;//标况密度
	short oxistats[8];//氧化态
	char nameC[4];//中文名称
	char nameE[4];//元素符号
	char group[4];//族序数
	short number;//原子序数
	short period;//周期数
public:
	Element(const Isotope* isotope, string electron, double meltPT, double boilPT, double density, const short* oxistats, const char* nameC, const char* nameE, const char* group, short number, short period);
	Isotope* getIsotope() { return this->isotope; }
	string getElectron() { return this->electron; }
	double getMeltPT() { return this->meltPT; }
	double getBoilPT() { return this->boilPT; }
	double getDensity() { return this->density; }
	short* getOxistats() { return this->oxistats; }
	char* getNameC() { return this->nameC; }
	char* getNameE() { return this->nameE; }
	char* getGroup() { return this->group; }
	short getNumber() { return this->number; }
	short getPeriod() { return this->period; }
	void setIsotope(Isotope* isotope) { memcpy(this->isotope, isotope, sizeof(isotope)+1); }
	void setElectron(string electron) { this->electron = electron; }
	void setMeltPT(double meltPT) { this->meltPT = meltPT; }
	void setBoilPT(double boilPT) { this->boilPT = boilPT; }
	void setDensity(double density) { this->density = density; }
	void setOxistats(const short* oxistats) { memcpy(this->oxistats, oxistats, sizeof(oxistats)+1); }
	void setNameC(char* nameC) { strcpy_s(this->nameC, nameC); }
	void setNameE(char* nameE) { strcpy_s(this->nameE, nameE); }
	void setGroup(char* group) { strcpy_s(this->group, group); }
	void setNumber(short number) { this->number = number; }
	void setPeriod(short period) { this->period = period; }
	void display();
};

inline Element::Element(const Isotope* isotope, string electron, double meltPT, double boilPT, double density, const short* oxistats, const char* nameC, const char* nameE, const char* group, short number, short period)
{
	memcpy(this->isotope, isotope, sizeof(isotope)+1);
	this->electron = electron;
	this->meltPT = meltPT;
	this->boilPT = boilPT;
	this->density = density;
	memcpy(this->oxistats, oxistats, sizeof(oxistats)+1);
	strcpy_s(this->nameC, nameC);
	strcpy_s(this->nameE, nameE);
	strcpy_s(this->group, group);
	this->number = number;
	this->period = period;
}

inline void Element::display()
{
	cout << "名称：" << this->nameC << endl;
	cout << "符号：" << this->nameE << endl;
	cout << "位置：第" << this->period << "周期，第" << this->group << "族" << endl;
	cout << "原子序数：" << this->number << endl;
	cout << "电子排布：" << this->electron << endl;
	cout << "氧化态：";
	for (auto item : oxistats)
		cout << showpos << item << noshowpos << ' ';
	cout << endl;
	cout << "熔点：" << this->meltPT << endl;
	cout << "沸点：" << this->boilPT << endl;
	cout << "密度：" << this->density << endl;
	cout << "\t名称\t丰度\t  半衰期  衰变方式  衰变产物" << endl;
	for (auto item : isotope)
		if (item.getHalflife() != "")
			this->isotope->display();
		else
			break;
}