#include"header.h"
using namespace std;
void nhap(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		cout << "Moi nhap so phan tu "<<i+1<<": " << endl;
		cin >> a[i];
	}
}
void xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " "<<endl;
	}
}
int timphantulonnhat(int a[], int n) {
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
			
		}
	}
	return max;
}
int timphantubenhat(int a[], int n) {
	int min = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}