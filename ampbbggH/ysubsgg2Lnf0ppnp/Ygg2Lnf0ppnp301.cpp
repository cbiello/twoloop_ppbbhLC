#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp301(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(6.)*ex4*(dd_real(2.) + dd_real(3.)*ex4 - dd_real(3.)*ex6) + ex2*(-dd_real(12.) + dd_real(39.)*pow(ex4,2) + ex4*(dd_real(15.) - dd_real(34.)*ex6) + dd_real(17.)*ex6 - dd_real(5.)*pow(ex6,2)) + pow(ex2,2)*(-dd_real(33.) + dd_real(59.)*ex6 - dd_real(26.)*pow(ex6,2) + dd_real(13.)*ex4*(-dd_real(3.) + dd_real(2.)*ex6));
return res;
}
