#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Hperm26(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
dd_real(0.8224670334241132) + std::complex<dd_real>(0,dd_real(3.141592653589793))*Fsave[1] + dd_real(0.5)*pow(Fsave[1],2) - dd_real(2.)*Fsave[1]*Fsave[3] + pow(Fsave[3],2) + dd_real(2.)*Fsave[12] - std::complex<dd_real>(0,dd_real(3.141592653589793))*Fsave[17] - dd_real(1.)*Fsave[1]*Fsave[17] + dd_real(2.)*Fsave[3]*Fsave[17] + dd_real(0.5)*pow(Fsave[17],2) - std::complex<dd_real>(0,dd_real(3.141592653589793))*Fsave[72] + Fsave[1]*Fsave[72] - dd_real(1.)*Fsave[17]*Fsave[72] - dd_real(0.5)*pow(Fsave[72],2) + dd_real(2.)*Fsave[73];
return res;
}
