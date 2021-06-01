#include<iostream>
using namespace std;

void menampilkanData(string kata, int angka)
{
    cout<<"OUTPUTNYA ";cin>>kata;
    cout<<"Data pertama : "<<kata<<endl;
    cout<<"Data kedua : "<<angka<<endl;
}

int main()
{
    string kata;
    int angka;
    cout<<"PROGRAM INPUT";cin>>kata;
    cout<<"Masukkan kata  : ";cin>>kata;
    cout<<"Masukkan angka : ";cin>>angka;
    
    menampilkanData(kata,angka);
}

