#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp49(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(595.)*pow(ex2,6)*pow(ex3,3) - dd_real(595.)*pow(dd_real(1.) + ex3,3)*pow(ex4,3) - dd_real(15.)*pow(ex2,5)*pow(ex3,2)*(dd_real(119.)*ex3*(-dd_real(1.) + ex4) + dd_real(120.)*ex4) - dd_real(15.)*ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(119.)*ex3*(-dd_real(1.) + ex4) + dd_real(120.)*ex4) + dd_real(3.)*pow(ex2,4)*ex3*(dd_real(396.)*pow(ex4,2) + dd_real(5.)*ex3*ex4*(-dd_real(359.) + dd_real(240.)*ex4) + dd_real(595.)*pow(ex3,2)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2))) - dd_real(3.)*pow(ex2,2)*(dd_real(1.) + ex3)*ex4*(dd_real(396.)*pow(ex4,2) + dd_real(5.)*ex3*ex4*(-dd_real(359.) + dd_real(240.)*ex4) + dd_real(595.)*pow(ex3,2)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2))) - dd_real(1.)*pow(ex2,3)*(dd_real(548.)*pow(ex4,3) + dd_real(36.)*ex3*pow(ex4,2)*(-dd_real(133.) + dd_real(33.)*ex4) + dd_real(30.)*pow(ex3,2)*ex4*(dd_real(179.) - dd_real(359.)*ex4 + dd_real(60.)*pow(ex4,2)) + dd_real(595.)*pow(ex3,3)*(-dd_real(1.) + dd_real(9.)*ex4 - dd_real(9.)*pow(ex4,2) + pow(ex4,3)));
return res;
}
