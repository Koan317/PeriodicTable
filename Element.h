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
	char nameC[2];//中文名称
	char nameE[2];//元素符号
	char group[2];//族序数
	short number;//原子序数
	short period;//周期数
public:
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
	void setIsotope(Isotope* isotope) { *this->isotope = *isotope; }
	void setElectron(string electron) { this->electron = electron; }
	void setMeltPT(double meltPT) { this->meltPT = meltPT; }
	void setBoilPT(double boilPT) { this->boilPT = boilPT; }
	void setDensity(double density) { this->density = density; }
	void setOxistats(char* oxistats) { *this->oxistats = *oxistats; }
	void setNameC(char* nameC) { *this->nameC = *nameC; }
	void setNameE(char* nameE) { *this->nameE = *nameE; }
	void setGroup(char* group) { *this->group = *group; }
	void setNumber(short number) { this->number = number; }
	void setPeriod(short period) { this->period = period; }
};