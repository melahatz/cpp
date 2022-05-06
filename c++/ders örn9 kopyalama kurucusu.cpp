#include<iostream>
using namespace std;


class String{ // �rnek (karakter katar�) String s�n�f�
int boy; // Katar�n boyu
char *icerik; // Katar�n i�eri�i
public:
String(const char *); // Kurucu
String(const String &); // Kopyalama kurucusu
void goster(); // Katarlar� ekrana ��karan �ye fonksiyon
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
String diger = string1; // Kopyalanma kurucusu �al���r
String baska(string1); // Kopyalanma kurucusu �al���r
diger.goster();
baska.goster();
return 0;
}
