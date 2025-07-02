#include <iostream>
#include "listYgg2Lnf1ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf1ppnp110(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,2)*(pow(ex4,2) + dd_real(3.)*ex3*ex4*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2)) + pow(ex4,2)*pow(ex4 + ex3*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(1.)*ex6,2) - dd_real(1.)*ex2*ex4*(dd_real(2.)*ex4*(ex4 - dd_real(1.)*ex6) + dd_real(2.)*pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) + ex3*(dd_real(5.)*pow(ex4,2) + ex4*(dd_real(5.) - dd_real(7.)*ex6) + dd_real(2.)*(-dd_real(1.) + ex6)*ex6));
return res;
}
