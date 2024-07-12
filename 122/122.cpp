#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktToanChan(int a[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	int kt = ktToanChan(b, k);
	if (kt == 1)
		cout << "\nMang toan chan";
	else if (kt == 0)
		cout << "\nMang khong toan chan";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 200
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}

int ktToanChan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			dem++;
	if (dem == n)
		return 1;
	return 0;
}

 