#include <iostream>
using namespace std;
//struclar �zerinden

struct Nokta{
    int x,y;
};
int main() {
    Nokta n;
    n.x=1;
    n.y=3;

    Nokta *pNokta; //pointer degisken
    pNokta=new Nokta(); //yer ald�k bellekten
    pNokta->x=6; //g�sterici oldugundan degiskenlere b�yle ula��yoruz.

    cout<<n.x<<endl;
    cout<<n.y<<endl;
    cout<<pNokta->x<<endl;

    return 0;
}

