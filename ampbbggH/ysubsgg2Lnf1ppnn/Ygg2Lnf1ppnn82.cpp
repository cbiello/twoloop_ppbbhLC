#include <iostream>
#include "listYgg2Lnf1ppnn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1ppnn82(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,4)*ex3*(dd_real(3.)*ex4 + ex3*(dd_real(6.) + dd_real(6.)*ex4 - dd_real(6.)*ex6)) + pow(ex4,2)*(dd_real(6.) + dd_real(6.)*ex4 + ex3*(dd_real(12.) + dd_real(12.)*ex4 - dd_real(12.)*ex6) + pow(ex3,2)*(dd_real(6.) + dd_real(6.)*ex4 - dd_real(6.)*ex6) - dd_real(6.)*ex6) + ex2*ex4*(ex4*(dd_real(10.) + dd_real(13.)*ex4 - dd_real(13.)*ex6) + ex3*(-dd_real(12.) + dd_real(25.)*pow(ex4,2) + ex4*(dd_real(10.) - dd_real(25.)*ex6) + dd_real(12.)*ex6) + pow(ex3,2)*(-dd_real(12.) + dd_real(12.)*pow(ex4,2) + dd_real(12.)*ex6 - dd_real(12.)*ex4*ex6)) + pow(ex2,3)*(-dd_real(4.)*pow(ex4,2) + ex3*ex4*(-dd_real(7.) - dd_real(16.)*ex4 + dd_real(13.)*ex6) + pow(ex3,2)*(dd_real(12.) - dd_real(12.)*pow(ex4,2) - dd_real(12.)*ex6 + dd_real(12.)*ex4*ex6)) + pow(ex2,2)*(pow(ex4,2)*(dd_real(1.) + dd_real(8.)*ex4 - dd_real(8.)*ex6) + ex3*ex4*(-dd_real(22.) + dd_real(13.)*pow(ex4,2) + ex4*(-dd_real(18.) - dd_real(13.)*ex6) + dd_real(25.)*ex6) + pow(ex3,2)*(dd_real(6.) + dd_real(6.)*pow(ex4,3) + pow(ex4,2)*(-dd_real(18.) - dd_real(6.)*ex6) - dd_real(6.)*ex6 + ex4*(-dd_real(18.) + dd_real(24.)*ex6)));
return res;
}
