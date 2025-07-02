#include <iostream>
#include "listH.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> H48(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
dd_real(6.579736267392906)*Fsave[14] + std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793))*Fsave[1]*Fsave[14] - dd_real(0.5)*pow(Fsave[1],2)*Fsave[14] - std::complex<dd_real>(dd_real(0.),dd_real(1.5707963267948966))*Fsave[5]*Fsave[14] + dd_real(0.5)*Fsave[1]*Fsave[5]*Fsave[14] - std::complex<dd_real>(dd_real(0.),dd_real(1.5707963267948966))*Fsave[6]*Fsave[14] + dd_real(0.5)*Fsave[1]*Fsave[6]*Fsave[14] + dd_real(0.5)*Fsave[5]*Fsave[6]*Fsave[14] - std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793))*Fsave[101] + dd_real(1.)*Fsave[1]*Fsave[101] + dd_real(0.8333333333333334)*Fsave[5]*Fsave[101] + dd_real(0.16666666666666666)*Fsave[6]*Fsave[101] + dd_real(1.3333333333333335)*Fsave[116] + dd_real(0.66666666666666666666666666666667)*Fsave[117] + dd_real(0.33333333333333333333333333333333)*Fsave[118] + dd_real(1.6666666666666667)*Fsave[119] + dd_real(0.33333333333333333333333333333333)*Fsave[120] + dd_real(0.33333333333333333333333333333333)*Fsave[121];
return res;
}
