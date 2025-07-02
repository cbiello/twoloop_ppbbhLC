#include <iostream>
#include "listYgg2Lnf1ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf1ppnp147(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(2.)*(-dd_real(2.) - dd_real(27.)*ex3 - dd_real(24.)*pow(ex3,2) + pow(ex3,3)) + dd_real(3.)*ex2*(-dd_real(1.) - dd_real(48.)*ex3 - dd_real(45.)*pow(ex3,2) + dd_real(2.)*pow(ex3,3)) + dd_real(3.)*pow(ex2,2)*(-dd_real(1.) - dd_real(45.)*ex3 - dd_real(42.)*pow(ex3,2) + dd_real(2.)*pow(ex3,3)) + pow(ex2,3)*(dd_real(2.) - dd_real(45.)*ex3 - dd_real(39.)*pow(ex3,2) + dd_real(2.)*pow(ex3,3));
return res;
}
