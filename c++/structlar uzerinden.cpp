#include <iostream>
using namespace std;
//struclar üzerinden

struct Nokta{
    int x,y;
};
int main() {
    Nokta n;
    n.x=1;
    n.y=3;

    Nokta *pNokta; //pointer degisken
    pNokta=new Nokta(); //yer aldýk bellekten
    pNokta->x=6; //gösterici oldugundan degiskenlere böyle ulaþýyoruz.

    cout<<n.x<<endl;
    cout<<n.y<<endl;
    cout<<pNokta->x<<endl;

    return 0;
}

