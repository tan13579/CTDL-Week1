#include"header.h"
#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	string ds[100];
	nhapChuoi(ds, n);
	xuatChuoi(ds, n);
	int ViTri, SoKiTu;
	int index;
	cout << "Nhap chuoi muon cat:" << endl;
	cin >> index;
	cin.ignore(); // Để bỏ qua ký tự newline còn lại trong bộ đệm
	if (index > 0 && index < n) {
		cout << "nhap vi tri muon cat:";
		cin >> ViTri;
		cout << "nhap so ki tu muon cat:";
		cin >> SoKiTu;
		cin.ignore(); // Để bỏ qua ký tự newline còn lại trong bộ đệm
		string ketqua = catChuoi(ds[index - 1], ViTri, SoKiTu);
		cout << "Ket qua cat chuoi: " << ketqua << endl;
	}
	string TuKhoa;
	cout << "Nhap tu khoa can tim: ";
	getline(cin, TuKhoa);
	if (index >= 0 && index < n) {
		if (TimtuKhoa(ds[index], TuKhoa)) {
			cout << "tu khoa da tim thay trong chuoi!" << endl;
		}
		else {
			cout << "khong tim thay tu khoa!" << endl;
		}


		
	}
	cout << "Truoc khi sap xep: " << endl;
	xuatChuoi(ds, n);
	SapxepChuoi(ds, n);
	cout << "Sau khi sap xep: " << endl;
	xuatChuoi(ds, n);
	chuoiDaiNhat(ds, n);
	return 0;
}