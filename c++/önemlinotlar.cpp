#include <iostream>
#include<sstream>
using namespace std;
int main() {
    string str;
   // cin>>str;
    //cout<<str;

    /*getline(cin ,str,'\n'); //iki kelimeyi de ayr� ayr� okumak isterken.bizim belirtti�imiz karaktere kadar okur
    cout<<str; //enter yapana kadar yazars�n enter dan sonra okumaya ba�lar*/

    str="1 2 3 4 5";
    stringstream sstream; //string nesnelerini ay�rmam�za yar�yor nesneler aras�nda da t�r d�n���mlerini yapabiliyoruz.
    sstream<<str; //sstream i�ine at.

    int temp;
    sstream>>temp;
    cout<<temp;

    return 0;
}

