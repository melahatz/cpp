#include <iostream>
//sýnýf ve nesne tanýmlama
using namespace std;

class Nokta{ //daha sonra nesnelerimizin özellikleri ve davranýþlarý yani metotlarý vardý bunu yazalým.
public: //dýsardan görünür oldugunu belirttik.
    int x,y;


};
int main() {
    Nokta n; //sýnýftan bir (örneði) nesneyi tanýmlayabildim
    n.x=0;
    n.y=5;
    cout<<n.x<<","<<n.y<<endl;
    return 0;
}

