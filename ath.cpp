#define USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	double bbx = 49.8077;
	double bby = 19.0355;

	double cdx = 49.8963;
	double cdy = 19.0005;

	double kex = 49.8803;
	double key = 19.2285;

	double osx = 50.0373;
	double osy = 19.2086;

	double trasa1 = pow ((cdx - bbx), 2) + pow ((cdy - bby), 2);
	double trasa2 = pow ((cdx - osx), 2) + pow ((cdy - osy), 2);
	double trasa3 = pow ((bbx - kex), 2) + pow ((bby - key), 2);
	double trasa4 = pow ((kex - osx), 2) + pow ((key - osy), 2);
	
	double trasa5 = trasa1 + trasa2;
	
	double trasa6 = trasa3 + trasa4;


	cout << "odleglosc Bielsko+Czechowice+Oswiecim to :" << trasa5 << endl;
	cout << "odleglosc Bielsko+Kety+Oswiecim to :" << trasa6 << endl;


	return 0;

}
