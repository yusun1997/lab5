#include <iostream>
#include <string>
#include <cstdlib>
#include "class.h"
using namespace std;


int main()
{
	HugeInt x;
	HugeInt y(28825252);
	HugeInt z("314159265358979323846");
	HugeInt result;

	cin >> x;
//cout << x;
	result = x+y;
//cout<<y<<endl<<x<<endl<<endl;
	cout << x << "+" << y << "=" << result << endl;

	result = z-x;
	cout << result << endl;

	return 0;
}



