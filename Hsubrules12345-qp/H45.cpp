#include <iostream>
#include "listH.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> H45(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
dd_real(0.) - dd_real(2.)*Fsave[111] + Fsave[113];
return res;
}
