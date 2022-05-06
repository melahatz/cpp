#include<iostream>
using namespace std;


class String{ // Örnek (karakter katarý) String sýnýfý
int boy; // Katarýn boyu
char *icerik; // Katarýn içeriði
public:
String(const char *); // Kurucu
String(const String &); // Kopyalama kurucusu
void goster(); // Katarlarý ekrana çýkaran üye fonksiyon
~String(); // Yok edici fonksiyon
};
String::String(const String &gelen_nesne) // Kopyalama kurucusu
{
boy = gelen_nesne.boy;
icerik = new char[boy + 1]; // +1 null karakteri icin
strcpy(icerik, gelen_nesne.icerik);
}
int main() // Ana fonksiyon
{
String string1("Katar 1");
string1.goster();
String diger = string1; // Kopyalanma kurucusu çalýþýr
String baska(string1); // Kopyalanma kurucusu çalýþýr
diger.goster();
baska.goster();
return 0;
}
