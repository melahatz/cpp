#include<iostream>
using namespace std;

class C{
	const int ci;  //sabit üye veri  buraya deger veremezsin
	int x;
	
	public:
		C():ci(0){;  //kurucu fonksion
		x=-2;
		//ci=0;   //hata cünküci sabit.
	}
	
		
};

