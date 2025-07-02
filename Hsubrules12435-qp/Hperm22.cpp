#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Hperm22(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
-dd_real(1.644934066848226436472415166646) - dd_real(2.)*Fsave[7] + dd_real(2.)*Fsave[2]*Fsave[17] - dd_real(2.)*Fsave[4]*Fsave[17] + pow(Fsave[17],2) - dd_real(2.)*Fsave[22];
return res;
}
