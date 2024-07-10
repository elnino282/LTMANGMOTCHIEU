#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktChinhPhuong(int);
int TongChinhPhuong(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Tong cac so chinh phuong la: " << TongChinhPhuong(b, k);
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
	for (int i = 0; i < n;i++)
		cout << setw(10) << a[i];
}

bool ktChinhPhuong(int n)
{
	for (int i = 1; (i * i) <= n; i++)
	{
		if (i * i == n)
			return true;
	}
	return false;
}

int TongChinhPhuong(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n;i++)
		if (ktChinhPhuong(a[i]))
			s += a[i];
	return s;
}