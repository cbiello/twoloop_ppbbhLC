#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Hperm42(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
dd_real(2.)*Fsave[17]*Fsave[269] - dd_real(2.)*Fsave[72]*Fsave[269] + dd_real(2.)*Fsave[273] - dd_real(2.)*Fsave[274];
return res;
}
