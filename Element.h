#pragma once
#include"Isotope.h"
using namespace std;

class Element
{
private:
	Isotope isotope[10];//常见同位素
	char electron[12];//电子排布
	float meltPT;//熔点
	float boilPT;//沸点
	float atomicmass;//原子量
	char oxistats[8];//氧化态
	char nameC[4];//中文名称
	char nameE[4];//元素符号
	char group[4];//族序数
	short number;//原子序数
	short period;//周期数
public:
	Element();
	Element(const Isotope* isotope, const char* electron, float meltPT, float boilPT, float atomicmass, const char* oxistats, const char* nameC, const char* nameE, const char* group, short number, short period);
	Isotope* getIsotope() { return this->isotope; }
	char* getElectron() { return this->electron; }
	float getMeltPT() { return this->meltPT; }
	float getBoilPT() { return this->boilPT; }
	float getAtomicMass() { return this->atomicmass; }
	char* getOxistats() { return this->oxistats; }
	char* getNameC() { return this->nameC; }
	char* getNameE() { return this->nameE; }
	char* getGroup() { return this->group; }
	short getNumber() { return this->number; }
	short getPeriod() { return this->period; }
	void setIsotope(Isotope* isotope) { memcpy(this->isotope, isotope, sizeof(isotope) * 10); }
	void setElectron(char* electron) { strcpy_s(this->electron, electron); }
	void setMeltPT(float meltPT) { this->meltPT = meltPT; }
	void setBoilPT(float boilPT) { this->boilPT = boilPT; }
	void setAtomicMass(float atomicmass) { this->atomicmass = atomicmass; }
	void setOxistats(const char* oxistats) { strcpy_s(this->oxistats, oxistats); }
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
	this->electron[0] = NULL;
	this->meltPT = 0.0;
	this->boilPT = 0.0;
	this->atomicmass = 0.0;
	this->oxistats[0] = NULL;
	this->nameC[0] = NULL;
	this->nameE[0] = NULL;
	this->group[0] = NULL;
	this->number = 0;
	this->period = 0;
}

inline Element::Element(const Isotope* isotope, const char* electron, float meltPT, float boilPT, float atomicmass, const char* oxistats, const char* nameC, const char* nameE, const char* group, short number, short period)
{
	memcpy(this->isotope, isotope, sizeof(Isotope) * 10);
	strcpy_s(this->electron, electron);
	this->meltPT = meltPT;
	this->boilPT = boilPT;
	this->atomicmass = atomicmass;
	memcpy(this->oxistats, oxistats, sizeof(char) * 8);
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
		strcpy_s(this->electron, element.electron);
		this->meltPT = element.meltPT;
		this->boilPT = element.boilPT;
		this->atomicmass = atomicmass;
		strcpy_s(this->oxistats, element.oxistats);
		strcpy_s(this->nameC, element.nameC);
		strcpy_s(this->nameE, element.nameE);
		strcpy_s(this->group, element.group);
		this->number = element.number;
		this->period = element.period;
	}
	return *this;
}

inline ostream& operator<<(ostream& output, const Element& element)
{
	output << "名称：" << element.nameC << endl;
	output << "符号：" << element.nameE << endl;
	output << "原子量：" << element.atomicmass << endl;
	output << "位置：第" << element.period << "周期，第" << element.group << "族" << endl;
	output << "原子序数：" << element.number << endl;
	output << "电子排布：" << element.electron << endl;
	output << "氧化态：";
	for (auto item : element.oxistats)
		if ((item != 10) && (item != 0))
			output << showpos << (short)item - 10 << noshowpos << ' ';
		else
			break;
	output << endl;
	output << "熔点：" << element.meltPT << "℃" << endl;
	output << "沸点：" << element.boilPT << "℃" << endl;
	output << "同位素  名称\t  丰度\t    半衰期    衰变方式  衰变产物" << endl;
	for (auto item : element.isotope)
		if (strlen(item.getHalflife()) != 0)
			output << item << endl;
		else
			break;
	output << "--------------------------------------------------------" << endl;
	return output;
}