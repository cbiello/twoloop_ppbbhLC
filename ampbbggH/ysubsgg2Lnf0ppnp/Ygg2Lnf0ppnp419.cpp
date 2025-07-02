#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp419(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(44.)*pow(dd_real(1.) + ex3,2)*pow(ex4,4) + pow(ex2,6)*pow(ex3,2)*(dd_real(9.)*pow(ex4,2) - dd_real(9.)*ex4*(-dd_real(1.) + ex6) + dd_real(44.)*pow(-dd_real(1.) + ex6,2)) + ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,3)*(-dd_real(167.) + dd_real(97.)*ex4 + dd_real(79.)*ex6) + pow(ex2,2)*(dd_real(1.) + ex3)*pow(ex4,2)*(dd_real(246.) + dd_real(62.)*pow(ex4,2) - dd_real(246.)*ex6 + dd_real(44.)*pow(ex6,2) + dd_real(2.)*ex4*(-dd_real(132.) + dd_real(79.)*ex6) + ex3*(dd_real(246.) + dd_real(71.)*pow(ex4,2) - dd_real(246.)*ex6 + dd_real(44.)*pow(ex6,2) + ex4*(-dd_real(343.) + dd_real(149.)*ex6))) + pow(ex2,5)*ex3*(-dd_real(9.)*pow(ex4,2)*(-dd_real(3.) + ex6) + dd_real(88.)*pow(-dd_real(1.) + ex6,2) + ex4*(-dd_real(61.) + dd_real(140.)*ex6 - dd_real(79.)*pow(ex6,2)) + ex3*(-dd_real(18.)*pow(ex4,3) + dd_real(88.)*pow(-dd_real(1.) + ex6,2) + dd_real(9.)*pow(ex4,2)*(dd_real(1.) + dd_real(2.)*ex6) + ex4*(-dd_real(149.) + dd_real(237.)*ex6 - dd_real(88.)*pow(ex6,2)))) + pow(ex2,4)*(dd_real(44.)*pow(-dd_real(1.) + ex6,2) + ex4*(-dd_real(70.) + dd_real(149.)*ex6 - dd_real(79.)*pow(ex6,2)) + pow(ex4,2)*(dd_real(62.) - dd_real(97.)*ex6 + dd_real(44.)*pow(ex6,2)) + pow(ex3,2)*(dd_real(9.)*pow(ex4,4) + dd_real(44.)*pow(-dd_real(1.) + ex6,2) - dd_real(9.)*pow(ex4,3)*(dd_real(5.) + ex6) + ex4*(-dd_real(325.) + dd_real(501.)*ex6 - dd_real(176.)*pow(ex6,2)) + pow(ex4,2)*(dd_real(237.) - dd_real(210.)*ex6 + dd_real(44.)*pow(ex6,2))) + ex3*(dd_real(9.)*pow(ex4,3)*(-dd_real(6.) + ex6) + dd_real(88.)*pow(-dd_real(1.) + ex6,2) - dd_real(5.)*ex4*(dd_real(79.) - dd_real(130.)*ex6 + dd_real(51.)*pow(ex6,2)) + pow(ex4,2)*(dd_real(255.) - dd_real(298.)*ex6 + dd_real(79.)*pow(ex6,2)))) + pow(ex2,3)*(dd_real(1.) + ex3)*ex4*(-dd_real(167.) + dd_real(255.)*ex6 - dd_real(88.)*pow(ex6,2) + pow(ex4,2)*(-dd_real(124.) + dd_real(97.)*ex6) + ex4*(dd_real(237.) - dd_real(307.)*ex6 + dd_real(79.)*pow(ex6,2)) + ex3*(-dd_real(167.) + dd_real(27.)*pow(ex4,3) + dd_real(255.)*ex6 - dd_real(88.)*pow(ex6,2) + pow(ex4,2)*(-dd_real(203.) + dd_real(61.)*ex6) + ex4*(dd_real(483.) - dd_real(474.)*ex6 + dd_real(88.)*pow(ex6,2))));
return res;
}
