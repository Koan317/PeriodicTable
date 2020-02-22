#pragma once
#include<iostream>
#include<vector>
#include"Element.h"
using namespace std;

vector<Element> createPeriodicTable();

int main()
{
	vector<Element> t=createPeriodicTable();
	t[0].display();
	system("pause");
}