#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp57(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(3.)*pow(ex4,3)*(-dd_real(16.) + ex3*(dd_real(43.) + dd_real(36.)*ex4 - dd_real(36.)*ex6) + dd_real(12.)*pow(ex3,2)*(dd_real(8.) + dd_real(3.)*ex4 - dd_real(3.)*ex6)) + dd_real(108.)*pow(ex2,4)*pow(ex3,2)*(dd_real(1.) + ex4 - dd_real(1.)*ex6)*(-dd_real(1.) + ex6) + ex2*pow(ex4,2)*(-dd_real(48.)*(-dd_real(2.) + ex4 + ex6) + dd_real(36.)*pow(ex3,2)*(-dd_real(19.) - dd_real(1.)*ex4 + dd_real(3.)*pow(ex4,2) + dd_real(17.)*ex6 - dd_real(3.)*pow(ex6,2)) + ex3*(-dd_real(670.) + dd_real(36.)*pow(ex4,2) + dd_real(541.)*ex6 - dd_real(72.)*pow(ex6,2) + ex4*(-dd_real(391.) + dd_real(36.)*ex6))) + pow(ex2,3)*(ex3*(dd_real(36.)*pow(ex4,2) - dd_real(5.)*ex4*(-dd_real(1.) + ex6) - dd_real(232.)*pow(-dd_real(1.) + ex6,2)) + dd_real(48.)*ex4*(-dd_real(1.) + ex6) - dd_real(36.)*pow(ex3,2)*(dd_real(3.)*pow(-dd_real(1.) + ex6,2) + pow(ex4,2)*(-dd_real(9.) + dd_real(6.)*ex6) + ex4*(-dd_real(11.) + dd_real(17.)*ex6 - dd_real(6.)*pow(ex6,2)))) + pow(ex2,2)*ex4*(-dd_real(48.)*(dd_real(1.) + ex4*(-dd_real(2.) + ex6) - dd_real(1.)*ex6) + ex3*(dd_real(773.) - dd_real(72.)*pow(ex4,2) + ex4*(dd_real(278.) - dd_real(211.)*ex6) - dd_real(1077.)*ex6 + dd_real(304.)*pow(ex6,2)) + dd_real(36.)*pow(ex3,2)*(dd_real(14.) + dd_real(3.)*pow(ex4,2)*(-dd_real(3.) + ex6) - dd_real(20.)*ex6 + dd_real(6.)*pow(ex6,2) + ex4*(-dd_real(10.) + dd_real(11.)*ex6 - dd_real(3.)*pow(ex6,2))));
return res;
}
