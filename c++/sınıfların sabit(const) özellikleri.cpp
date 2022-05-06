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

    int getX();  //int döndürdüðünü unutma
    int getY();

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
    Nokta n1(3,5,7);
    Nokta n2(1,9,100);
    cout<<n1.t<<endl;   //yazdýrmayý unutma
    cout<<n2.t<<endl;
    return 0;
}


