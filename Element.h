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
	short oxistats[8];//氧化态
	char nameC[4];//中文名称
	char nameE[4];//元素符号
	char group[4];//族序数
	short number;//原子序数
	short period;//周期数
public:
	Element();
	Element(const Isotope* isotope, string electron, double meltPT, double boilPT, const short* oxistats, const char* nameC, const char* nameE, const char* group, short number, short period);
	Isotope* getIsotope() { return this->isotope; }
	string getElectron() { return this->electron; }
	double getMeltPT() { return this->meltPT; }
	double getBoilPT() { return this->boilPT; }
	short* getOxistats() { return this->oxistats; }
	char* getNameC() { return this->nameC; }
	char* getNameE() { return this->nameE; }
	char* getGroup() { return this->group; }
	short getNumber() { return this->number; }
	short getPeriod() { return this->period; }
	void setIsotope(Isotope* isotope) { memcpy(this->isotope, isotope, sizeof(isotope) + 1); }
	void setElectron(string electron) { this->electron = electron; }
	void setMeltPT(double meltPT) { this->meltPT = meltPT; }
	void setBoilPT(double boilPT) { this->boilPT = boilPT; }
	void setOxistats(const short* oxistats) { memcpy(this->oxistats, oxistats, sizeof(oxistats) + 1); }
	void setNameC(char* nameC) { strcpy_s(this->nameC, nameC); }
	void setNameE(char* nameE) { strcpy_s(this->nameE, nameE); }
	void setGroup(char* group) { strcpy_s(this->group, group); }
	void setNumber(short number) { this->number = number; }
	void setPeriod(short period) { this->period = period; }
	Element& operator =(const Element& element);
	friend ostream& operator<<(ostream& output, const Element& element);
};

inline Element::Element()
{
	this->electron = "";
	this->meltPT = 0.0;
	this->boilPT = 0.0;
	this->oxistats[0] = NULL;
	this->nameC[0] = NULL;
	this->nameE[0] = NULL;
	this->group[0] = NULL;
	this->number = 0;
	this->period = 0;
}

inline Element::Element(const Isotope* isotope, string electron, double meltPT, double boilPT, const short* oxistats, const char* nameC, const char* nameE, const char* group, short number, short period)
{
	memcpy(this->isotope, isotope, sizeof(Isotope) * 10);
	this->electron = electron;
	this->meltPT = meltPT;
	this->boilPT = boilPT;
	memcpy(this->oxistats, oxistats, sizeof(short) * 8);
	strcpy_s(this->nameC, nameC);
	strcpy_s(this->nameE, nameE);
	strcpy_s(this->group, group);
	this->number = number;
	this->period = period;
}

inline Element& Element::operator=(const Element& element)
{
	if (this != &element)
	{
		this->electron = element.electron;
		this->meltPT = element.meltPT;
		this->boilPT = element.boilPT;
		memcpy(this->oxistats, element.oxistats, sizeof(short) * 8);
		memcpy(this->nameC, element.nameC, sizeof(char) * 4);
		memcpy(this->nameE, element.nameE, sizeof(char) * 4);
		memcpy(this->group, element.group, sizeof(char) * 4);
		this->number = element.number;
		this->period = element.period;
	}
	return *this;
}

inline ostream& operator<<(ostream& output, const Element& element)
{
	output << "名称：" << element.nameC << endl;
	output << "符号：" << element.nameE << endl;
	output << "位置：第" << element.period << "周期，第" << element.group << "族" << endl;
	output << "原子序数：" << element.number << endl;
	output << "电子排布：" << element.electron << endl;
	output << "氧化态：";
	for (auto item : element.oxistats)
		if (item != 0)
			output << showpos << item << noshowpos << ' ';
		else
			break;
	output << endl;
	output << "熔点：" << element.meltPT << "℃" << endl;
	output << "沸点：" << element.boilPT << "℃" << endl;
	output << "同位素  名称\t  丰度\t    半衰期    衰变方式  衰变产物" << endl;
	for (auto item : element.isotope)
		if (item.getHalflife() != "")
			output << item << endl;
		else
			break;
	return output;
}