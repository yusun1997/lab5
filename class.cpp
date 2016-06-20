#include <iostream>
#include <string>
#include <cstdlib>
#include "class.h"
using namespace std;

HugeInt::HugeInt(int a)
{
	int buffer[1000]={0};
	string othing;
//	othing=a;
	for (int i=0 ; a!=0 ;i++ )
	{
		x1[i]=a%10;
		a=a/10;
	}
}

HugeInt::HugeInt(string b)
{ 
//	int buffer=0;
//	buffer=atoi(b);
	for (i=0 ; i<1000 ; i++ )
	{
		x1[i]=(b[i]-48)%10;
		//b=b/10;
	}
}

HugeInt HugeInt::operator+(HugeInt add)
{
	HugeInt m;
	int i = 0; 
	for(i = 1000 - 1; i >= 0; i--)
	{
		m.x1[i] = x1[i] + add.x1[i];
	}
	for (int i=0; i<1000-1; i++) // 進位
	{
		m.x1[i+1] += m.x1[i] / 10;    
		m.x1[i] %= 10;             // 進位後餘下的數
	}

	return m;
}

HugeInt HugeInt::operator-(HugeInt sub)
{
	HugeInt m;
	for (int i=0; i<1000; i++)
	{
		m.x1[i] = x1[i] - sub.x1[i];
	}		        
	for (int i=0; i<1000-1; i++) // 借位和補位
	{
		if (m.x1[i] < 0)
		{
		    m.x1[i+1]--;           // 借位
			m.x1[i] += 10;         // 補位
		}
	}
	return m;
}


ostream &operator<<(ostream& out, const HugeInt &word)
{
	for (int i=999 ; i>=0 ; i-- )
	{
		if (word.x1[i]!=0)
		{
			for (; i>=0 ; i-- )
			{	
				out << word.x1[i];
			}
		}
		
	}
	return out;
}



istream &operator>>(istream& in, HugeInt &word)
{
	int buffer1[1000];
	int i=0;
	string p;
	in >> p;
	for (i=0 ; i<p.size() ; i++ )
	{
		word.x1[i]=(p[i]-48)%10;
	}

/*	for (i=p.size() ; i>=0 ; i-- )
	{
		word.x1[i]=(p[i]-48)%10;
	}
*/
	return in;
}


//Hu




