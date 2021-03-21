//5. Viết hàm nhập vào tuổi -> xuất ra năm sinh
#include<iostream>
using namespace std;
void nhaptuoi_namsinh() {
	int tuoi;
	int Nam_HT;
	do {
		cout << "Nhap so tuoi : ";
		cin >> tuoi;
	} while (tuoi < 0);
	do {
		cout << "Nhap nam hien tai : ";
		cin >> Nam_HT;
	} while (Nam_HT<0);
	cout << "nam sinh la " << Nam_HT - tuoi << endl;
}

int main()
{
	nhaptuoi_namsinh();
system("pause");
 return 0;
}