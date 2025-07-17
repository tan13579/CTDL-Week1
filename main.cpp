#include"header.h"
using namespace std;
void main() {
	int a[100];
	int n;
	cout << "moi nhap so luong phan tu: " << endl;
	cin >> n;
 nhap( a, n);
 xuat( a, n);
cout<<"Phan tu lon nhat la: "<< timphantulonnhat(a, n)<<endl;
cout << "Phan tu be nhat la: " << timphantubenhat(a, n);
}