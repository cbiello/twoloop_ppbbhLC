#include <iostream>
#include "listH.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> H43(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
Fsave[1]*Fsave[103] - dd_real(1.)*Fsave[2]*Fsave[103] + Fsave[109] + Fsave[110] - dd_real(1.)*Fsave[111];
return res;
}
