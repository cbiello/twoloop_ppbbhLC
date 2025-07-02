#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Hperm48(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
dd_real(6.57973626739291)*Fsave[197] + std::complex<dd_real>(0,dd_real(3.141592653589793))*Fsave[1]*Fsave[197] - dd_real(0.5)*pow(Fsave[1],2)*Fsave[197] - std::complex<dd_real>(0,dd_real(1.570796326794897))*Fsave[17]*Fsave[197] + dd_real(0.5)*Fsave[1]*Fsave[17]*Fsave[197] - std::complex<dd_real>(0,dd_real(1.570796326794897))*Fsave[72]*Fsave[197] + dd_real(0.5)*Fsave[1]*Fsave[72]*Fsave[197] + dd_real(0.5)*Fsave[17]*Fsave[72]*Fsave[197] - std::complex<dd_real>(0,dd_real(3.141592653589793))*Fsave[267] + dd_real(1.)*Fsave[1]*Fsave[267] + dd_real(0.833333333333333)*Fsave[17]*Fsave[267] + dd_real(0.1666666666666667)*Fsave[72]*Fsave[267] + dd_real(1.333333333333333)*Fsave[280] + dd_real(0.6666666666666667)*Fsave[281] + dd_real(0.3333333333333333)*Fsave[282] + dd_real(1.666666666666667)*Fsave[283] + dd_real(0.3333333333333333)*Fsave[284] + dd_real(0.3333333333333333)*Fsave[285];
return res;
}
