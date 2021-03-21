//4. Viết ct hoán vị 2 số nguyên a,b
#include<iostream>
using namespace std;
void hoanvi(int& a, int& b)
{
	int term;
	term = a;
	a = b;
	b = term;

}
int main()
{
	int a, b;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b =";
	cin >> b;
	hoanvi(a, b);
	cout << "Gia tri sau hoan vi a = " << a << endl;
	cout << "Gia tri sau hoan vi b = " << b << endl;
	system("pause");
	return 0;
}