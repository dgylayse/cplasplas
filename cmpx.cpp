#include <iostream>
#include "cmpx.h"
#include <cmath>
using namespace std;


int main(){
    complex a,b,c,d;
    
    cout<<"ilk sayinin reel kismi: "<<a.r<<endl;
    cin>>a.r;
    cout<<"ilk sayinin imaj kismi: "<<a.i<<endl;
    cin>>a.i;
    cout<<"ilk sayi:"<<a.r<<"+"<<a.i<<"i"<<endl;
    
    cout<<"Ikinci sayinin reel kismi: "<<b.r<<endl;
    cin>>b.r;
    cout<<"Ikinci kismin imaj kismi: "<<b.i<<endl;
    cin>>b.i;
    cout<<"Ikinci sayi:"<<b.r<<"+"<<b.i<<"i"<<endl;
    
    c = a.toplama(b);
    cout<<" Toplami= "<<c.r<<"+"<<c.i<<"i"<<endl;
    
    d = a.cikarma(b);
    cout<<" Farki= "<<d.r<<"-"<<d.i<<"i"<<endl;

}
