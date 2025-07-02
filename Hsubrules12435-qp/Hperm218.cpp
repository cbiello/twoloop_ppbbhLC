#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Hperm218(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
-dd_real(10.692071434513471837070698583199) - std::complex<dd_real>(0,dd_real(6.283185307179586476925286766559))*Fsave[1] + pow(Fsave[1],2) + Fsave[11];
return res;
}
