#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Frperm23(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
-dd_real(1.644934066848226) - dd_real(2.)*Fsave[9] + dd_real(2.)*Fsave[2]*Fsave[72] - dd_real(2.)*Fsave[3]*Fsave[72] + pow(Fsave[72],2) - dd_real(2.)*Fsave[73];
return res;
}
