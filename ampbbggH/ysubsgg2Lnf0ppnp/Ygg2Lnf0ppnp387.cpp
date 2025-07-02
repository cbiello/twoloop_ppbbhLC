#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp387(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(6.)*pow(ex2,5)*pow(ex3,2) + dd_real(6.)*pow(ex2,4)*ex3*(dd_real(4.) + dd_real(7.)*ex3) - dd_real(1.)*pow(dd_real(1.) + ex3,2)*(dd_real(22.) + dd_real(13.)*ex3) + pow(ex2,2)*(dd_real(60.) + dd_real(108.)*ex3 + dd_real(6.)*pow(ex3,2) - dd_real(39.)*pow(ex3,3)) + pow(ex2,3)*(dd_real(44.) + dd_real(114.)*ex3 + dd_real(78.)*pow(ex3,2) - dd_real(13.)*pow(ex3,3)) - dd_real(3.)*ex2*(-dd_real(2.) + dd_real(13.)*ex3 + dd_real(28.)*pow(ex3,2) + dd_real(13.)*pow(ex3,3));
return res;
}
