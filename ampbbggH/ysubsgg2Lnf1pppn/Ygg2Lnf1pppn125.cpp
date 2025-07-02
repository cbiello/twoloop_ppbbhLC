#include <iostream>
#include "listYgg2Lnf1pppn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppn125(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,7)*pow(ex3,4) + dd_real(12.)*pow(dd_real(1.) + ex3,3)*pow(ex4,4) + dd_real(6.)*ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,3)*(dd_real(6.)*ex3*(-dd_real(1.) + ex4) + dd_real(5.)*ex4) + pow(ex2,6)*pow(ex3,3)*(ex3 - dd_real(15.)*ex4 - dd_real(4.)*ex3*ex4) + pow(ex2,5)*pow(ex3,2)*ex4*(dd_real(33.)*ex4 + pow(ex3,2)*(-dd_real(4.) + dd_real(6.)*ex4) + dd_real(5.)*ex3*(-dd_real(8.) + dd_real(9.)*ex4)) + pow(ex2,2)*(dd_real(1.) + ex3)*pow(ex4,2)*(dd_real(20.)*pow(ex4,2) + pow(ex3,3)*pow(ex4,2) + dd_real(3.)*ex3*ex4*(-dd_real(32.) + dd_real(21.)*ex4) + dd_real(3.)*pow(ex3,2)*(dd_real(12.) - dd_real(36.)*ex4 + dd_real(13.)*pow(ex4,2))) - dd_real(1.)*pow(ex2,4)*ex3*ex4*(dd_real(20.)*pow(ex4,2) + dd_real(2.)*pow(ex3,3)*ex4*(-dd_real(3.) + dd_real(2.)*ex4) + dd_real(6.)*ex3*ex4*(-dd_real(17.) + dd_real(11.)*ex4) + dd_real(3.)*pow(ex3,2)*(dd_real(12.) - dd_real(40.)*ex4 + dd_real(15.)*pow(ex4,2))) + pow(ex2,3)*ex4*(pow(ex3,4)*(-dd_real(4.) + ex4)*pow(ex4,2) + dd_real(3.)*pow(ex4,3) + ex3*pow(ex4,2)*(-dd_real(83.) + dd_real(20.)*ex4) + dd_real(3.)*pow(ex3,2)*ex4*(dd_real(34.) - dd_real(68.)*ex4 + dd_real(11.)*pow(ex4,2)) + dd_real(3.)*pow(ex3,3)*(-dd_real(4.) + dd_real(36.)*ex4 - dd_real(40.)*pow(ex4,2) + dd_real(5.)*pow(ex4,3)));
return res;
}
