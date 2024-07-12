#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktKhong(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	int kt = ktKhong(b, k);
	if (kt == 0)
		cout << "\nKhong co gia tri 0";
	else if (kt == 1)
		cout << "\nCo gia tri 0";
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

int ktKhong(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == 0)
			flag = 1;
	return flag;
}