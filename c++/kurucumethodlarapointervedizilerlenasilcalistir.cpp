#include <iostream>
using namespace std;

class Nokta{
private:
    int x;
    int y;

public:

    Nokta();
    Nokta(int , int );
    int getX();
    int getY();

    void setX(int);
    void setY(int);


};
int Nokta::getX() {
    return x;
}

int Nokta::getY() {
    return y;
}

void Nokta::setX(int _x) {
    x=_x;
}

void Nokta::setY(int _y) {
    y=_y;
}

Nokta::Nokta() {
    cout<<"parametresiz kurucu"<<endl;
    x= 0;
    y= 0;
}

Nokta::Nokta(int x, int y=5) { //hem parametreli hem parametresiz kurucu olarak davranýyor. x e y ye degerverdiginde
    cout<<"parametreli kurucu"<<endl;
    this->x=x;
    this->y=y;
}

int main() {
   Nokta dizi[5]={{1,2},{1},{2,3}};//5 elemanlý parametreli dizi olusturdum
   //eger dizi tipinde nesne olus. istersek sýnýfýmýzýn parametresiz kurucusu olmak zorunda
   for(int i=0; i<5; i++)
       cout<<dizi[i].getX()<<" "<<dizi[i].getY()<<endl;

   Nokta *ptr= new  Nokta(2,7); //yer alamyý unutma new ile.
}

