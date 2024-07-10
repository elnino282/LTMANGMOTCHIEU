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
	cout << "Cac cap gia tri x=y+z: ";
	LietKe(b, k);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n;i++)
		cout << setw(10) << setprecision(3) << a[i];
}

void LietKe(float a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n;j++)
			for (int k=0; k<n; k++)
				if (i != j && j != k && i != k && a[i] == a[j] + a[k])
				{
					cout << "(" << a[i] << "," << a[j];
					cout << "," << a[k] << ")" << endl;
				}			
}

