#include <iostream>
#include "listYgg2Lnf1pppp.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppp67(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(3.)*pow(ex2,3)*ex3 + dd_real(3.)*(dd_real(1.) + ex3)*pow(ex4,2) + ex2*ex4*(dd_real(6.)*ex4 + ex3*(-dd_real(6.) + dd_real(89.)*ex4 - dd_real(86.)*ex6) - dd_real(3.)*(dd_real(6.) + ex6)) + pow(ex2,2)*(-dd_real(97.)*ex4 + ex3*(dd_real(3.) - dd_real(152.)*ex4 + dd_real(86.)*ex6));
return res;
}
