#include <iostream>
#include "listH.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Fr23(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
-dd_real(1.644934066848226436472415166646) + dd_real(2.)*Fsave[2]*Fsave[6] - dd_real(2.)*Fsave[3]*Fsave[6] + pow(Fsave[6],2) - dd_real(2.)*Fsave[9] - dd_real(2.)*Fsave[10];
return res;
}
