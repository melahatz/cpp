#include<iostream>
//referans konu anlat�m�

using namespace std;
int main(){

    int sayi = 5; // Normal bir de�i�ken tan�mlad�k

    int &ref_sayi = sayi; // ref_sayi Referans�m�z� tan�mlad�ktan sonra sayiya e�itledik

    // Referanslara de�er atamas� tan�mlama an�nda yap�lmalad�r
    // Daha �nce Pointerlarda kulland���m�z & adres alma operat�r� burada Referans tan�mlamak i�in kullan�l�yor


    ref_sayi++; // Referans �zerinden say�n�n de�erini artt�rd�k

    cout<<sayi << endl; // Referans �zerinden sayinin de�erini 1 artt�rm��t�k, 6 sonucunu verecektir

}
