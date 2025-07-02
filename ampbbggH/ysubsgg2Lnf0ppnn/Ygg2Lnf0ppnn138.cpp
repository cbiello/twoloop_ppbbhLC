#include <iostream>
#include "listYgg2Lnf0ppnn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnn138(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,3)*ex3*(ex3*(dd_real(4.)*pow(ex4,2) - dd_real(5.)*ex4*(-dd_real(1.) + ex6) + pow(-dd_real(1.) + ex6,2)) + ex4*(dd_real(2.) + dd_real(3.)*ex4 - dd_real(2.)*ex6) + pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2))*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(1.)*pow(dd_real(1.) + ex3,3)*pow(ex4,3)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,3) - dd_real(1.)*pow(ex2,2)*ex4*(dd_real(1.) + ex4 - dd_real(1.)*ex6)*(pow(ex3,2)*(dd_real(11.)*pow(ex4,2) - dd_real(16.)*ex4*(-dd_real(1.) + ex6) + dd_real(5.)*pow(-dd_real(1.) + ex6,2)) + dd_real(3.)*pow(ex3,3)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) + ex4*(dd_real(2.) + ex4 - dd_real(1.)*ex6) + ex3*(dd_real(9.)*pow(ex4,2) + dd_real(2.)*pow(-dd_real(1.) + ex6,2) - dd_real(2.)*ex4*(-dd_real(6.) + dd_real(5.)*ex6))) + ex2*pow(ex4,2)*(dd_real(1.) + dd_real(6.)*ex4 + dd_real(6.)*pow(ex4,2) + dd_real(2.)*pow(ex4,3) + pow(ex3,2)*(dd_real(7.) + dd_real(10.)*ex4 - dd_real(7.)*ex6)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) + dd_real(3.)*pow(ex3,3)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,3) - dd_real(3.)*ex6 - dd_real(9.)*ex4*ex6 - dd_real(5.)*pow(ex4,2)*ex6 + dd_real(3.)*pow(ex6,2) + dd_real(4.)*ex4*pow(ex6,2) - dd_real(1.)*pow(ex6,3) + ex3*(dd_real(9.)*pow(ex4,3) + pow(ex4,2)*(dd_real(25.) - dd_real(23.)*ex6) - dd_real(5.)*pow(-dd_real(1.) + ex6,3) + ex4*(dd_real(21.) - dd_real(40.)*ex6 + dd_real(19.)*pow(ex6,2))));
return res;
}
