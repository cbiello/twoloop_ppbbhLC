#include <iostream>
#include "listH.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Fr33(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
-dd_real(0.5)*Fsave[5]*Fsave[14] - dd_real(0.5)*Fsave[6]*Fsave[14] - dd_real(1.)*Fsave[101];
return res;
}
