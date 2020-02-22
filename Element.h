#pragma once
#include<string>
#include"Isotope.h"
using namespace std;

class Element
{
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
};