#include <iostream>
using namespace std;
//Sýnýflarda Kapsülleme - Getter ve Setter Methodlarý
//private olan metotlara dýþardan ulaþabilmek için özel metotlar tanýmlamalýyýz get set
//sýnýf dýsýndan metot aracýlýgýyla okursak buna getter metodu denir.
//degerini dýsardan metot aracýlýgýyla güncellersek buna setter metodu denir.


    class Nokta{
    private:
        int x,y;
    public:

        int getX();
        int getY(); //prototiplerimizi tanýmladýk

        void setX(int); //ozelliklerimizi dýsardan metot aracýlýgýyla güncelleyeceðinden deger döndürmücek
        void setY(int);
};

int Nokta::getX() {
    return x;
}

int Nokta::getY() {
    return y;
}

void Nokta::setX(int _x) {
    x= _x;
}

void Nokta::setY(int _y) { //kosul koyarak istedigimiz degere göre güncelliyoruz.
    if(_y>5)
        y=_y;
    else
        y=2;
}

int main() {

    Nokta n1;
    n1.setX(10);
    n1.setY(4);
    cout<<n1.getX()<<","<<n1.getY()<<endl;
}

