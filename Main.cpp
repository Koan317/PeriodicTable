#pragma once
#include<iostream>
#include<vector>
#include"Element.h"
using namespace std;

vector<Element> createPeriodicTable();

int main()
{
	cout << "加载中……" << endl;
	vector<Element> t = createPeriodicTable();
	while (true)
	{
		for (auto i : t)
			cout << i;
		cout << sizeof(Element);
		system("pause");
	}
}