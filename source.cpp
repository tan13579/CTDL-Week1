#include"header.h"
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void nhapChuoi(string ds[],int&n) {
	cout << "nhap so luong chuoi:";
	cin >> n;
	cin.ignore(); // Để bỏ qua ký tự newline còn lại trong bộ đệm
	for (int i = 0; i < n; i++) {
		cout << "Nhap chuoi thu: " << i+1 << endl;
		getline(cin, ds[i]);
	}
}
void xuatChuoi(string ds[], int n) {
	for (int i = 0; i < n; i++){
		cout<<"chuoi thu "<<i+1<<" la: " << ds[i]  << endl;
	}
}
string catChuoi(string &s, int ViTri, int SoKiTu) {
	if (ViTri<0 || ViTri>s.length()) {
		
			return"Vi tri khong hop le";
		}
		if (SoKiTu<0 || ViTri + SoKiTu>s.length()) {
			SoKiTu = s.length() - ViTri; // Điều chỉnh số ký tự nếu vượt quá độ dài chuỗi
		}
	
	return s.substr(ViTri, SoKiTu); // Trả về chuỗi con từ vị trí ViTri với độ dài SoKiTu
}

bool TimtuKhoa(string &s, string& TuKhoa) {
	if (s.find(TuKhoa) != string::npos) { // Tìm kiếm từ khóa trong chuỗi
		return true; // Nếu tìm thấy, trả về true
	}
	return false; // Nếu không tìm thấy, trả về false
}
void SapxepChuoi(string ds[], int n) {
	sort(ds, ds + n); // Sắp xếp mảng chuỗi theo thứ tự từ điển(a[0]<a[n-1])
}
void chuoiDaiNhat(string ds[], int& n) {
	int MaxIndex = 0; // Biến để lưu chỉ số của chuỗi dài nhất
	for (int i = 1; i < n; i++) {
		if (ds[i].length() > ds[MaxIndex].length()) {
			MaxIndex = i; // Cập nhật chỉ số nếu tìm thấy chuỗi dài hơn
		}
		cout << "chuoi dai nhat la:" << ds[MaxIndex] << endl;
		cout << "do dai chuoi la:" << ds[MaxIndex].length() << endl;
	}
}