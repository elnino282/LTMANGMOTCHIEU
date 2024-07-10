#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
int TongGiaTri(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Tong chu so dau la so le: " << TongGiaTri(b, k);
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

int ChuSoDau(int n)
{
	int t = abs(n);
	while (t >= 10)
		t /= 10;
	return t;
}

int TongGiaTri(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n;i++)
	{
		if (ChuSoDau(a[i]) % 2 == 0)
			s += a[i];
	}
	return s;
}