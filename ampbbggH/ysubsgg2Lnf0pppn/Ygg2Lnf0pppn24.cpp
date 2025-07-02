#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn24(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(1.)*pow(dd_real(1.) + ex3,3)*pow(ex4,3) + dd_real(10.)*pow(ex2,6)*pow(ex3,3)*(dd_real(1.) + ex4) + ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(1.) - dd_real(10.)*ex4 - dd_real(10.)*pow(ex4,2) + ex3*(dd_real(12.) + dd_real(7.)*ex4)) + pow(ex2,5)*pow(ex3,2)*(dd_real(1.) - dd_real(19.)*ex4 - dd_real(20.)*pow(ex4,2) + ex3*(dd_real(30.) + dd_real(9.)*ex4 - dd_real(20.)*pow(ex4,2))) + pow(ex2,2)*(dd_real(1.) + ex3)*ex4*(ex4 - dd_real(9.)*pow(ex4,2) - dd_real(10.)*pow(ex4,3) + pow(ex3,2)*(-dd_real(21.) + dd_real(16.)*ex4 + dd_real(27.)*pow(ex4,2)) + ex3*(-dd_real(2.) + dd_real(43.)*ex4 + dd_real(20.)*pow(ex4,2) - dd_real(20.)*pow(ex4,3))) + pow(ex2,4)*ex3*(dd_real(2.)*ex4*(-dd_real(1.) + dd_real(4.)*ex4 + dd_real(5.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(30.) - dd_real(33.)*ex4 - dd_real(48.)*pow(ex4,2) + dd_real(10.)*pow(ex4,3)) + ex3*(dd_real(2.) - dd_real(61.)*ex4 - dd_real(31.)*pow(ex4,2) + dd_real(30.)*pow(ex4,3))) + pow(ex2,3)*(pow(ex4,2)*(dd_real(1.) + ex4) + ex3*ex4*(-dd_real(4.) + dd_real(38.)*ex4 + dd_real(31.)*pow(ex4,2) - dd_real(10.)*pow(ex4,3)) + pow(ex3,3)*(dd_real(10.) - dd_real(53.)*ex4 - dd_real(24.)*pow(ex4,2) + dd_real(29.)*pow(ex4,3)) + pow(ex3,2)*(dd_real(1.) - dd_real(65.)*ex4 + dd_real(23.)*pow(ex4,2) + dd_real(70.)*pow(ex4,3) - dd_real(10.)*pow(ex4,4)));
return res;
}
