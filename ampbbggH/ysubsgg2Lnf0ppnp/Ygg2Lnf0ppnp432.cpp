#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp432(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(22.) + dd_real(35.)*ex3 + dd_real(13.)*pow(ex3,2) + pow(ex2,2)*(dd_real(24.) + dd_real(36.)*ex3 + dd_real(13.)*pow(ex3,2)) + ex2*(dd_real(42.) + dd_real(71.)*ex3 + dd_real(26.)*pow(ex3,2));
return res;
}
