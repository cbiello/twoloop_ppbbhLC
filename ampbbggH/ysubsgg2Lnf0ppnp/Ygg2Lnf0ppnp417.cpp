#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp417(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(6.)*pow(ex2,5)*pow(ex3,2) + dd_real(6.)*pow(ex2,4)*ex3*(dd_real(4.) + dd_real(7.)*ex3) - dd_real(1.)*pow(dd_real(1.) + ex3,2)*(dd_real(66.) + dd_real(13.)*ex3) - dd_real(1.)*pow(ex2,3)*(dd_real(44.) + dd_real(40.)*ex3 - dd_real(10.)*pow(ex3,2) + dd_real(13.)*pow(ex3,3)) - dd_real(3.)*pow(ex2,2)*(dd_real(52.) + dd_real(98.)*ex3 + dd_real(58.)*pow(ex3,2) + dd_real(13.)*pow(ex3,3)) - dd_real(3.)*ex2*(dd_real(58.) + dd_real(125.)*ex3 + dd_real(80.)*pow(ex3,2) + dd_real(13.)*pow(ex3,3));
return res;
}
