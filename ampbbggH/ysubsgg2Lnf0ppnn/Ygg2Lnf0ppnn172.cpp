#include <iostream>
#include "listYgg2Lnf0ppnn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnn172(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(3.)*pow(ex2,6)*pow(ex3,3) + pow(ex2,5)*pow(ex3,2)*(-dd_real(9.)*ex3*(-dd_real(1.) + ex4) - dd_real(31.)*ex4) - dd_real(3.)*pow(dd_real(1.) + ex3,3)*pow(ex4,3) - dd_real(1.)*ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(9.)*ex3*(-dd_real(1.) + ex4) + dd_real(31.)*ex4) + pow(ex2,4)*ex3*(dd_real(2.)*pow(ex4,2) + ex3*ex4*(-dd_real(71.) + dd_real(62.)*ex4) + dd_real(9.)*pow(ex3,2)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2))) - dd_real(1.)*pow(ex2,2)*(dd_real(1.) + ex3)*ex4*(dd_real(2.)*pow(ex4,2) + ex3*ex4*(-dd_real(71.) + dd_real(62.)*ex4) + dd_real(9.)*pow(ex3,2)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2))) - dd_real(1.)*pow(ex2,3)*(dd_real(2.)*ex3*(-dd_real(32.) + ex4)*pow(ex4,2) + dd_real(4.)*pow(ex4,3) + pow(ex3,2)*ex4*(dd_real(49.) - dd_real(142.)*ex4 + dd_real(31.)*pow(ex4,2)) + dd_real(3.)*pow(ex3,3)*(-dd_real(1.) + dd_real(9.)*ex4 - dd_real(9.)*pow(ex4,2) + pow(ex4,3)));
return res;
}
