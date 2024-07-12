#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktNguyenTo(int);
int ktTonTai(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	int kt = ktTonTai(b, k);
	if (kt == 0)
		cout << "\nKhong ton tai so chan";
	else if (kt == 1)
		cout << "\nTon tai so chan";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}

int ktTonTai(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n - 1; i++)
		if ((a[i]) % 2 == 0)
			flag = 1;
	return flag;
}