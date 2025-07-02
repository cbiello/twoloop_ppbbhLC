#include <iostream>
#include "listYgg2Lnf1pppn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppn80(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(24.)*pow(ex2,6)*pow(ex3,3) + dd_real(24.)*pow(dd_real(1.) + ex3,3)*pow(ex4,3) + dd_real(9.)*pow(ex2,5)*pow(ex3,2)*(dd_real(8.)*ex3*(-dd_real(1.) + ex4) + dd_real(5.)*ex4) + dd_real(9.)*ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(8.)*ex3*(-dd_real(1.) + ex4) + dd_real(5.)*ex4) - dd_real(18.)*pow(ex2,4)*ex3*(pow(ex4,2) + ex3*ex4*(-dd_real(9.) + dd_real(5.)*ex4) + dd_real(4.)*pow(ex3,2)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2))) + dd_real(18.)*pow(ex2,2)*(dd_real(1.) + ex3)*ex4*(pow(ex4,2) + ex3*ex4*(-dd_real(9.) + dd_real(5.)*ex4) + dd_real(4.)*pow(ex3,2)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2))) + pow(ex2,3)*(dd_real(18.)*ex3*(-dd_real(6.) + ex4)*pow(ex4,2) + pow(ex4,3) + dd_real(9.)*pow(ex3,2)*ex4*(dd_real(21.) - dd_real(36.)*ex4 + dd_real(5.)*pow(ex4,2)) + dd_real(24.)*pow(ex3,3)*(-dd_real(1.) + dd_real(9.)*ex4 - dd_real(9.)*pow(ex4,2) + pow(ex4,3)));
return res;
}
