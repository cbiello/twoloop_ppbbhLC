#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp461(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,2)*(pow(ex4,2) - dd_real(1.)*ex4*(-dd_real(1.) + ex6) + pow(-dd_real(1.) + ex6,2)) - dd_real(1.)*ex2*ex4*(dd_real(2.) + dd_real(2.)*pow(ex4,2) + ex4*(dd_real(2.) - dd_real(3.)*ex6) - dd_real(3.)*ex6 + pow(ex6,2)) + pow(ex4,2)*(dd_real(1.) + ex4 + pow(ex4,2) - dd_real(1.)*ex6 - dd_real(2.)*ex4*ex6 + pow(ex6,2));
return res;
}
