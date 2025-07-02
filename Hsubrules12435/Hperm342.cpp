#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Hperm342(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
std::complex<dd_real>(0,dd_real(0.7853981633974483))*Fsave[197] - dd_real(0.25)*Fsave[1]*Fsave[197] + Fsave[5]*Fsave[197] - dd_real(0.25)*Fsave[17]*Fsave[197] - dd_real(0.5)*Fsave[72]*Fsave[197] - dd_real(2.5)*Fsave[267] - dd_real(1.)*Fsave[270] - dd_real(0.5)*Fsave[271];
return res;
}
