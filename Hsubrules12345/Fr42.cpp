#include <iostream>
#include "listH.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Fr42(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
-dd_real(6.358648998052937) + std::complex<dd_real>(dd_real(5.60959888141144),dd_real(12.91928195012493))*Fsave[2] - dd_real(5.346035717256736)*pow(Fsave[2],2) - std::complex<dd_real>(0,dd_real(1.047197551196598))*pow(Fsave[2],3) + dd_real(0.08333333333333333)*pow(Fsave[2],4) - std::complex<dd_real>(dd_real(5.60959888141144),dd_real(12.91928195012493))*Fsave[4] + dd_real(5.346035717256736)*pow(Fsave[4],2) + std::complex<dd_real>(0,dd_real(1.047197551196598))*pow(Fsave[4],3) - dd_real(0.08333333333333333)*pow(Fsave[4],4) + dd_real(5.60959888141144)*Fsave[5] - dd_real(0.8224670334241132)*Fsave[2]*Fsave[5] + dd_real(0.8224670334241132)*Fsave[4]*Fsave[5] - dd_real(0.8224670334241132)*pow(Fsave[5],2) + dd_real(0.08333333333333333)*pow(Fsave[5],4) + dd_real(0.8224670334241132)*Fsave[7] + dd_real(0.8224670334241132)*Fsave[8] - dd_real(0.5)*Fsave[163];
return res;
}
