#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
void LietKe(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Chu so dau tien la so chan: ";
	LietKe(b, k);
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

int ChuSoDau(int k)
{
	int dt = abs(k);
	while (dt >= 10)
		dt /= 10;
	return dt;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i < n;i++)
	{
		if (ChuSoDau(a[i]) % 2 == 0)
			cout << setw(8) << a[i];
	}
}