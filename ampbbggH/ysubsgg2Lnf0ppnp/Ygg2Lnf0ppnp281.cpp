#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp281(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(4.)*pow(ex2,3) - dd_real(3.)*ex4*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + pow(ex2,2)*(dd_real(9.) + ex4 - dd_real(1.)*ex6) + ex2*(dd_real(18.) + dd_real(10.)*pow(ex4,2) + ex4*(dd_real(24.) - dd_real(23.)*ex6) - dd_real(27.)*ex6 + dd_real(13.)*pow(ex6,2));
return res;
}
