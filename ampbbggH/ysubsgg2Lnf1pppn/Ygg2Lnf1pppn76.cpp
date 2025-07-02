#include <iostream>
#include "listYgg2Lnf1pppn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppn76(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,3)*pow(ex3,2) + (dd_real(1.) + ex3)*ex4*((dd_real(1.) + ex3)*ex4 - dd_real(1.)*ex3*ex6) + pow(ex2,2)*ex3*(-dd_real(1.)*ex4 + ex3*(dd_real(1.) - dd_real(2.)*ex4 + ex6)) + ex2*ex3*((dd_real(2.) + ex3)*pow(ex4,2) + ex3*ex6 - dd_real(1.)*ex4*(dd_real(1.) + ex6 + ex3*(dd_real(2.) + ex6)));
return res;
}
