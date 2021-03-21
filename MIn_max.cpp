//Viet chuong trinh nhap vao n so nguyen , Tim so lon nhat nho nhat<khong su dung mang>
#include<iostream>
using namespace std;
int max_min(int n) {
	int max;
	int min;
	int a;
	for (int i = 1; i <= n; i++) {
		cout << "Nhap a[" << i << "] : ";
		cin >> a;
		if (i == 1) {
			max = a;
			min = a;
		}
		else {
			if (a > max) {
				max = a;
			}if (a < min) { min = a; }
		}
	}
	cout << " Gia tri lon nhat la :" << max << endl;
	cout << " Gia tri nho nhat  la : " << min << endl;
}

int main()
{
	int n;
	do {
		cout << "NHap gia tri n : ";
		cin >> n;
	} while (n <= 0);

	max_min(n);
	system("pause");
	return 0;
}
