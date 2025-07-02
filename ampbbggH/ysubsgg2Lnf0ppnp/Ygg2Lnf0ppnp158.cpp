#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp158(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(1.)*pow(dd_real(1.) + ex3,2)*(dd_real(221.) + dd_real(239.)*ex3)*pow(ex4,4) + dd_real(239.)*pow(ex2,6)*pow(ex3,3)*(-dd_real(1.) + ex6) - dd_real(1.)*ex2*(dd_real(1.) + ex3)*pow(ex4,3)*(-dd_real(176.) + dd_real(460.)*ex4 + dd_real(239.)*pow(ex3,2)*(-dd_real(4.) + dd_real(2.)*ex4 + ex6) + ex3*(-dd_real(1096.) + dd_real(920.)*ex4 + dd_real(221.)*ex6)) + pow(ex2,5)*pow(ex3,2)*(dd_real(2.)*ex4*(dd_real(327.) - dd_real(230.)*ex6) - dd_real(239.)*ex3*(dd_real(2.) - dd_real(2.)*ex6 + ex4*(-dd_real(4.) + dd_real(3.)*ex6))) - dd_real(1.)*pow(ex2,2)*pow(ex4,2)*(ex4*(-dd_real(370.) + dd_real(221.)*ex4) + dd_real(239.)*pow(ex3,3)*(dd_real(6.) + pow(ex4,2) + dd_real(2.)*ex4*(-dd_real(4.) + ex6) - dd_real(3.)*ex6) + ex3*(dd_real(591.) + dd_real(681.)*pow(ex4,2) - dd_real(221.)*ex6 + dd_real(20.)*ex4*(-dd_real(129.) + dd_real(23.)*ex6)) + pow(ex3,2)*(dd_real(2007.) + dd_real(699.)*pow(ex4,2) - dd_real(920.)*ex6 + dd_real(8.)*ex4*(-dd_real(513.) + dd_real(115.)*ex6))) + pow(ex2,4)*ex3*(dd_real(239.)*pow(ex3,2)*(-dd_real(1.) + ex4*(dd_real(8.) - dd_real(6.)*ex6) + dd_real(3.)*pow(ex4,2)*(-dd_real(2.) + ex6) + ex6) + pow(ex4,2)*(-dd_real(591.) + dd_real(221.)*ex6) + ex3*ex4*(dd_real(1308.) - dd_real(920.)*ex6 + ex4*(-dd_real(2007.) + dd_real(920.)*ex6))) + pow(ex2,3)*ex4*(dd_real(176.)*pow(ex4,2) - dd_real(239.)*pow(ex3,3)*(-dd_real(4.) + pow(ex4,2)*(-dd_real(4.) + ex6) - dd_real(6.)*ex4*(-dd_real(2.) + ex6) + dd_real(3.)*ex6) + ex3*ex4*(ex4*(dd_real(1272.) - dd_real(221.)*ex6) + dd_real(20.)*(-dd_real(60.) + dd_real(23.)*ex6)) + pow(ex3,2)*(dd_real(654.) + pow(ex4,2)*(dd_real(2052.) - dd_real(460.)*ex6) - dd_real(460.)*ex6 + dd_real(2.)*ex4*(-dd_real(2007.) + dd_real(920.)*ex6)));
return res;
}
