#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Hperm47(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
dd_real(0.) + Fsave[275] - dd_real(0.5)*Fsave[279];
return res;
}
