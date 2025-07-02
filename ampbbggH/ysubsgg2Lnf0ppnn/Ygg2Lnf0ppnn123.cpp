#include <iostream>
#include "listYgg2Lnf0ppnn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnn123(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(69.)*pow(ex2,4)*pow(ex3,2) + ex2*(dd_real(1.) + ex3)*(dd_real(138.)*ex3*(-dd_real(1.) + ex4) - dd_real(91.)*ex4)*ex4 + dd_real(69.)*pow(dd_real(1.) + ex3,2)*pow(ex4,2) + pow(ex2,3)*ex3*(-dd_real(138.)*ex3*(-dd_real(1.) + ex4) + dd_real(91.)*ex4) + pow(ex2,2)*(dd_real(20.)*pow(ex4,2) - dd_real(1.)*ex3*ex4*(dd_real(47.) + dd_real(91.)*ex4) + dd_real(69.)*pow(ex3,2)*(dd_real(1.) - dd_real(4.)*ex4 + pow(ex4,2)));
return res;
}
