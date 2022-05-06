#include <iostream>
using namespace std;
//this sözcüðü sýnýf içinde kullandýðýmýz metotlarda anlamlýdýr.

    class Nokta{
    private:
        int x,y;
    public:

        int getX(); //veriye eriþmek getter
        int getY(); //prototiplerimizi tanýmladýk

        void setX(int); //ozelliklerimizi dýsardan metot aracýlýgýyla güncelleyeceðinden deger döndürmücek
        void setY(int); //veriyi atamak setter

    };

    int Nokta::getX(){
        return x;
    }

    int Nokta::getY(){
        return y;
    }

    void Nokta::setX(int x){
        this-> x=x;
    }

    void Nokta::setY(int _y){ //kosul koyarak istedigimiz degere göre güncelliyoruz.
        if(_y>5)
            y=_y;
        else
            y=2;
    }

    int main() {

  
        Nokta n1;
        n1.setX(10);
      cout<<n1.getX()<<endl;
    }


