#include <iostream>
#include "listH.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> H24(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
dd_real(0.82246703342411321823620758332301) + std::complex<dd_real>(0,dd_real(3.1415926535897932384626433832795))*Fsave[1] + dd_real(0.5)*pow(Fsave[1],2) - dd_real(2.)*Fsave[1]*Fsave[4] + pow(Fsave[4],2) - std::complex<dd_real>(0,dd_real(3.1415926535897932384626433832795))*Fsave[5] + Fsave[1]*Fsave[5] - dd_real(0.5)*pow(Fsave[5],2) - std::complex<dd_real>(0,dd_real(3.1415926535897932384626433832795))*Fsave[6] - dd_real(1.)*Fsave[1]*Fsave[6] + dd_real(2.)*Fsave[4]*Fsave[6] - dd_real(1.)*Fsave[5]*Fsave[6] + dd_real(0.5)*pow(Fsave[6],2) + dd_real(2.)*Fsave[8] + dd_real(2.)*Fsave[11];
return res;
}
