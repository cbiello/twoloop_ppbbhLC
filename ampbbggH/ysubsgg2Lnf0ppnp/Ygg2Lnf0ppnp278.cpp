#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp278(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(3.)*pow(ex2,5)*pow(ex3,2) + dd_real(3.)*pow(ex2,4)*ex3*(dd_real(4.) + dd_real(7.)*ex3) - dd_real(4.)*ex3*(dd_real(67.) + dd_real(74.)*ex3 + dd_real(7.)*pow(ex3,2)) - dd_real(12.)*ex2*(-dd_real(6.) + dd_real(57.)*ex3 + dd_real(70.)*pow(ex3,2) + dd_real(7.)*pow(ex3,3)) - dd_real(1.)*pow(ex2,3)*(-dd_real(66.) + dd_real(133.)*ex3 + dd_real(215.)*pow(ex3,2) + dd_real(28.)*pow(ex3,3)) - dd_real(3.)*pow(ex2,2)*(-dd_real(42.) + dd_real(187.)*ex3 + dd_real(259.)*pow(ex3,2) + dd_real(28.)*pow(ex3,3));
return res;
}
