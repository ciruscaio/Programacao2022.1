#include <iostream>

using namespace std;

int soma(int x, int y)
{
	int s = x + y;

	return s;
}

int main()
{
	int a = 0;
	int b = 0;

	cout << "A: ";
	cin >> a;

	cout << "\n\nB: ";
	cin >> b;

	cout << "\n\n RESULTADO: ";
	
	int x = soma(a, b);

	cout << x;
}



