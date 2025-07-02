#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp90(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(2.)*pow(ex2,2)*(-dd_real(1.) + ex6) - dd_real(1.)*ex4*(dd_real(1.) + dd_real(3.)*pow(ex4,2) - dd_real(6.)*ex4*(-dd_real(1.) + ex6) - dd_real(6.)*ex6 + dd_real(3.)*pow(ex6,2)) + ex2*(dd_real(1.) + dd_real(3.)*pow(ex4,2) + ex4*(dd_real(8.) - dd_real(6.)*ex6) - dd_real(4.)*ex6 + dd_real(3.)*pow(ex6,2));
return res;
}
