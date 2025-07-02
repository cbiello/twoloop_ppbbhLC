#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Hperm45(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
dd_real(0.) - dd_real(2.)*Fsave[275] + Fsave[277];
return res;
}
