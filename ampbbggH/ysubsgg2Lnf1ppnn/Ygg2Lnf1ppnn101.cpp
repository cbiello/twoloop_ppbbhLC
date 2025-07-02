#include <iostream>
#include "listYgg2Lnf1ppnn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1ppnn101(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(3.)*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(-dd_real(2.)*pow(ex4,2) + pow(ex3,2)*(dd_real(53.)*pow(ex4,2) - dd_real(96.)*ex4*(-dd_real(1.) + ex6) + dd_real(48.)*pow(-dd_real(1.) + ex6,2))) + pow(ex2,4)*pow(ex3,2)*(dd_real(20.)*pow(ex4,2) + dd_real(3.)*pow(ex3,2)*(dd_real(53.)*pow(ex4,2) - dd_real(96.)*ex4*(-dd_real(1.) + ex6) + dd_real(48.)*pow(-dd_real(1.) + ex6,2)) + dd_real(24.)*ex3*ex4*(dd_real(3.) + dd_real(4.)*ex4 - dd_real(3.)*ex6)) - dd_real(2.)*pow(ex2,3)*pow(ex3,2)*(dd_real(3.)*pow(ex3,2)*(-dd_real(1.) + ex4)*(dd_real(53.)*pow(ex4,2) - dd_real(96.)*ex4*(-dd_real(1.) + ex6) + dd_real(48.)*pow(-dd_real(1.) + ex6,2)) + pow(ex4,2)*(dd_real(25.) + dd_real(54.)*ex4 - dd_real(45.)*ex6) + dd_real(3.)*ex3*ex4*(dd_real(69.)*pow(ex4,2) + ex4*(dd_real(76.) - dd_real(108.)*ex6) + dd_real(24.)*(dd_real(1.) - dd_real(3.)*ex6 + dd_real(2.)*pow(ex6,2)))) + dd_real(6.)*ex2*ex3*(dd_real(1.) + ex3)*ex4*(pow(ex4,2) - dd_real(2.)*pow(ex4,3) + pow(ex3,2)*(-dd_real(1.) + ex4)*(dd_real(53.)*pow(ex4,2) - dd_real(96.)*ex4*(-dd_real(1.) + ex6) + dd_real(48.)*pow(-dd_real(1.) + ex6,2)) + ex3*ex4*(dd_real(53.)*pow(ex4,2) + ex4*(dd_real(80.) - dd_real(96.)*ex6) + dd_real(12.)*(dd_real(3.) - dd_real(7.)*ex6 + dd_real(4.)*pow(ex6,2)))) + pow(ex2,2)*ex3*(dd_real(6.)*pow(ex4,3) + dd_real(3.)*pow(ex3,3)*(dd_real(1.) - dd_real(4.)*ex4 + pow(ex4,2))*(dd_real(53.)*pow(ex4,2) - dd_real(96.)*ex4*(-dd_real(1.) + ex6) + dd_real(48.)*pow(-dd_real(1.) + ex6,2)) + ex3*pow(ex4,2)*(dd_real(11.) + dd_real(162.)*pow(ex4,2) - dd_real(144.)*ex6 + dd_real(153.)*pow(ex6,2) - dd_real(18.)*ex4*(-dd_real(6.) + dd_real(17.)*ex6)) + dd_real(6.)*pow(ex3,2)*ex4*(dd_real(53.)*pow(ex4,3) - dd_real(6.)*pow(ex4,2)*(dd_real(7.) + dd_real(16.)*ex6) + dd_real(8.)*ex4*(-dd_real(19.) + dd_real(15.)*ex6 + dd_real(6.)*pow(ex6,2)) - dd_real(12.)*(dd_real(7.) - dd_real(15.)*ex6 + dd_real(8.)*pow(ex6,2))));
return res;
}
