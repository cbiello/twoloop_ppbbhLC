#include <iostream>
#include "listYgg2Lnf1pppn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppn128(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(14.)*pow(ex2,6)*pow(ex3,3) - dd_real(16.)*pow(dd_real(1.) + ex3,3)*pow(ex4,3) - dd_real(3.)*pow(ex2,5)*pow(ex3,2)*(dd_real(16.)*ex4 + ex3*(-dd_real(15.) + dd_real(14.)*ex4)) - dd_real(3.)*ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(17.)*ex4 + ex3*(-dd_real(16.) + dd_real(15.)*ex4)) + dd_real(3.)*pow(ex2,4)*ex3*(dd_real(16.)*pow(ex4,2) + ex3*ex4*(-dd_real(49.) + dd_real(32.)*ex4) + pow(ex3,2)*(dd_real(15.) - dd_real(45.)*ex4 + dd_real(14.)*pow(ex4,2))) - dd_real(3.)*pow(ex2,2)*(dd_real(1.) + ex3)*ex4*(dd_real(17.)*pow(ex4,2) + ex3*ex4*(-dd_real(49.) + dd_real(34.)*ex4) + pow(ex3,2)*(dd_real(16.) - dd_real(45.)*ex4 + dd_real(15.)*pow(ex4,2))) - dd_real(1.)*pow(ex2,3)*(dd_real(18.)*pow(ex4,3) + dd_real(3.)*ex3*pow(ex4,2)*(-dd_real(51.) + dd_real(16.)*ex4) + dd_real(3.)*pow(ex3,2)*ex4*(dd_real(47.) - dd_real(98.)*ex4 + dd_real(16.)*pow(ex4,2)) + pow(ex3,3)*(-dd_real(16.) + dd_real(135.)*ex4 - dd_real(135.)*pow(ex4,2) + dd_real(14.)*pow(ex4,3)));
return res;
}
