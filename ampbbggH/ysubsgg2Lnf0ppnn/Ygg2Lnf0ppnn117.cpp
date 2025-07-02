#include <iostream>
#include "listYgg2Lnf0ppnn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnn117(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(3.)*pow(ex2,4)*ex3*(ex4 + dd_real(2.)*ex3*(dd_real(1.) + ex4 - dd_real(1.)*ex6)) + ex2*(dd_real(1.) + ex3)*ex4*(ex4*(dd_real(10.) + dd_real(13.)*ex4 - dd_real(13.)*ex6) + dd_real(12.)*ex3*(-dd_real(1.) + ex4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6)) - dd_real(1.)*pow(ex2,3)*(dd_real(4.)*pow(ex4,2) + ex3*ex4*(dd_real(7.) + dd_real(16.)*ex4 - dd_real(13.)*ex6) + dd_real(12.)*pow(ex3,2)*(-dd_real(1.) + ex4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6)) + dd_real(6.)*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + pow(ex2,2)*(pow(ex4,2)*(dd_real(1.) + dd_real(8.)*ex4 - dd_real(8.)*ex6) + dd_real(6.)*pow(ex3,2)*(dd_real(1.) - dd_real(4.)*ex4 + pow(ex4,2))*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + ex3*ex4*(-dd_real(22.) + dd_real(13.)*pow(ex4,2) + dd_real(25.)*ex6 - dd_real(1.)*ex4*(dd_real(18.) + dd_real(13.)*ex6)));
return res;
}
