#pragma once
#include"Isotope.h"
class test
{
	Isotope isotope[10];//常见同位素
	string electron;//电子排布
	short number;//原子序数
	short period;//周期数
	float meltPT;//熔点
	float boilPT;//沸点
	double atomicmass;//原子量
	short oxistats[8];//氧化态
	char nameC[4];//中文名称
	char nameE[4];//元素符号
	char group[4];//族序数
};