#include <iostream>
#include "listYgg2Lnf0ppnn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnn36(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(1.)*(dd_real(1.) + ex3)*pow(ex4,2) + pow(ex2,3)*ex3*(dd_real(9.) + dd_real(10.)*ex4 - dd_real(9.)*ex6) - dd_real(1.)*ex2*(dd_real(1.) + ex3)*ex4*(dd_real(8.) + dd_real(11.)*ex4 - dd_real(9.)*ex6) + pow(ex2,2)*(dd_real(9.) - dd_real(1.)*ex4*(-dd_real(11.) + ex6) - dd_real(9.)*ex6 + ex3*(dd_real(9.) - dd_real(10.)*pow(ex4,2) - dd_real(9.)*ex6 + ex4*(dd_real(2.) + dd_real(9.)*ex6)));
return res;
}
