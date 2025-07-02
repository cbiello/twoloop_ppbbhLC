#include <iostream>
#include "listH.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Fr47(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
-dd_real(3.2898681336964528729448303332921)*Fsave[14] - std::complex<dd_real>(0,dd_real(1.5707963267948966192313216916398))*Fsave[1]*Fsave[14] + dd_real(0.25)*pow(Fsave[1],2)*Fsave[14] + std::complex<dd_real>(0,dd_real(0.78539816339744830961566084581988))*Fsave[5]*Fsave[14] - dd_real(0.25)*Fsave[1]*Fsave[5]*Fsave[14] + std::complex<dd_real>(0,dd_real(0.78539816339744830961566084581988))*Fsave[6]*Fsave[14] - dd_real(0.25)*Fsave[1]*Fsave[6]*Fsave[14] - dd_real(0.25)*Fsave[5]*Fsave[6]*Fsave[14] + std::complex<dd_real>(0,dd_real(1.5707963267948966192313216916398))*Fsave[101] - dd_real(0.5)*Fsave[1]*Fsave[101] - dd_real(0.5)*Fsave[5]*Fsave[101] - dd_real(1.)*Fsave[116] - dd_real(1.)*Fsave[119];
return res;
}
