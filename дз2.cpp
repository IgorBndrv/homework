#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Enter number: ";
	cin >> a;
	int b;
	cout << "Enter degree: ";
	cin >> b;
	int prdct=1;
	int rtrtn = 1;
	while (rtrtn<=b) {
		prdct *= a;
		rtrtn++;
	}
	cout << "Result: " << prdct << endl;
}