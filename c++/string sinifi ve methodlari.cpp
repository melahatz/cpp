#include <iostream>
//string s�n�f� ve metotlar�
using namespace std;

int main() {
    string firstString="melo";
   // firstString=1 ;//hatal� olur.
    firstString="merhaba"; //STR�NG OLDUGU �C�N TIRNAK �SARET�NE ALINILIR
    cout<<firstString.at(0)<<endl; //stringimizin kac�nc� harfinin ne oldugunu �grenmemize yarar.
    cout<<firstString.length()<<endl; //uzunlugunu ogrenmek icin
    cout<<firstString.find("arif")<<endl; //bir karakteri aramak icin ,hangi indisten ba�l�yor onu bulur kelime de�il harf de
    cout<<firstString.insert(2,"50")<<endl; //string eklemek i�in 2. karakterden sonra 50 ekle.
    cout<<firstString.empty()<<endl;  // string i�i dolu mu bo� mu ona bak�yoruz.
    cout<<firstString<<endl;


    return 0;
}

