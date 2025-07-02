#include <iostream>
#include "listH.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Fr41(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
std::complex<dd_real>(0,dd_real(3.1415926535897932384626433832795))*Fsave[103] - dd_real(1.)*Fsave[1]*Fsave[103] - dd_real(1.)*Fsave[109] - dd_real(1.)*Fsave[110] + Fsave[111] - dd_real(1.)*Fsave[114];
return res;
}
