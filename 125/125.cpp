#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ktTang(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	if (ktTang(b, k) == 1)
		cout << "\nTang dan";
	else
		cout << "\nKhong tang dan";
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
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(3) << a[i];
}

int ktTang(float a[], int n)
{
	int flag = 1;
	for (int i = 1; i <= n - 2; i++)
		if (a[i] > a[i + 1])
			flag = 0;
	return flag;
}