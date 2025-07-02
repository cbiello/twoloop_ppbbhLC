#include <iostream>
#include "listYgg2Lnf0ppnn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnn136(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(24.)*pow(dd_real(1.) + ex3,2)*pow(ex4,3) + pow(ex2,3)*(dd_real(2.)*(-dd_real(635.)*pow(ex4,2) + dd_real(527.)*ex4*(-dd_real(1.) + ex6) + dd_real(108.)*pow(-dd_real(1.) + ex6,2)) + pow(ex3,2)*(-dd_real(24.)*pow(ex4,2) + dd_real(349.)*ex4*(-dd_real(1.) + ex6) + dd_real(216.)*pow(-dd_real(1.) + ex6,2)) + ex3*(-dd_real(373.)*pow(ex4,2) + dd_real(1403.)*ex4*(-dd_real(1.) + ex6) + dd_real(432.)*pow(-dd_real(1.) + ex6,2))) - dd_real(1.)*ex2*(dd_real(1.) + ex3)*pow(ex4,2)*(dd_real(487.)*ex4 + dd_real(24.)*(-dd_real(7.) + dd_real(8.)*ex6) + ex3*(dd_real(325.)*ex4 + dd_real(24.)*(-dd_real(7.) + dd_real(8.)*ex6))) + pow(ex2,2)*ex4*(dd_real(463.)*pow(ex4,2) + ex4*(dd_real(1541.) - dd_real(247.)*ex6) - dd_real(24.)*(dd_real(17.) - dd_real(26.)*ex6 + dd_real(9.)*pow(ex6,2)) + ex3*(dd_real(349.)*pow(ex4,2) + ex4*(dd_real(2215.) - dd_real(596.)*ex6) - dd_real(48.)*(dd_real(17.) - dd_real(26.)*ex6 + dd_real(9.)*pow(ex6,2))) + pow(ex3,2)*(dd_real(24.)*pow(ex4,2) + ex4*(dd_real(674.) - dd_real(349.)*ex6) - dd_real(24.)*(dd_real(17.) - dd_real(26.)*ex6 + dd_real(9.)*pow(ex6,2))));
return res;
}
