#include <iostream>
#include "listH.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> H42(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
dd_real(2.)*Fsave[5]*Fsave[103] - dd_real(2.)*Fsave[6]*Fsave[103] + dd_real(2.)*Fsave[109] - dd_real(2.)*Fsave[110];
return res;
}
