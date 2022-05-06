#include <iostream>
//Kurucu ( Constructer ) Methodlar
using namespace std;

class Nokta{
private:
    int x,y;
public:

    Nokta(); // s�n�f ismiyle ayni olacak sekilde fonksiyon oldugunu belirleyerek prototipini yazd�k.
    Nokta(int,int);
    int getX(); //veriye eri�mek getter
    int getY(); //prototiplerimizi tan�mlad�k

    void setX(int); //ozelliklerimizi d�sardan metot arac�l�g�yla g�ncelleyeceginden deger dond�rmeyecek
    void setY(int); //veriyi atamak setter

};

Nokta::Nokta() {//s�n�f�m�n isim uzay�nda constuctor tan�ml�yorum.
    x = 2;
    y = 5;  //nesnemiz ilk olustugunda x ve y ozelligimizi 0 a b�rakmak isteyelim.
    //suanki kurucu fonk. baslang�c degerleri daima s�f�r olmakta.tekrar set ve get etmemize gerek kalmayacak
    // �stedigimiz degeri verebiliriz .biz b�yle bi�ey istemeyiz o y�zden parameteli kurucular� kullan�r�z.
}

Nokta::Nokta(int x, int y)  {
    this->x=x;
    this->y=y;
}



int Nokta::getX(){
    return x;
}

int Nokta::getY(){
    return y;
}

void Nokta::setX(int x){
    this->x=x;
}

void Nokta::setY(int _y){ //kosul koyarak istedigimiz degere gore g�ncelliyoruz.
    if(_y>5)
        y=_y;
    else
        y=2;
}

int main() {

    Nokta n1;
    Nokta n2(1,2); //parametreli oldugu i�in bu nesnemizi b�yle tan�mlad�k.

    cout<<n1.getX()<<","<<n1.getY()<<endl;
    cout<<n2.getX()<<","<<n2.getY()<<endl;
    return 0;
}
