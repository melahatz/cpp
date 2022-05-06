#include <iostream>
//Kurucu ( Constructer ) Methodlar
using namespace std;

class Nokta{
private:
    int x,y;
public:

    Nokta(); // sýnýf ismiyle ayni olacak sekilde fonksiyon oldugunu belirleyerek prototipini yazdýk.
    Nokta(int,int);
    int getX(); //veriye eriþmek getter
    int getY(); //prototiplerimizi tanýmladýk

    void setX(int); //ozelliklerimizi dýsardan metot aracýlýgýyla güncelleyeceginden deger dondürmeyecek
    void setY(int); //veriyi atamak setter

};

Nokta::Nokta() {//sýnýfýmýn isim uzayýnda constuctor tanýmlýyorum.
    x = 2;
    y = 5;  //nesnemiz ilk olustugunda x ve y ozelligimizi 0 a býrakmak isteyelim.
    //suanki kurucu fonk. baslangýc degerleri daima sýfýr olmakta.tekrar set ve get etmemize gerek kalmayacak
    // ýstedigimiz degeri verebiliriz .biz böyle biþey istemeyiz o yüzden parameteli kurucularý kullanýrýz.
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

void Nokta::setY(int _y){ //kosul koyarak istedigimiz degere gore güncelliyoruz.
    if(_y>5)
        y=_y;
    else
        y=2;
}

int main() {

    Nokta n1;
    Nokta n2(1,2); //parametreli oldugu için bu nesnemizi böyle tanýmladýk.

    cout<<n1.getX()<<","<<n1.getY()<<endl;
    cout<<n2.getX()<<","<<n2.getY()<<endl;
    return 0;
}
