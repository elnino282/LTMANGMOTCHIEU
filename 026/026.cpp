#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Gia tri cuc tri trong mang: ";
	LietKe(b, k);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n;i++)
		cout << setw(10) << setprecision(3) << a[i];
}

void LietKe(float a[], int n)
{
	if (n == 1)
		return;
	if (a[0] <a[1] || a[0] > a[1])
		cout << a[0];
	for (int i = 1; i <= n - 2; i++)
		if ((a[i] < a[i - 1] && a[i] < a[i + 1]) || (a[i] > a[i - 1] && a[i] > a[i + 1]))
			cout << setw(8) << setprecision(3) << a[i];
	if (a[n - 1] < a[n - 2] || a[n - 1] > a[n - 2])
		cout << setw(8) << setprecision(3) << a[n - 1];
}