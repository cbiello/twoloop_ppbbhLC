#include <iostream>
#include "listH.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> H342(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
std::complex<dd_real>(0,dd_real(0.78539816339744830961566084581988))*Fsave[14] - dd_real(0.25)*Fsave[1]*Fsave[14] - dd_real(0.25)*Fsave[5]*Fsave[14] - dd_real(0.5)*Fsave[6]*Fsave[14] + Fsave[14]*Fsave[17] - dd_real(2.5)*Fsave[101] - dd_real(1.)*Fsave[105] - dd_real(0.5)*Fsave[106];
return res;
}
