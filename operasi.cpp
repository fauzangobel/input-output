#include<iostream>
using namespace std;

void penjumlahan(int angka1, int angka2)
{
    cout<<"Data pertama : "<<angka1+angka2<<endl;
}

int main()
{
    int angka1,angka2;

    cout<<"Masukkan Angka Pertama  : ";cin>>angka1;
    cout<<"Masukkan Angka Kedua    : ";cin>>angka2;
    
    penjumlahan(angka1,angka2);
}


