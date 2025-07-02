#include <iostream>
#include "listYgg2Lnf1ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf1ppnp112(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,6)*pow(ex3,2)*(-dd_real(7.) + dd_real(64.)*ex3 + dd_real(53.)*pow(ex3,2)) + pow(dd_real(1.) + ex3,3)*(-dd_real(7.) + dd_real(65.)*ex3)*pow(ex4,2) - dd_real(2.)*pow(ex2,5)*pow(ex3,2)*(dd_real(11.) + dd_real(55.)*ex3*(-dd_real(2.) + ex4) - dd_real(4.)*ex4 + pow(ex3,2)*(-dd_real(112.) + dd_real(53.)*ex4)) + dd_real(2.)*ex2*pow(dd_real(1.) + ex3,2)*ex4*(-dd_real(13.)*ex4 + ex3*(dd_real(7.) + dd_real(39.)*ex4) + pow(ex3,2)*(-dd_real(65.) + dd_real(124.)*ex4)) + pow(ex2,4)*ex3*(dd_real(1.) + ex3)*(dd_real(8.)*ex4 - dd_real(1.)*ex3*(dd_real(48.) + dd_real(62.)*ex4 + dd_real(7.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(354.) - dd_real(448.)*ex4 + dd_real(53.)*pow(ex4,2))) + dd_real(2.)*pow(ex2,3)*ex3*(dd_real(1.) + ex3)*((dd_real(24.) - dd_real(7.)*ex4)*ex4 + ex3*(-dd_real(20.) - dd_real(114.)*ex4 + dd_real(33.)*pow(ex4,2)) + dd_real(2.)*pow(ex3,2)*(dd_real(62.) - dd_real(177.)*ex4 + dd_real(56.)*pow(ex4,2))) + pow(ex2,2)*(dd_real(1.) + ex3)*(ex3*(dd_real(66.) - dd_real(13.)*ex4)*ex4 - dd_real(7.)*pow(ex4,2) + pow(ex3,2)*(-dd_real(7.) - dd_real(286.)*ex4 + dd_real(276.)*pow(ex4,2)) + pow(ex3,3)*(dd_real(65.) - dd_real(496.)*ex4 + dd_real(354.)*pow(ex4,2)));
return res;
}
