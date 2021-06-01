#include<iostream>
using namespace std;

void menampilkanData(string kata, int angka)
{
    cout<<"Data pertama : "<<kata<<endl;
    cout<<"Data kedua : "<<angka<<endl;
}

int main()
{
    string kata;
    int angka;

    cout<<"Masukkan kata  : ";cin>>kata;
    cout<<"Masukkan angka : ";cin>>angka;
    
    menampilkanData(kata,angka);
}

