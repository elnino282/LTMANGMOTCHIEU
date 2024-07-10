#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int HangChuc(int);
int TongGiaTri(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Tong co hang chuc la chu so 5 la: " << TongGiaTri(b, k);
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

int HangChuc(int n)
{
	int t = abs(n);
	return (t / 10) % 10;
}

int TongGiaTri(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n;i++)
	{
		if (HangChuc(a[i]) == 5)
			s += a[i];
	}
	return s;
}