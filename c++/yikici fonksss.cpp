#include <iostream>
using namespace std;
class Nokta{
private:
    int x;
    int y;
public:
    int *z;

    Nokta();
    Nokta(int, int);
    ~Nokta();//yýkýcý fonk tanýmladým

   int getX();  //int döndürdüðünü unutma
   int getY();

    void setX(int);   //içine int döndürdüðünü unutma
    void setY(int);


};
Nokta::Nokta() {
    x=0;
    y=0;
    z=new int(4);
    cout<<"parametresiz kurucu"<<x<<" "<<y<<endl;
}
Nokta::Nokta(int x,int y=6 ) {
    z = new int(7);
    this->x=x;
    this->y=y;   //unutma buralarý
    cout<<"parametreli kurucu"<<x<<" "<<y<<endl;

}
Nokta::~Nokta() {
    cout<<"yikici calisti"<<endl;
    delete z;
}
int Nokta::getX(){   //isim uzayýndan çaðýrmayý unutma
    return x;
}
int Nokta::getY(){
    return y;
}
void Nokta::setX(int _x) {
    x= _x;
}
void Nokta::setY(int _y) {
    y= _y;
}


int main() {
    Nokta n1;
    Nokta n2(1,9);
    return 0;
}

