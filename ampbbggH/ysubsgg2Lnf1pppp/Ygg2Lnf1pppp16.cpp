#include <iostream>
#include "listYgg2Lnf1pppp.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppp16(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(111.)*pow(ex2,5)*pow(ex3,2) + dd_real(111.)*pow(dd_real(1.) + ex3,2)*pow(ex4,3) + pow(ex2,4)*ex3*(dd_real(553.)*ex4 + ex3*(-dd_real(222.) + dd_real(445.)*ex4 - dd_real(112.)*ex6)) + ex2*(dd_real(1.) + ex3)*pow(ex4,2)*(ex3*(-dd_real(333.) + dd_real(334.)*ex4 - dd_real(112.)*ex6) + dd_real(111.)*(-dd_real(2.) + dd_real(2.)*ex4 - dd_real(1.)*ex6)) + pow(ex2,2)*ex4*(-dd_real(553.)*ex4 + pow(ex3,2)*(dd_real(333.) + dd_real(223.)*pow(ex4,2) + dd_real(224.)*ex6 - dd_real(2.)*ex4*(dd_real(445.) + dd_real(56.)*ex6)) + ex3*(dd_real(333.) + dd_real(222.)*pow(ex4,2) + dd_real(223.)*ex6 - dd_real(1.)*ex4*(dd_real(1442.) + dd_real(111.)*ex6))) + pow(ex2,3)*(-dd_real(9.)*pow(ex4,2) + ex3*ex4*(dd_real(886.) - dd_real(775.)*ex4 + dd_real(111.)*ex6) + pow(ex3,2)*(-dd_real(111.) - dd_real(557.)*pow(ex4,2) - dd_real(112.)*ex6 + ex4*(dd_real(778.) + dd_real(224.)*ex6)));
return res;
}
