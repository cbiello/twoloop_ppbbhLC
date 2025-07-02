#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Hperm43(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
Fsave[1]*Fsave[269] - dd_real(1.)*Fsave[2]*Fsave[269] + Fsave[273] + Fsave[274] - dd_real(1.)*Fsave[275];
return res;
}
