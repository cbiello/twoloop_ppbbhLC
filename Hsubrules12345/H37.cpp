#include <iostream>
#include "listH.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> H37(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
-dd_real(5.60959888141144) + dd_real(11.51453846793759)*Fsave[2] + std::complex<dd_real>(0,dd_real(3.141592653589793))*pow(Fsave[2],2) - dd_real(0.3333333333333333)*pow(Fsave[2],3) - dd_real(11.51453846793759)*Fsave[4] - std::complex<dd_real>(0,dd_real(3.141592653589793))*pow(Fsave[4],2) + dd_real(0.3333333333333333)*pow(Fsave[4],3) + dd_real(1.644934066848226)*Fsave[5] - dd_real(0.3333333333333333)*pow(Fsave[5],3) - dd_real(1.)*Fsave[41];
return res;
}
