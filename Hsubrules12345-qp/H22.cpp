#include <iostream>
#include "listH.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> H22(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
-dd_real(1.644934066848226436472415166646) + dd_real(2.)*Fsave[2]*Fsave[5] - dd_real(2.)*Fsave[4]*Fsave[5] + pow(Fsave[5],2) - dd_real(2.)*Fsave[7] - dd_real(2.)*Fsave[8];
return res;
}
