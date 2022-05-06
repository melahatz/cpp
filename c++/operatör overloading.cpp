#include<iostream>
using namespace std;

class ComplexT{ // Karmaþýk (Kompleks) sayýlarý tanýmlamak için oluþturulan sýnýf
double re , im; // reel ve sanal kýsýmlar
public:
ComplexT(double re_in=0, double im_in=1); // Kurucu
ComplexT operator+(const ComplexT & ) const; // + operatörünün fonksiyonu
void goster() const;
};
// + operatörü
ComplexT ComplexT::operator+(const ComplexT &c) const
{
double yeni_re, yeni_im;
yeni_re = re + c.re;
yeni_im = im + c.im;
return ComplexT(yeni_re , yeni_im);
}
int main()
{
ComplexT z1(1,1) , z2(2,2) , z3;
z3 = z1 + z2; // z3=z1.operator+(z2)
return 0;
}
