#include <iostream>
#include "listH.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Fr47(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
-dd_real(3.289868133696453)*Fsave[14] - std::complex<dd_real>(0,dd_real(1.570796326794897))*Fsave[1]*Fsave[14] + dd_real(0.25)*pow(Fsave[1],2)*Fsave[14] + std::complex<dd_real>(0,dd_real(0.7853981633974483))*Fsave[5]*Fsave[14] - dd_real(0.25)*Fsave[1]*Fsave[5]*Fsave[14] + std::complex<dd_real>(0,dd_real(0.7853981633974483))*Fsave[6]*Fsave[14] - dd_real(0.25)*Fsave[1]*Fsave[6]*Fsave[14] - dd_real(0.25)*Fsave[5]*Fsave[6]*Fsave[14] + std::complex<dd_real>(0,dd_real(1.570796326794897))*Fsave[101] - dd_real(0.5)*Fsave[1]*Fsave[101] - dd_real(0.5)*Fsave[5]*Fsave[101] - dd_real(1.)*Fsave[116] - dd_real(1.)*Fsave[119];
return res;
}
