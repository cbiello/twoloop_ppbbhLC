#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp296(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(27.)*pow(ex2,4)*ex3*(-dd_real(1.) + ex6) + dd_real(27.)*ex3*pow(ex4,2)*(-dd_real(1.)*ex4 + ex6) + ex2*ex4*(dd_real(9.)*pow(ex4,3) - dd_real(1.)*pow(ex4,2)*(dd_real(49.) + dd_real(27.)*ex3 + dd_real(27.)*ex6) + ex6*(dd_real(58.) + dd_real(27.)*ex3*(-dd_real(2.) + ex6) - dd_real(49.)*ex6 - dd_real(9.)*pow(ex6,2)) + ex4*(-dd_real(85.) + dd_real(81.)*ex3 + dd_real(98.)*ex6 + dd_real(27.)*pow(ex6,2))) + pow(ex2,2)*(-dd_real(9.)*pow(ex4,3) + pow(ex4,2)*(dd_real(22.) - dd_real(27.)*ex3*(-dd_real(3.) + ex6) - dd_real(40.)*ex6) - dd_real(1.)*(dd_real(27.)*ex3 + dd_real(58.)*(-dd_real(1.) + ex6))*(-dd_real(1.) + ex6)*ex6 + ex4*(-dd_real(1.) + ex6)*(-dd_real(85.) + dd_real(107.)*ex6 + dd_real(27.)*ex3*(dd_real(1.) + ex6))) + dd_real(27.)*pow(ex2,3)*(-dd_real(1.)*ex4*(-dd_real(1.) + ex6) + ex3*(-dd_real(1.)*pow(-dd_real(1.) + ex6,2) + ex4*(-dd_real(1.) + dd_real(2.)*ex6)));
return res;
}
