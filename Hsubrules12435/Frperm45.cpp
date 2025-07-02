#include <iostream>
#include "listHperm.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Frperm45(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
std::complex<dd_real>(-dd_real(2.404113806319189),-dd_real(2.583856390024985))*Fsave[1] - std::complex<dd_real>(dd_real(2.404113806319189),dd_real(2.583856390024985))*Fsave[2] + dd_real(0.8224670334241132)*Fsave[1]*Fsave[2] + std::complex<dd_real>(dd_real(2.404113806319189),dd_real(2.583856390024985))*Fsave[3] - dd_real(0.4112335167120566)*pow(Fsave[3],2) + std::complex<dd_real>(dd_real(2.404113806319189),dd_real(2.583856390024985))*Fsave[4] - dd_real(0.4112335167120566)*pow(Fsave[4],2) - dd_real(0.8224670334241132)*Fsave[7] - dd_real(0.8224670334241132)*Fsave[9] - dd_real(0.8224670334241132)*Fsave[11] - dd_real(0.8224670334241132)*Fsave[12] + dd_real(0.8224670334241132)*Fsave[13] - dd_real(0.08333333333333333)*Fsave[222];
return res;
}
