#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp319(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(9.)*pow(ex2,5)*pow(ex3,2) + dd_real(14.)*pow(dd_real(1.) + ex3,2) + dd_real(9.)*pow(ex2,4)*ex3*(dd_real(4.) + dd_real(7.)*ex3) + dd_real(3.)*pow(ex2,2)*ex3*(dd_real(41.) + dd_real(45.)*ex3) + dd_real(6.)*ex2*(dd_real(3.) + dd_real(14.)*ex3 + dd_real(11.)*pow(ex3,2)) + pow(ex2,3)*(-dd_real(8.) + dd_real(103.)*ex3 + dd_real(137.)*pow(ex3,2));
return res;
}
