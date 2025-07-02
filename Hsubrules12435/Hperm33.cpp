#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Hperm33(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
-dd_real(0.5)*Fsave[17]*Fsave[197] - dd_real(0.5)*Fsave[72]*Fsave[197] - dd_real(1.)*Fsave[267];
return res;
}
