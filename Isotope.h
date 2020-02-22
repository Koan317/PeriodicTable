#pragma once
#include<string>
using namespace std;

class Isotope
{
	string halflife;//半衰期
	short decaymode;//衰变方式
	char name[8];//同位素名称
	char product[8];//衰变产物
	double abundance;//丰度
};