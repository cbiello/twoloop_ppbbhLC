#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp225(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(9.)*pow(ex2,7)*pow(ex3,3) - dd_real(91.)*pow(dd_real(1.) + ex3,4)*pow(ex4,2) - dd_real(1.)*pow(ex2,6)*pow(ex3,2)*(dd_real(91.) + dd_real(94.)*pow(ex3,2) + ex3*(dd_real(149.) + dd_real(9.)*ex4)) + pow(ex2,5)*pow(ex3,2)*(-dd_real(358.) + dd_real(167.)*ex4 + pow(ex3,2)*(-dd_real(373.) + dd_real(188.)*ex4) + ex3*(-dd_real(704.) + dd_real(334.)*ex4)) - dd_real(1.)*ex2*pow(dd_real(1.) + ex3,3)*ex4*(dd_real(194.)*ex4 + ex3*(-dd_real(182.) + dd_real(367.)*ex4)) - dd_real(1.)*pow(ex2,4)*ex3*(dd_real(1.) + ex3)*(-dd_real(176.)*ex4 + ex3*(dd_real(552.) - dd_real(895.)*ex4 + dd_real(91.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(555.) - dd_real(746.)*ex4 + dd_real(94.)*pow(ex4,2))) - dd_real(1.)*pow(ex2,3)*ex3*(dd_real(1.) + ex3)*(dd_real(2.)*ex4*(-dd_real(276.) + dd_real(91.)*ex4) + dd_real(4.)*ex3*(dd_real(94.) - dd_real(420.)*ex4 + dd_real(141.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(367.) - dd_real(1110.)*ex4 + dd_real(373.)*pow(ex4,2))) - dd_real(1.)*pow(ex2,2)*pow(dd_real(1.) + ex3,2)*(dd_real(91.)*pow(ex4,2) + dd_real(3.)*ex3*ex4*(-dd_real(190.) + dd_real(191.)*ex4) + pow(ex3,2)*(dd_real(91.) - dd_real(734.)*ex4 + dd_real(555.)*pow(ex4,2)));
return res;
}
