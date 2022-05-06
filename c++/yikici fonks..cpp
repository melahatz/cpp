#include <iostream>
using namespace std;

class Nokta{
private:
    int x;
    int y;

public:
    int *z;  //get ve set yazmamak için public kýsýma aldým

    Nokta();
    Nokta(int , int );
    ~Nokta();
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

    x= 0;
    y= 0;
    z=new int (5);
    cout<<"parametresiz kurucu"<<x<<" "<<y<<endl;

}

Nokta::Nokta(int x, int y=5) { //hem parametreli hem parametresiz kurucu olarak davranýyor. x e y ye degerverdiginde

    this->x=x;
    this->y=y;
    z=new int (6);
    cout<<"parametreli kurucu"<<x<<" "<<y<<endl;
}

Nokta::~Nokta() {
    cout<<"yikici calisti"<<endl;
    delete z;
}
int main() {
   Nokta n1;
   Nokta n2(2,3);
}

