#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <string>
using namespace std;

class HugeInt
{
	public:
	int n;
	int i;
	HugeInt(int a=0);
	HugeInt(string);
	HugeInt operator+(HugeInt);
	HugeInt operator-(HugeInt);
	friend ostream &operator<<(ostream& , const HugeInt&);
	friend istream &operator>>(istream& ,HugeInt&);
	 
//	private:
	int x1[1000];
	int y1[1000];
	int z1[1000];
	int ans[1000];


};

#endif

