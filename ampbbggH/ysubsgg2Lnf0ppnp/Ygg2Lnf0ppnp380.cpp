#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp380(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,4)*ex3*(dd_real(2.)*ex3*(dd_real(3.)*pow(ex4,2) - dd_real(5.)*ex4*(-dd_real(1.) + ex6) + dd_real(2.)*pow(-dd_real(1.) + ex6,2)) + ex4*(dd_real(17.) + dd_real(6.)*ex4 - dd_real(17.)*ex6))*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + pow(ex4,3)*(dd_real(2.)*pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) - dd_real(1.)*ex3*(dd_real(11.) + dd_real(16.)*pow(ex4,2) + ex4*(dd_real(27.) - dd_real(32.)*ex6) - dd_real(27.)*ex6 + dd_real(16.)*pow(ex6,2)) - dd_real(6.)*(dd_real(3.)*pow(ex4,2) + ex4*(dd_real(4.) - dd_real(6.)*ex6) + ex6*(-dd_real(4.) + dd_real(3.)*ex6))) + ex2*pow(ex4,2)*(-dd_real(31.)*pow(ex4,3) + dd_real(4.)*pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2)*(dd_real(2.)*ex4 - dd_real(1.)*ex6) + pow(ex4,2)*(-dd_real(1.) + dd_real(51.)*ex6) + ex6*(-dd_real(24.) + dd_real(35.)*ex6 - dd_real(11.)*pow(ex6,2)) + ex4*(dd_real(48.) - dd_real(34.)*ex6 - dd_real(9.)*pow(ex6,2)) + ex3*(dd_real(22.) - dd_real(23.)*pow(ex4,3) - dd_real(64.)*ex6 + dd_real(57.)*pow(ex6,2) - dd_real(15.)*pow(ex6,3) + pow(ex4,2)*(dd_real(2.) + dd_real(31.)*ex6) + ex4*(dd_real(47.) - dd_real(59.)*ex6 + dd_real(7.)*pow(ex6,2)))) - dd_real(1.)*pow(ex2,3)*(dd_real(4.)*pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2)*(-dd_real(1.) + dd_real(3.)*pow(ex4,2) + ex6 - dd_real(2.)*ex4*ex6) + pow(ex4,2)*(dd_real(37.) + ex4*(dd_real(31.) - dd_real(24.)*ex6) - dd_real(61.)*ex6 + dd_real(24.)*pow(ex6,2)) + ex3*ex4*(dd_real(12.)*pow(ex4,3) + pow(ex4,2)*(dd_real(69.) - dd_real(63.)*ex6) - dd_real(7.)*pow(-dd_real(1.) + ex6,2)*(-dd_real(1.) + dd_real(4.)*ex6) + ex4*(dd_real(64.) - dd_real(143.)*ex6 + dd_real(79.)*pow(ex6,2)))) + pow(ex2,2)*ex4*(dd_real(2.)*pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2)*(-dd_real(3.) + dd_real(3.)*pow(ex4,2) + dd_real(4.)*ex6 - dd_real(2.)*ex4*(dd_real(3.) + ex6)) - dd_real(2.)*ex4*(dd_real(12.) + ex6 - dd_real(25.)*pow(ex6,2) + dd_real(12.)*pow(ex6,3) + pow(ex4,2)*(-dd_real(31.) + dd_real(12.)*ex6) - dd_real(4.)*ex4*(dd_real(7.) - dd_real(14.)*ex6 + dd_real(6.)*pow(ex6,2))) + ex3*(dd_real(6.)*pow(ex4,4) + pow(ex4,3)*(dd_real(69.) - dd_real(40.)*ex6) + pow(-dd_real(1.) + ex6,2)*(-dd_real(11.) + dd_real(15.)*ex6) + pow(ex4,2)*(dd_real(61.) - dd_real(140.)*ex6 + dd_real(62.)*pow(ex6,2)) - dd_real(1.)*ex4*(dd_real(13.) + dd_real(15.)*ex6 - dd_real(56.)*pow(ex6,2) + dd_real(28.)*pow(ex6,3))));
return res;
}
