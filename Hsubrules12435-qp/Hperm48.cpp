#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Hperm48(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
dd_real(6.579736267392906)*Fsave[197] + std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793))*Fsave[1]*Fsave[197] - dd_real(0.5)*pow(Fsave[1],2)*Fsave[197] - std::complex<dd_real>(dd_real(0.),dd_real(1.5707963267948966))*Fsave[17]*Fsave[197] + dd_real(0.5)*Fsave[1]*Fsave[17]*Fsave[197] - std::complex<dd_real>(dd_real(0.),dd_real(1.5707963267948966))*Fsave[72]*Fsave[197] + dd_real(0.5)*Fsave[1]*Fsave[72]*Fsave[197] + dd_real(0.5)*Fsave[17]*Fsave[72]*Fsave[197] - std::complex<dd_real>(dd_real(0.),dd_real(3.141592653589793))*Fsave[267] + dd_real(1.)*Fsave[1]*Fsave[267] + dd_real(0.8333333333333334)*Fsave[17]*Fsave[267] + dd_real(0.16666666666666666)*Fsave[72]*Fsave[267] + dd_real(1.3333333333333335)*Fsave[280] + dd_real(0.66666666666666666666666666666667)*Fsave[281] + dd_real(0.33333333333333333333333333333333)*Fsave[282] + dd_real(1.6666666666666667)*Fsave[283] + dd_real(0.33333333333333333333333333333333)*Fsave[284] + dd_real(0.33333333333333333333333333333333)*Fsave[285];
return res;
}
