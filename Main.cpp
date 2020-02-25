#pragma once
#include<iostream>
#include<vector>
#include"Element.h"
#include"test.h"
using namespace std;

vector<Element> createPeriodicTable();

int main()
{
	vector<Element> t=createPeriodicTable();
	while (1) {
		for (auto i : t)
			cout << i;
	cout << sizeof(test);
		system("pause");
	}
}