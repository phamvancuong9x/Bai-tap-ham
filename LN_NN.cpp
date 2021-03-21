//Viet chuong trinh nhap vao n so nguyen , Tim so lon nhat nho nhat<khong su dung mang>
#include<iostream>
using namespace std;
auto LN_NN(int n) {
	int LN;
	int NN;
	int a;
	for (int i = 1; i <= n; i++) {
		cout << "Nhap a[" << i << "] : ";
		cin >> a;
		if (i == 1) {
			LN = a;
			NN = a;
		}
		else {
			if (a > LN) {
				LN = a;
			}if (a < NN) { NN = a; }
		}
	}
	cout << " Gia tri LN la :" << LN << endl;
	cout << " Gia tri NN la : " << NN << endl;
}

int main()
{
	int n;
	do {
		cout << "NHap gia tri n : ";
		cin >> n;
	} while (n <= 0);

	LN_NN(n);
	system("pause");
	return 0;
}