#include <iostream>
using namespace std;
//this s�zc��� s�n�f i�inde kulland���m�z metotlarda anlaml�d�r.

    class Nokta{
    private:
        int x,y;
    public:

        int getX(); //veriye eri�mek getter
        int getY(); //prototiplerimizi tan�mlad�k

        void setX(int); //ozelliklerimizi d�sardan metot arac�l�g�yla g�ncelleyece�inden deger d�nd�rm�cek
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

    void Nokta::setY(int _y){ //kosul koyarak istedigimiz degere g�re g�ncelliyoruz.
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


