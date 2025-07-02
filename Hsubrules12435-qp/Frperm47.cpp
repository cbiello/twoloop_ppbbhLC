#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Frperm47(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
-dd_real(3.2898681336964528729448303332921)*Fsave[197] - std::complex<dd_real>(0,dd_real(1.5707963267948966192313216916398))*Fsave[1]*Fsave[197] + dd_real(0.25)*pow(Fsave[1],2)*Fsave[197] + std::complex<dd_real>(0,dd_real(0.78539816339744830961566084581988))*Fsave[17]*Fsave[197] - dd_real(0.25)*Fsave[1]*Fsave[17]*Fsave[197] + std::complex<dd_real>(0,dd_real(0.78539816339744830961566084581988))*Fsave[72]*Fsave[197] - dd_real(0.25)*Fsave[1]*Fsave[72]*Fsave[197] - dd_real(0.25)*Fsave[17]*Fsave[72]*Fsave[197] + std::complex<dd_real>(0,dd_real(1.5707963267948966192313216916398))*Fsave[267] - dd_real(0.5)*Fsave[1]*Fsave[267] - dd_real(0.5)*Fsave[17]*Fsave[267] - dd_real(1.)*Fsave[280] - dd_real(1.)*Fsave[283];
return res;
}
