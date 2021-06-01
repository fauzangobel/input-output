#include<iostream>
using namespace std;

string getDataSatu(string kata)
{
    return kata;
}
int getDataDua(int angka)
{
    return angka;
}

int main()
{
    string kata;
    int angka;

    cout<<"Masukkan kata  : ";cin>>kata;
    cout<<"Masukkan angka : ";cin>>angka;

    cout<<"Berikut Isi dari data pertama : "<<getDataSatu(kata)<<endl;
    cout<<"Berikut Isi dari data kedua   : "<<getDataDua(angka)<<endl;
}


