#include <iostream>
//Sýnýflara Method Ekleme ve Kullanma
using namespace std;

class Nokta{
public:
    int x,y;

    void degerAta(int _x,int _y){
        x=_x;
        y=_y;
    }
    void ekranaYaz(){
        cout<<x<<","<<y<<endl;
    }

    bool sifir_mi(){
        if(x==0 && y==0)
            return true;
        else
            return false;


    }
};
int main() {
    Nokta n1;
    Nokta n2;
    n1.degerAta(2,5);
    n1.ekranaYaz();

    n2.degerAta(7,5);
    n2.ekranaYaz();

    if (n1.sifir_mi())
        cout<<"n1 baslangýc noktasýnda";
    if (n2.sifir_mi())
        cout<<"n2 baslangýc noktasýnda";
    return 0;
}

