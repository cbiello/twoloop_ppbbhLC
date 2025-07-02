#include <iostream>
#include "listH.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> H47(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
dd_real(0.) + Fsave[111] - dd_real(0.5)*Fsave[115];
return res;
}
