#include <iostream>

using namespace std;

int decisao(int x, int y) 
{
	x = x + y;
	if (x < 0) 
	{
		return y - x;
	}
	else 
	{
		return x - 2;
	}
}

int main()
{
	int RES = decisao(1, -3);
	RES = decisao(5, RES);
	RES = decisao(3, RES);
	RES = decisao(RES, -9);
	RES = decisao(RES, 4);

	cout << RES;
}

