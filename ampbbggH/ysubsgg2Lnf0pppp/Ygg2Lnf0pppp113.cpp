#include <iostream>
#include "listYgg2Lnf0pppp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppp113(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,3)*pow(ex3,2) - dd_real(1.)*pow(dd_real(1.) + ex3,2)*ex4 - dd_real(1.)*ex2*(dd_real(1.) + ex3)*(-dd_real(1.) + dd_real(4.)*ex4 + ex3*(-dd_real(1.) + dd_real(2.)*ex4)) + pow(ex2,2)*(dd_real(4.) - dd_real(1.)*pow(ex3,2)*(-dd_real(2.) + ex4) + ex3*(dd_real(6.) - dd_real(4.)*ex6) - dd_real(4.)*ex6);
return res;
}
