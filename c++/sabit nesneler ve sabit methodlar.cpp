#include <iostream>
using namespace std;
class Nokta{
private:
    int x;
    int y;
public:
    int *z;
    const int t;
    Nokta();
    Nokta(int,int,int);
    ~Nokta();//yýkýcý fonk tanýmladým

    int getX()const;
    int getY()const;   //bu nesnenin hiçbir özelligini metot içerisinde degitirmeyeceðim demek

    void setX(int);   //içine int döndürdüðünü unutma
    void setY(int);


};
Nokta::Nokta() : t(0){ //baslangýc degeri vermenin yolu
    x=0;
    y=0;
    z=new int(4);

    // t=0; //hatalý olur.
    cout<<"parametresiz kurucu"<<x<<" "<<y<<endl;
}
Nokta::Nokta(int x, int y=6 , int t=0) :t(t){
    z = new int(7);
    this->x=x;
    this->y=y;   //unutma buralarý

    //this->t=t  hatalý olur.
    cout<<"parametreli kurucu"<<x<<" "<<y<<endl;

}
Nokta::~Nokta() {
    cout<<"yikici calisti"<<endl;
    delete z;
}
int Nokta::getX()const{ //buralarý da const yapýyoruz
    return x;
}
int Nokta::getY()const{
    return y;
}
void Nokta::setX(int _x) {
    x= _x;
}
void Nokta::setY(int _y) {
    y= _y;
}


int main() {
    Nokta n1(3,5,7);
    const Nokta n2(1,9,100); //hicbir özelligi dýþardan eriþerek degistiremeyeceðim ve hiçbir özel. çaðýramýcam

    cout<<n1.getX()<<" "<<n1.getY()<<endl;
    n1.setX(500);
    cout<<n1.getX()<<" "<<n1.getY()<<endl;

    //n2 get ve set edersek çalýþmýcaktýr.
    //sabit özelliðin hiçbir özelliði ve metodu sýnýf dýþýndan çaðrýlamaz.


    return 0;
}
