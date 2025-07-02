#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp148(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(8.)*pow(ex4 - dd_real(1.)*ex6,2) + dd_real(3.)*ex3*(dd_real(26.) + dd_real(15.)*pow(ex4,3) + pow(ex4,2)*(dd_real(67.) - dd_real(45.)*ex6) - dd_real(78.)*ex6 + dd_real(67.)*pow(ex6,2) - dd_real(15.)*pow(ex6,3) + ex4*(dd_real(78.) - dd_real(134.)*ex6 + dd_real(45.)*pow(ex6,2)));
return res;
}
