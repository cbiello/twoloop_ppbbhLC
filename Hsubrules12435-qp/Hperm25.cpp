#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Hperm25(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
std::complex<dd_real>(0,dd_real(6.283185307179586476925286766559))*Fsave[1] + std::complex<dd_real>(0,dd_real(6.283185307179586476925286766559))*Fsave[2] - dd_real(2.)*Fsave[1]*Fsave[2] - std::complex<dd_real>(0,dd_real(6.283185307179586476925286766559))*Fsave[3] + pow(Fsave[3],2) - std::complex<dd_real>(0,dd_real(6.283185307179586476925286766559))*Fsave[4] + pow(Fsave[4],2) + dd_real(2.)*Fsave[7] + dd_real(2.)*Fsave[9] + dd_real(2.)*Fsave[11] + dd_real(2.)*Fsave[12] - dd_real(2.)*Fsave[13];
return res;
}
