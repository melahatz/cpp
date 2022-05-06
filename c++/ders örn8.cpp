#include<iostream>
#include<cstring>
using namespace std;
//yok edici fonksiyonlar

class String{
	int boy;
	char *icerik;
	public:
		String( const char *);  //kurucu fonksiyon
		void goster();
		~String();  //yok edici fonksiyon
		
};

String::String(const char *gelen_veri){
	cout<<"kurucu calisti.."<<endl;
	boy=strlen (gelen_veri);   //gelen dizinin boyu hesaplandi.
	icerik=new char[boy+1];   //null icin +1 yapýldý.
	strcpy(icerik,gelen_veri);  //gelen veri icerigin gösterdigi yere.
}

void String::goster(){
	cout<<icerik<<" "<<boy<<endl;
}

String::~String(){
	cout<<"yok edici fonksiyon calisti.."<<endl;
	delete[] icerik;
}

int main(){
	String string1("Katar1");
	String string2("Katar2");
	
	string1.goster();
	string2.goster();
	
	return 0;
}
