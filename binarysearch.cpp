#include <iostream>
using namespace std;

int elemen[10];
int nPanjang;
int x;

void input()
{
    while(true)
    {
        cout << "Masukkan banyaknya elemen pada array (makasimal 10) : ";
        cin >> nPanjang;

        if (nPanjang <= 10)
{
    break;
}
else
{
    cout << "\n[!] Jumlah elemen tidak boleh lebih dari 10. Silahkan coba lagi.\n";
}
    }
}