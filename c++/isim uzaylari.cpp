#include <iostream>
using namespace std;
//namespace(isim uzaylar�)
//amac bir program� ba�ka programc�lara paylast�rd���nda x ler kar�smas�n

namespace programci1 {
    int x = 15;

    void Boo() {
        int x = 7;
        cout << x << endl;
    };
}
    namespace programci2 {
        int x = 15;

        void Foo() {
            int x = 5;
            cout << x << endl;
        };
    }

int main() {
    cout<<programci1::x<<endl; //hangisini bast�rmak istersen onu yaz ister degisken ister fonksiyon

}
