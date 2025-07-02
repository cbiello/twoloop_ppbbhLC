#include <iostream>
#include "listH.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> H218(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
-dd_real(10.692071434513471837070698583199) - std::complex<dd_real>(0,dd_real(6.283185307179586476925286766559))*Fsave[1] + pow(Fsave[1],2) + Fsave[11];
return res;
}
