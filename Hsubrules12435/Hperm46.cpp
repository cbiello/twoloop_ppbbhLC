#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Hperm46(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
std::complex<dd_real>(0,-dd_real(3.141592653589793))*Fsave[269] + Fsave[1]*Fsave[269] + Fsave[273] + Fsave[274] - dd_real(2.)*Fsave[275];
return res;
}
