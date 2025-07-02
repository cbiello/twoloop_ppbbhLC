#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp410(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(6.)*pow(ex4,3)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,3) + dd_real(8.)*pow(ex2,5)*pow(-dd_real(1.) + ex6,2) + dd_real(2.)*pow(ex2,4)*(-dd_real(1.) + ex6)*(-dd_real(9.) + dd_real(10.)*ex6 - dd_real(1.)*pow(ex6,2) + ex4*(dd_real(7.) + ex6)) - dd_real(2.)*pow(ex2,2)*ex4*(dd_real(24.) + dd_real(12.)*pow(ex4,4) + pow(ex4,3)*(dd_real(33.) - dd_real(39.)*ex6) - dd_real(57.)*ex6 + dd_real(53.)*pow(ex6,2) - dd_real(23.)*pow(ex6,3) + dd_real(3.)*pow(ex6,4) + pow(ex4,2)*(dd_real(43.) - dd_real(89.)*ex6 + dd_real(45.)*pow(ex6,2)) + ex4*(dd_real(30.) - dd_real(96.)*ex6 + dd_real(79.)*pow(ex6,2) - dd_real(21.)*pow(ex6,3))) + ex2*pow(ex4,2)*(dd_real(15.) + dd_real(12.)*pow(ex4,4) - dd_real(6.)*ex6 - dd_real(1.)*pow(ex6,2) - dd_real(6.)*pow(ex6,3) + dd_real(6.)*pow(ex6,4) - dd_real(6.)*pow(ex4,3)*(-dd_real(4.) + dd_real(7.)*ex6) + pow(ex4,2)*(dd_real(17.) - dd_real(54.)*ex6 + dd_real(54.)*pow(ex6,2)) - dd_real(2.)*ex4*(-dd_real(6.) + dd_real(8.)*ex6 - dd_real(18.)*pow(ex6,2) + dd_real(15.)*pow(ex6,3))) + pow(ex2,3)*(dd_real(12.)*pow(ex4,4) - dd_real(36.)*pow(ex4,3)*(-dd_real(1.) + ex6) + pow(-dd_real(1.) + ex6,2)*(dd_real(27.) - dd_real(36.)*ex6 + dd_real(17.)*pow(ex6,2)) + pow(ex4,2)*(dd_real(57.) - dd_real(102.)*ex6 + dd_real(53.)*pow(ex6,2)) - dd_real(2.)*ex4*(-dd_real(6.) + dd_real(51.)*ex6 - dd_real(68.)*pow(ex6,2) + dd_real(23.)*pow(ex6,3)));
return res;
}
