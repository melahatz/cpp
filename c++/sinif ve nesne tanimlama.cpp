#include <iostream>
//s�n�f ve nesne tan�mlama
using namespace std;

class Nokta{ //daha sonra nesnelerimizin �zellikleri ve davran��lar� yani metotlar� vard� bunu yazal�m.
public: //d�sardan g�r�n�r oldugunu belirttik.
    int x,y;


};
int main() {
    Nokta n; //s�n�ftan bir (�rne�i) nesneyi tan�mlayabildim
    n.x=0;
    n.y=5;
    cout<<n.x<<","<<n.y<<endl;
    return 0;
}

