#include <iostream>
using namespace std;
//namespace(isim uzaylarý)
//amac bir programý baþka programcýlara paylastýrdýðýnda x ler karýsmasýn

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
    cout<<programci1::x<<endl; //hangisini bastýrmak istersen onu yaz ister degisken ister fonksiyon

}
