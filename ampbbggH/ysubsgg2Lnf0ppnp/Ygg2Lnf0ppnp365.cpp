#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp365(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(14.)*pow(dd_real(1.) + ex3,2)*pow(ex4,4) + pow(ex2,4)*pow(ex3,2)*(dd_real(33.)*pow(ex4,2) - dd_real(33.)*ex4*(-dd_real(1.) + ex6) - dd_real(14.)*pow(-dd_real(1.) + ex6,2)) + ex2*ex3*(dd_real(1.) + ex3)*pow(ex4,3)*(dd_real(89.) + dd_real(33.)*ex4 - dd_real(61.)*ex6) + pow(ex2,3)*pow(ex3,2)*ex4*(dd_real(89.) - dd_real(66.)*pow(ex4,2) - dd_real(117.)*ex6 + dd_real(28.)*pow(ex6,2) + dd_real(33.)*ex4*(-dd_real(1.) + dd_real(2.)*ex6)) + pow(ex2,2)*ex3*pow(ex4,2)*(-dd_real(33.)*ex4 + dd_real(61.)*(-dd_real(1.) + ex6) + ex3*(dd_real(33.)*pow(ex4,2) - dd_real(33.)*ex4*(dd_real(1.) + ex6) - dd_real(2.)*(dd_real(75.) - dd_real(75.)*ex6 + dd_real(7.)*pow(ex6,2))));
return res;
}
