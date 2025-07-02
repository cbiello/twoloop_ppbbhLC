#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn256(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,5)*pow(ex3,3) + dd_real(120.)*pow(dd_real(1.) + ex3,2)*pow(ex4,3) - dd_real(3.)*pow(ex2,4)*pow(ex3,2)*(-dd_real(36.)*ex4 + ex3*(dd_real(1.) + ex4)) + ex2*(dd_real(1.) + ex3)*pow(ex4,2)*(dd_real(86.)*ex4 + dd_real(3.)*pow(ex3,2)*ex4 + dd_real(6.)*ex3*(-dd_real(40.) + dd_real(39.)*ex4)) + pow(ex2,3)*ex3*ex4*(-dd_real(62.)*ex4 + dd_real(3.)*pow(ex3,2)*(dd_real(3.) + ex4) - dd_real(3.)*ex3*(-dd_real(79.) + dd_real(72.)*ex4)) - dd_real(1.)*pow(ex2,2)*ex4*(dd_real(2.)*ex3*(dd_real(160.) - dd_real(31.)*ex4)*ex4 + dd_real(34.)*pow(ex4,2) + pow(ex3,3)*ex4*(dd_real(9.) + ex4) - dd_real(6.)*pow(ex3,2)*(dd_real(20.) - dd_real(79.)*ex4 + dd_real(18.)*pow(ex4,2)));
return res;
}
