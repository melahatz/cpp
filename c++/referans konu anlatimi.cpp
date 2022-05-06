#include<iostream>
//referans konu anlatýmý

using namespace std;
int main(){

    int sayi = 5; // Normal bir deðiþken tanýmladýk

    int &ref_sayi = sayi; // ref_sayi Referansýmýzý tanýmladýktan sonra sayiya eþitledik

    // Referanslara deðer atamasý tanýmlama anýnda yapýlmaladýr
    // Daha önce Pointerlarda kullandýðýmýz & adres alma operatörü burada Referans tanýmlamak için kullanýlýyor


    ref_sayi++; // Referans üzerinden sayýnýn deðerini arttýrdýk

    cout<<sayi << endl; // Referans üzerinden sayinin deðerini 1 arttýrmýþtýk, 6 sonucunu verecektir

}
