#define cmpx
#include <iostream>
#include <cmath>
#ifdef cmpx

using namespace std;

class complex {
  public:
      float i;// imaj k�sm�
      float r; // reel k�sm�
      float a,b,c,d; // de�erler

  complex toplama(complex a){
     complex c;
     c.i= i+a.i;
     c.r= r+a.r;
     return c;
  }

  complex cikarma(complex a){
    complex d;
    d.i= i-a.i;
    d.r= r-a.r;
    return d;
  }
  
};

#endif //
