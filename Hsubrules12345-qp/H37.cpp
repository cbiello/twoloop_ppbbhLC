#include <iostream>
#include "listH.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> H37(std::complex<dd_real> Fsave[300]) {
std::complex<dd_real> res= 
-dd_real(5.6095988814114399985321114203868) + dd_real(11.514538467937585055306906166522)*Fsave[2] + std::complex<dd_real>(0,dd_real(3.1415926535897932384626433832795))*pow(Fsave[2],2) - dd_real(0.33333333333333333333333333333333)*pow(Fsave[2],3) - dd_real(11.514538467937585055306906166522)*Fsave[4] - std::complex<dd_real>(0,dd_real(3.1415926535897932384626433832795))*pow(Fsave[4],2) + dd_real(0.33333333333333333333333333333333)*pow(Fsave[4],3) + dd_real(1.644934066848226436472415166646)*Fsave[5] - dd_real(0.33333333333333333333333333333333)*pow(Fsave[5],3) - dd_real(1.)*Fsave[41];
return res;
}
