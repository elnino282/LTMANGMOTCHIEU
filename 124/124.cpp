#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktChanLe(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	int kt = ktChanLe(b, k);
	if (kt == 1)
		cout << "\nMang lien tuc chan le";
	else if (kt == 0)
		cout << "\nMang khong lien tuc chan le";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 200;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}

int ktChanLe(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if ((a[i] + a[i + 1]) % 2 == 0)
			flag = 0;
	return flag;
}