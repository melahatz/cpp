#include <iostream>
#include<sstream>
using namespace std;
int main() {
    string str;
   // cin>>str;
    //cout<<str;

    /*getline(cin ,str,'\n'); //iki kelimeyi de ayrý ayrý okumak isterken.bizim belirttiðimiz karaktere kadar okur
    cout<<str; //enter yapana kadar yazarsýn enter dan sonra okumaya baþlar*/

    str="1 2 3 4 5";
    stringstream sstream; //string nesnelerini ayýrmamýza yarýyor nesneler arasýnda da tür dönüþümlerini yapabiliyoruz.
    sstream<<str; //sstream içine at.

    int temp;
    sstream>>temp;
    cout<<temp;

    return 0;
}

