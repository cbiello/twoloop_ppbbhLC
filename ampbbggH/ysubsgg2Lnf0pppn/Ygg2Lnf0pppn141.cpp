#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn141(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(6.)*pow(ex2,5)*pow(ex3,3) + pow(ex2,4)*pow(ex3,2)*(-dd_real(6.) + ex3*(dd_real(17.) + dd_real(33.)*ex4 - dd_real(21.)*ex6)) + pow(ex4,2)*(-dd_real(6.) + ex3*(dd_real(17.) + dd_real(9.)*ex4 - dd_real(9.)*ex6))*pow(-dd_real(1.) + ex3*(ex4 - dd_real(1.)*ex6),2) - dd_real(2.)*pow(ex2,3)*pow(ex3,2)*(-dd_real(5.) + dd_real(36.)*ex3*pow(ex4,2) + ex4*(-dd_real(19.) + ex3*(dd_real(34.) - dd_real(45.)*ex6)) + (dd_real(7.) - dd_real(17.)*ex3)*ex6 + dd_real(12.)*ex3*pow(ex6,2)) - dd_real(2.)*ex2*ex3*ex4*(dd_real(7.) + dd_real(21.)*pow(ex3,2)*pow(ex4,3) + ex3*pow(ex4,2)*(-dd_real(37.) + ex3*(dd_real(34.) - dd_real(51.)*ex6)) + (-dd_real(9.) + dd_real(22.)*ex3)*ex6 + ex3*(-dd_real(16.) + dd_real(17.)*ex3)*pow(ex6,2) - dd_real(9.)*pow(ex3,2)*pow(ex6,3) + ex4*(dd_real(18.) + dd_real(3.)*pow(ex3,2)*ex6*(-dd_real(17.) + dd_real(13.)*ex6) + ex3*(-dd_real(39.) + dd_real(53.)*ex6))) + pow(ex2,2)*ex3*(dd_real(78.)*pow(ex3,2)*pow(ex4,3) + ex3*ex6*(dd_real(10.) + (-dd_real(8.) + dd_real(17.)*ex3)*ex6 - dd_real(9.)*ex3*pow(ex6,2)) + dd_real(3.)*ex4*(dd_real(4.) + dd_real(6.)*ex3*(-dd_real(3.) + dd_real(4.)*ex6) + pow(ex3,2)*ex6*(-dd_real(34.) + dd_real(25.)*ex6)) - dd_real(2.)*ex3*pow(ex4,2)*(dd_real(41.) + ex3*(-dd_real(51.) + dd_real(72.)*ex6)));
return res;
}
