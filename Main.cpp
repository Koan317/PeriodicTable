#include<iostream>
#include<vector>
#include"Element.h"
using namespace std;

vector<Element> createPeriodicTable();

int main()
{
	vector<Element> t=createPeriodicTable();
	//cout << sizeof(t) << endl;
	system("pause");
}