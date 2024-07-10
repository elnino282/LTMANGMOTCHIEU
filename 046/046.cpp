#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
int DemNguyenTo(int[], int);
float TrungBinhCong(int[], int);

int main()
{
    int b[500];
    int k;
    Nhap(b, k);
    cout << "Mang ban dau: ";
    Xuat(b, k);
    cout << endl;
    cout << "Trung binh cong cac so nguyen to: " << TrungBinhCong(b, k);
    return 0;
}

void Nhap(int a[], int& n)
{
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(10) << setprecision(3) << a[i];
}

bool ktNguyenTo(int n)
{
    int dem = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            dem++;
    if (dem == 2)
        return true;
    return false;
}

int DemNguyenTo(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (ktNguyenTo(a[i]))
            dem++;
    }
    return dem;
}

int TongNguyenTo(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (ktNguyenTo(a[i]))
            s += a[i];
    }
    return s;
}

float TrungBinhCong(int a[], int n)
{
    int s = TongNguyenTo(a, n);
    int dem = DemNguyenTo(a, n);
    if (dem == 0)
        return 0;
    return (float)s / dem;
}
