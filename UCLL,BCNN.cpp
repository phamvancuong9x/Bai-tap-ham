//Tinh UCLL BCNN 2 so nguyen a,b
#include<iostream>
using namespace std;
int UCLL(int a, int b)
{
	int UCLN=0;
	for (int i = a; i >= 1; i--) {
		for (int j = b; j >= 1; j--) {
			if (a % i == 0) {
				if (b % j == 0) {
					if (i == j) {
						UCLN = i;
						
					}
				}
				if (UCLN != 0) { break; }
			}
		}
		
	}return UCLN;
}
int BCNN(int a, int b)
{
	int BCNN;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			if (a % i == 0) {
				if (b % j == 0) {
					if ((i * j) % a == 0 && ((i * j) % b == 0)) {
						BCNN = j * i;
						break;
					}
				}
			}
		}
	}
	return BCNN;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "UCLN la : " << UCLL(a, b) << endl;;
	cout << "BCNN la :"<<BCNN(a, b)<<endl;
	system("pause");
	return 0;
}