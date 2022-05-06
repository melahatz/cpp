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
    ~Nokta();//y�k�c� fonk tan�mlad�m

    int getX()const;
    int getY()const;   //bu nesnenin hi�bir �zelligini metot i�erisinde degitirmeyece�im demek

    void setX(int);   //i�ine int d�nd�rd���n� unutma
    void setY(int);


};
Nokta::Nokta() : t(0){ //baslang�c degeri vermenin yolu
    x=0;
    y=0;
    z=new int(4);

    // t=0; //hatal� olur.
    cout<<"parametresiz kurucu"<<x<<" "<<y<<endl;
}
Nokta::Nokta(int x, int y=6 , int t=0) :t(t){
    z = new int(7);
    this->x=x;
    this->y=y;   //unutma buralar�

    //this->t=t  hatal� olur.
    cout<<"parametreli kurucu"<<x<<" "<<y<<endl;

}
Nokta::~Nokta() {
    cout<<"yikici calisti"<<endl;
    delete z;
}
int Nokta::getX()const{ //buralar� da const yap�yoruz
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
    const Nokta n2(1,9,100); //hicbir �zelligi d��ardan eri�erek degistiremeyece�im ve hi�bir �zel. �a��ram�cam

    cout<<n1.getX()<<" "<<n1.getY()<<endl;
    n1.setX(500);
    cout<<n1.getX()<<" "<<n1.getY()<<endl;

    //n2 get ve set edersek �al��m�cakt�r.
    //sabit �zelli�in hi�bir �zelli�i ve metodu s�n�f d���ndan �a�r�lamaz.


    return 0;
}
