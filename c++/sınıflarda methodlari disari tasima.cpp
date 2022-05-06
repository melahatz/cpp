#include <iostream>
using namespace std;
//Sýnýf Tasarýmda Methodlarý Dýþarý Taþýma

class Nokta{
public: //public unutma.
    int x,y;

    void deger_atama(int ,int ); //prototipini yazýyoruz, taþýmak istedigimiz fonksiyonun
    void ekrana_yaz();
    bool sifir_mi();
};

void Nokta::deger_atama( int _x , int _y ) {
    x=_x;
    y=_y;

}

void Nokta::ekrana_yaz() {
    cout<<x<<","<<y<<endl;
}

bool Nokta::sifir_mi(){
    return x ==0 && y ==0;
}
int main() {
    Nokta n1;
    Nokta n2;
    Nokta *n3;
    Nokta *n4;
    n4=new Nokta(); //n4 ü pointer tanýmladýðýmýzdan yer aldýk.
    Nokta array[10];
    Nokta *pArray; //ÝKÝSÝDE AYNI ÞEY BÝRÝNÝ POÝNTERLA YAOTIK.
    pArray= new Nokta[10];

    for(int i=0; i<10; i++){
        array[i].deger_atama(i,i+2);
        (pArray + sizeof(Nokta) *i)->deger_atama(i+5,i+10); //pointerda kapladýgý alan kadar gitmemizdwn dolayý
        //boyutunu alýcaz
    }

    for(int i=0; i<10; i++){
        array[i].ekrana_yaz();
        (pArray + sizeof(Nokta) *i)-> ekrana_yaz();
        cout<<endl;
    }

    n3=&n2;

    n1.deger_atama(2,4);
    n1.ekrana_yaz();

    n2.deger_atama(5,7);
    n2.ekrana_yaz();

    cout<<"n3 pointer ile yazilan degerler"<<endl;
    n3->ekrana_yaz();

    n4->deger_atama(2,9);
    n4->ekrana_yaz();

    return 0;
}


