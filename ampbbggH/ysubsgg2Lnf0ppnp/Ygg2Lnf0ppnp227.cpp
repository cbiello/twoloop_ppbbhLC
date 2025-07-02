#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp227(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(91.)*pow(dd_real(1.) + ex3,3)*pow(ex4,4) - dd_real(1.)*pow(ex2,5)*pow(ex3,2)*(dd_real(2.)*ex4*(dd_real(18.)*ex4 - dd_real(121.)*(-dd_real(1.) + ex6)) + ex3*(dd_real(54.)*pow(ex4,2) + ex4*(dd_real(382.) - dd_real(327.)*ex6) + dd_real(218.)*(-dd_real(1.) + ex6))) + pow(ex2,6)*pow(ex3,3)*(dd_real(18.)*ex4 - dd_real(109.)*(-dd_real(1.) + ex6)) + ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,3)*(dd_real(206.)*ex4 + ex3*(-dd_real(382.) + dd_real(164.)*ex4 + dd_real(109.)*ex6)) + pow(ex2,2)*(dd_real(1.) + ex3)*pow(ex4,2)*(dd_real(91.)*pow(ex4,2) + pow(ex3,2)*(dd_real(600.) + dd_real(55.)*pow(ex4,2) - dd_real(327.)*ex6 + ex4*(-dd_real(710.) + dd_real(218.)*ex6)) + ex3*(dd_real(170.)*pow(ex4,2) - dd_real(109.)*(-dd_real(1.) + ex6) + ex4*(-dd_real(818.) + dd_real(242.)*ex6))) - dd_real(1.)*pow(ex2,3)*ex3*ex4*(ex4*(dd_real(18.)*pow(ex4,2) + ex4*(dd_real(370.) - dd_real(109.)*ex6) + dd_real(242.)*(-dd_real(1.) + ex6)) + pow(ex3,2)*(dd_real(418.) + dd_real(18.)*pow(ex4,3) + pow(ex4,2)*(dd_real(274.) - dd_real(109.)*ex6) - dd_real(327.)*ex6 + dd_real(6.)*ex4*(-dd_real(191.) + dd_real(109.)*ex6)) + dd_real(2.)*ex3*(dd_real(18.)*pow(ex4,3) + pow(ex4,2)*(dd_real(346.) - dd_real(121.)*ex6) - dd_real(109.)*(-dd_real(1.) + ex6) + ex4*(-dd_real(727.) + dd_real(460.)*ex6))) + pow(ex2,4)*ex3*(pow(ex4,2)*(dd_real(18.)*ex4 - dd_real(109.)*(-dd_real(1.) + ex6)) + ex3*ex4*(dd_real(72.)*pow(ex4,2) + ex4*(dd_real(709.) - dd_real(484.)*ex6) + dd_real(460.)*(-dd_real(1.) + ex6)) + pow(ex3,2)*(dd_real(54.)*pow(ex4,3) + pow(ex4,2)*(dd_real(492.) - dd_real(327.)*ex6) - dd_real(109.)*(-dd_real(1.) + ex6) + ex4*(-dd_real(818.) + dd_real(654.)*ex6)));
return res;
}
