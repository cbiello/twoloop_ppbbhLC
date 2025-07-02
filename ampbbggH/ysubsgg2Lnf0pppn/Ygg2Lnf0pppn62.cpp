#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn62(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(11.)*pow(ex2,4)*pow(ex3,2) + pow(ex2,3)*ex3*(ex3*(dd_real(21.) - dd_real(22.)*ex4) - dd_real(21.)*ex4) + dd_real(12.)*pow(dd_real(1.) + ex3,2)*pow(ex4,2) + dd_real(3.)*ex2*(dd_real(1.) + ex3)*ex4*(dd_real(6.)*ex4 + ex3*(-dd_real(8.) + dd_real(7.)*ex4)) + pow(ex2,2)*(dd_real(12.)*pow(ex4,2) + dd_real(3.)*ex3*ex4*(-dd_real(13.) + dd_real(7.)*ex4) + pow(ex3,2)*(dd_real(12.) - dd_real(42.)*ex4 + dd_real(11.)*pow(ex4,2)));
return res;
}
