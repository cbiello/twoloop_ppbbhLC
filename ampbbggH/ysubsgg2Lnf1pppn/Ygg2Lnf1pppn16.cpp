#include <iostream>
#include "listYgg2Lnf1pppn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppn16(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(110.)*pow(ex2,2)*ex3 - dd_real(1.)*(dd_real(1.) + ex3)*ex4*(dd_real(111.) + ex4 - dd_real(1.)*ex6) - dd_real(1.)*ex2*(-dd_real(111.) + dd_real(110.)*ex4 + ex6 + ex3*(-dd_real(111.) + dd_real(109.)*ex4 + ex6));
return res;
}
