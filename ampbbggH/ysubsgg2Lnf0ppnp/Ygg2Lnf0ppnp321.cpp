#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp321(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(8.)*pow(dd_real(1.) + ex3,2)*pow(ex4,4) + pow(ex2,4)*pow(ex3,2)*(dd_real(15.)*pow(ex4,2) - dd_real(15.)*ex4*(-dd_real(1.) + ex6) - dd_real(8.)*pow(-dd_real(1.) + ex6,2)) + ex2*ex3*(dd_real(1.) + ex3)*pow(ex4,3)*(dd_real(47.) + dd_real(15.)*ex4 - dd_real(31.)*ex6) + pow(ex2,3)*pow(ex3,2)*ex4*(dd_real(47.) - dd_real(30.)*pow(ex4,2) - dd_real(63.)*ex6 + dd_real(16.)*pow(ex6,2) + dd_real(15.)*ex4*(-dd_real(1.) + dd_real(2.)*ex6)) + pow(ex2,2)*ex3*pow(ex4,2)*(-dd_real(15.)*ex4 + dd_real(31.)*(-dd_real(1.) + ex6) + ex3*(-dd_real(78.) + dd_real(15.)*pow(ex4,2) + dd_real(78.)*ex6 - dd_real(8.)*pow(ex6,2) - dd_real(15.)*ex4*(dd_real(1.) + ex6)));
return res;
}
