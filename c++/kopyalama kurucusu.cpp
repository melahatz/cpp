#include <iostream>
using namespace std;

class Nokta {
private:
    int x,y;
public:
    const int t;
    int *z;
    Nokta();
    Nokta(int,int,int);
    Nokta(const Nokta&);//kopyalama kurucusu nokta sýnýfýndan bir referans türünfr nesne gelicek diyorum ve sabit gelir.
    ~Nokta(); //yýkýcý kurucu fonk.

    int getX() const;
    int getY() const;

    void setX(int);
    void setY(int);

};
Nokta::Nokta(): t(0){  //parametresiz kurucu
    x=0;
    y=0;
    z=new int(3);
    //t=0 hatalý olur
    cout<<"parametresiz kurucu"<< x << " "<<y<<endl;
}
Nokta::Nokta(int x, int y=8, int t=0): t(t) {
    this->x=x;
    this->y=y;
    z=new int(6);
    cout<<"parametreli kurucu"<<x<<" "<<y<<endl;

}
Nokta::~Nokta() {
    cout<<"yikici calisti"<<x<<" "<<y<<endl;
    delete z;
}
Nokta::Nokta(const Nokta& n) : t(n.t){
    x=n.x;
    y=n.y;
    z=new int(4);
    cout<<"kopyalama calisti"<<x<<" "<<y<<endl;

}
int Nokta::getX()const{
    return x;
}
int Nokta::getY()const{
    return y;
}
void Nokta::setX(int x) {
    this->x=x;
}
void Nokta::setY(int y) {
    this->y=y;
}

int main() {
    Nokta n1(1,20,30);
    Nokta n2(n1); //KOPYALAMA ÝÇÝN
    Nokta n3=n1; //kopyalama için
    return 0;
}

