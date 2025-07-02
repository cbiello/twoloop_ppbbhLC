#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp169(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(9.)*pow(ex2,7)*pow(ex3,3) + pow(ex2,6)*pow(ex3,2)*(dd_real(19.) + dd_real(16.)*pow(ex3,2) + ex3*(dd_real(71.) - dd_real(9.)*ex4)) + dd_real(19.)*pow(dd_real(1.) + ex3,4)*pow(ex4,2) + pow(ex2,5)*pow(ex3,2)*(dd_real(82.) + pow(ex3,2)*(dd_real(67.) - dd_real(32.)*ex4) - dd_real(53.)*ex4 - dd_real(2.)*ex3*(-dd_real(88.) + dd_real(53.)*ex4)) + ex2*pow(dd_real(1.) + ex3,3)*ex4*(dd_real(26.)*ex4 + ex3*(-dd_real(38.) + dd_real(73.)*ex4)) + pow(ex2,4)*ex3*(dd_real(1.) + ex3)*(-dd_real(44.)*ex4 + pow(ex3,2)*(dd_real(105.) - dd_real(134.)*ex4 + dd_real(16.)*pow(ex4,2)) + ex3*(dd_real(108.) - dd_real(205.)*ex4 + dd_real(19.)*pow(ex4,2))) + pow(ex2,3)*ex3*(dd_real(1.) + ex3)*(dd_real(2.)*ex4*(-dd_real(54.) + dd_real(19.)*ex4) + dd_real(4.)*ex3*(dd_real(16.) - dd_real(75.)*ex4 + dd_real(24.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(73.) - dd_real(210.)*ex4 + dd_real(67.)*pow(ex4,2))) + pow(ex2,2)*pow(dd_real(1.) + ex3,2)*(dd_real(19.)*pow(ex4,2) + dd_real(3.)*ex3*ex4*(-dd_real(30.) + dd_real(29.)*ex4) + pow(ex3,2)*(dd_real(19.) - dd_real(146.)*ex4 + dd_real(105.)*pow(ex4,2)));
return res;
}
