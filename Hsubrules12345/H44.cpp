#include <iostream>
#include "listH.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> H44(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
Fsave[111] - dd_real(1.)*Fsave[112];
return res;
}
