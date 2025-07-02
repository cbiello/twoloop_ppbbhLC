#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Hperm44(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
Fsave[275] - dd_real(1.)*Fsave[276];
return res;
}
