#include<iostream>
//dinamik bellek y�netimi
using namespace std;
int main() {
    int* pInt=new int();
    *pInt=5;

    string* pString=new string() ;
    *pString="Bilgisayar";

    int *pArray=new int[10];
    for(int i=0;i<10; i++){
        pArray[i]=i;
    }
    for(int i=0;i<10; i++){
        cout<<pArray[i]<<endl;
    }


    cout<<*pString<<endl;

    return 0;
}

