#include <iostream>
//string sýnýfý ve metotlarý
using namespace std;

int main() {
    string firstString="melo";
   // firstString=1 ;//hatalý olur.
    firstString="merhaba"; //STRÝNG OLDUGU ÝCÝN TIRNAK ÝSARETÝNE ALINILIR
    cout<<firstString.at(0)<<endl; //stringimizin kacýncý harfinin ne oldugunu ögrenmemize yarar.
    cout<<firstString.length()<<endl; //uzunlugunu ogrenmek icin
    cout<<firstString.find("arif")<<endl; //bir karakteri aramak icin ,hangi indisten baþlýyor onu bulur kelime deðil harf de
    cout<<firstString.insert(2,"50")<<endl; //string eklemek için 2. karakterden sonra 50 ekle.
    cout<<firstString.empty()<<endl;  // string içi dolu mu boþ mu ona bakýyoruz.
    cout<<firstString<<endl;


    return 0;
}

