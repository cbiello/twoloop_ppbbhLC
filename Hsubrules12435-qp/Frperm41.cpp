#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Frperm41(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
std::complex<dd_real>(0,dd_real(3.1415926535897932384626433832795))*Fsave[269] - dd_real(1.)*Fsave[1]*Fsave[269] - dd_real(1.)*Fsave[273] - dd_real(1.)*Fsave[274] + Fsave[275] - dd_real(1.)*Fsave[278];
return res;
}
