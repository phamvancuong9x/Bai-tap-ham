//3. Viết hàm nhập vào điểm -> xuất ra học lực của học sinh. // 9,10 giỏi, 78 khá, 456 tb, 0123 yếu

#include <iostream>
using namespace std;
void hocluc()
{
    float diem;
    do {
        cout << "Nhap diem : ";
        cin >> diem;
    } while (diem < 0 || diem>10);
   
    if (diem >= 9) { cout << "HS co hoc luc Gioi\n "; }
    else if (diem >= 7 && diem <= 8) { cout << "HS co hoc luc  Kha\n "; }
    else if (diem >= 4 && diem <= 6) { cout << "HS co hoc luc TB\n"; }
    else { cout << "HS co hoc luc yeu\n"; }
}
int main()
{
    hocluc();
    system("pause");
    return 0;
}