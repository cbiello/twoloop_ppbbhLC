#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp444(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(4.)*pow(ex2,6)*pow(ex3,2) - dd_real(1.)*pow(ex2,5)*pow(ex3,2)*(-dd_real(17.) + dd_real(7.)*ex4 + ex6) + pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(18.) + dd_real(13.)*pow(ex4,2) + ex4*(dd_real(27.) - dd_real(26.)*ex6) - dd_real(27.)*ex6 + dd_real(13.)*pow(ex6,2)) + pow(ex2,4)*ex3*(dd_real(2.)*ex4*(-dd_real(1.) + dd_real(3.)*ex4 - dd_real(3.)*ex6) + ex3*(dd_real(40.) + dd_real(15.)*pow(ex4,2) - dd_real(29.)*ex6 + dd_real(13.)*pow(ex6,2) - dd_real(1.)*ex4*(dd_real(5.) + dd_real(24.)*ex6))) + pow(ex2,2)*(dd_real(2.)*pow(ex4,2)*(dd_real(11.) + dd_real(12.)*pow(ex4,2) - dd_real(21.)*ex6 + dd_real(12.)*pow(ex6,2) - dd_real(3.)*ex4*(-dd_real(7.) + dd_real(8.)*ex6)) + dd_real(2.)*ex3*ex4*(-dd_real(36.) + dd_real(12.)*pow(ex4,3) + dd_real(49.)*ex6 - dd_real(25.)*pow(ex6,2) - dd_real(6.)*pow(ex4,2)*(dd_real(1.) + dd_real(4.)*ex6) + ex4*(-dd_real(30.) + dd_real(31.)*ex6 + dd_real(12.)*pow(ex6,2))) + pow(ex3,2)*(dd_real(18.) + dd_real(13.)*pow(ex4,4) - dd_real(27.)*ex6 + dd_real(13.)*pow(ex6,2) - dd_real(1.)*pow(ex4,3)*(dd_real(23.) + dd_real(26.)*ex6) + ex4*(-dd_real(63.) + dd_real(84.)*ex6 - dd_real(52.)*pow(ex6,2)) + pow(ex4,2)*(-dd_real(57.) + dd_real(75.)*ex6 + dd_real(13.)*pow(ex6,2)))) - dd_real(1.)*pow(ex2,3)*ex3*(dd_real(2.)*ex4*(dd_real(19.) + dd_real(15.)*pow(ex4,2) - dd_real(19.)*ex6 + dd_real(12.)*pow(ex6,2) - dd_real(9.)*ex4*(-dd_real(2.) + dd_real(3.)*ex6)) + ex3*(-dd_real(45.) + dd_real(25.)*pow(ex4,3) + pow(ex4,2)*(dd_real(15.) - dd_real(51.)*ex6) + dd_real(55.)*ex6 - dd_real(26.)*pow(ex6,2) + ex4*(dd_real(25.) - dd_real(6.)*ex6 + dd_real(26.)*pow(ex6,2)))) + ex2*(dd_real(1.) + ex3)*ex4*(ex4*(dd_real(27.) + dd_real(24.)*pow(ex4,2) + ex4*(dd_real(43.) - dd_real(48.)*ex6) - dd_real(43.)*ex6 + dd_real(24.)*pow(ex6,2)) + ex3*(-dd_real(36.) + dd_real(26.)*pow(ex4,3) + pow(ex4,2)*(dd_real(29.) - dd_real(52.)*ex6) + dd_real(54.)*ex6 - dd_real(26.)*pow(ex6,2) + ex4*(-dd_real(9.) - dd_real(3.)*ex6 + dd_real(26.)*pow(ex6,2))));
return res;
}
