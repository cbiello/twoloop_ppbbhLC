#include <iostream>
#include "listH.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> H219(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
-dd_real(9.0471373676652454005982834165531) - std::complex<dd_real>(0,dd_real(6.283185307179586476925286766559))*Fsave[3] + pow(Fsave[3],2) - dd_real(1.)*Fsave[10];
return res;
}
