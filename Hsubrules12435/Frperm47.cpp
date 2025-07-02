#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Frperm47(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
-dd_real(3.289868133696453)*Fsave[197] - std::complex<dd_real>(0,dd_real(1.570796326794897))*Fsave[1]*Fsave[197] + dd_real(0.25)*pow(Fsave[1],2)*Fsave[197] + std::complex<dd_real>(0,dd_real(0.7853981633974483))*Fsave[17]*Fsave[197] - dd_real(0.25)*Fsave[1]*Fsave[17]*Fsave[197] + std::complex<dd_real>(0,dd_real(0.7853981633974483))*Fsave[72]*Fsave[197] - dd_real(0.25)*Fsave[1]*Fsave[72]*Fsave[197] - dd_real(0.25)*Fsave[17]*Fsave[72]*Fsave[197] + std::complex<dd_real>(0,dd_real(1.570796326794897))*Fsave[267] - dd_real(0.5)*Fsave[1]*Fsave[267] - dd_real(0.5)*Fsave[17]*Fsave[267] - dd_real(1.)*Fsave[280] - dd_real(1.)*Fsave[283];
return res;
}
