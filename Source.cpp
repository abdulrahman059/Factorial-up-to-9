#include<iostream>
using namespace std;
int main()
{
	double num, x;
	double P = 1;
	cin >> x;
	for (num = 1; num <= x; num++)
	{
		P = num*P;
	}
	cout << "x! = " << P << endl;
	system("pause");
	return 0;
}