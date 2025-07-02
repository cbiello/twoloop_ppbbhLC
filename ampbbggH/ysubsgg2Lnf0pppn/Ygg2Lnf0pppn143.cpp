#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn143(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(45.)*pow(ex2,7)*pow(ex3,3) + dd_real(360.)*pow(dd_real(1.) + ex3,2)*pow(ex4,3) - dd_real(45.)*pow(ex2,6)*pow(ex3,2)*(dd_real(3.)*ex3*(-dd_real(1.) + ex4) + ex4) - dd_real(2.)*ex2*(dd_real(1.) + ex3)*pow(ex4,2)*(ex3*(dd_real(360.) - dd_real(408.)*ex4) - dd_real(155.)*ex4 + dd_real(24.)*pow(ex3,2)*ex4) - dd_real(1.)*pow(ex2,3)*ex3*ex4*(dd_real(2.)*(dd_real(257.) - dd_real(45.)*ex4)*ex4 + dd_real(3.)*pow(ex3,2)*(dd_real(48.) - dd_real(134.)*ex4 + dd_real(45.)*pow(ex4,2)) + ex3*(-dd_real(768.) + dd_real(834.)*ex4 + dd_real(45.)*pow(ex4,2))) + pow(ex2,5)*pow(ex3,2)*(dd_real(45.)*ex4*(-dd_real(1.) + dd_real(2.)*ex4) + ex3*(dd_real(134.) - dd_real(405.)*ex4 + dd_real(135.)*pow(ex4,2))) + pow(ex2,2)*ex4*(-dd_real(153.)*pow(ex4,2) - dd_real(2.)*pow(ex3,3)*ex4*(-dd_real(72.) + dd_real(67.)*ex4) + dd_real(2.)*ex3*ex4*(-dd_real(563.) + dd_real(257.)*ex4) + dd_real(3.)*pow(ex3,2)*(dd_real(120.) - dd_real(512.)*ex4 + dd_real(139.)*pow(ex4,2))) + dd_real(3.)*pow(ex2,4)*ex3*(-dd_real(30.)*pow(ex4,2) + ex3*ex4*(dd_real(139.) + dd_real(30.)*ex4 - dd_real(15.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(16.) - dd_real(134.)*ex4 + dd_real(135.)*pow(ex4,2) - dd_real(15.)*pow(ex4,3)));
return res;
}
