#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp287(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(19.)*pow(dd_real(1.) + ex3,2)*pow(ex4,4) + pow(ex2,4)*pow(ex3,2)*(dd_real(12.)*pow(ex4,2) - dd_real(12.)*ex4*(-dd_real(1.) + ex6) - dd_real(19.)*pow(-dd_real(1.) + ex6,2)) + dd_real(2.)*ex2*ex3*(dd_real(1.) + ex3)*pow(ex4,3)*(dd_real(44.) + dd_real(6.)*ex4 - dd_real(25.)*ex6) - dd_real(2.)*pow(ex2,3)*pow(ex3,2)*ex4*(-dd_real(44.) + dd_real(12.)*pow(ex4,2) + ex4*(dd_real(6.) - dd_real(12.)*ex6) + dd_real(63.)*ex6 - dd_real(19.)*pow(ex6,2)) + pow(ex2,2)*ex3*pow(ex4,2)*(-dd_real(12.)*ex4 + dd_real(50.)*(-dd_real(1.) + ex6) + ex3*(-dd_real(138.) + dd_real(12.)*pow(ex4,2) + dd_real(138.)*ex6 - dd_real(19.)*pow(ex6,2) - dd_real(12.)*ex4*(dd_real(1.) + ex6)));
return res;
}
