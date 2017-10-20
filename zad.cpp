#define USE_MATH_DEINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double velocity, angle, fly, angr;
	cout << "Podaj predkosc poczatkowa kuli armatniej: " << endl;
	cin >> velocity;
	cout << "Podaj kat nachylenia lufy armatniej " << endl;
	angr = angle * (2 * (M_PI)) / 360;
	fly = ((2 * velocity) * sin(angr)) / 9, 81;
	cout << "Czas lotu wynosi:" << fly << endl;

	system("PAUSE");


	return 0;


}
