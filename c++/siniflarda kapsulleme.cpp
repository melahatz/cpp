#include <iostream>
using namespace std;
//S�n�flarda Kaps�lleme - Getter ve Setter Methodlar�
//private olan metotlara d��ardan ula�abilmek i�in �zel metotlar tan�mlamal�y�z get set
//s�n�f d�s�ndan metot arac�l�g�yla okursak buna getter metodu denir.
//degerini d�sardan metot arac�l�g�yla g�ncellersek buna setter metodu denir.


    class Nokta{
    private:
        int x,y;
    public:

        int getX();
        int getY(); //prototiplerimizi tan�mlad�k

        void setX(int); //ozelliklerimizi d�sardan metot arac�l�g�yla g�ncelleyece�inden deger d�nd�rm�cek
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

void Nokta::setY(int _y) { //kosul koyarak istedigimiz degere g�re g�ncelliyoruz.
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

