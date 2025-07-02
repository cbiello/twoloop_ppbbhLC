#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp348(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(4.)*pow(ex2,5)*ex3*pow(-dd_real(1.) + ex6,2) + pow(ex2,4)*ex3*(-dd_real(1.) + ex6)*(-dd_real(9.) + ex4*(dd_real(23.) - dd_real(15.)*ex6) + dd_real(2.)*ex6 + dd_real(7.)*pow(ex6,2)) - dd_real(1.)*pow(ex4,3)*(dd_real(2.) - dd_real(6.)*ex4 + dd_real(6.)*ex6 + ex3*(dd_real(9.) + dd_real(4.)*pow(ex4,3) - dd_real(12.)*pow(ex4,2)*(-dd_real(1.) + ex6) - dd_real(9.)*ex6 + dd_real(12.)*pow(ex6,2) - dd_real(4.)*pow(ex6,3) + dd_real(3.)*ex4*(dd_real(3.) - dd_real(8.)*ex6 + dd_real(4.)*pow(ex6,2)))) + pow(ex2,2)*ex4*(dd_real(2.)*(-dd_real(1.) + ex6)*(dd_real(1.) + dd_real(6.)*pow(ex4,2) + dd_real(2.)*ex6 - dd_real(3.)*pow(ex6,2) - dd_real(1.)*ex4*(dd_real(5.) + dd_real(3.)*ex6)) + ex3*(-dd_real(11.) + dd_real(8.)*pow(ex4,4) - dd_real(28.)*pow(ex4,3)*(-dd_real(1.) + ex6) - dd_real(13.)*ex6 + dd_real(39.)*pow(ex6,2) - dd_real(19.)*pow(ex6,3) + dd_real(4.)*pow(ex6,4) + dd_real(3.)*pow(ex4,2)*(dd_real(5.) - dd_real(22.)*ex6 + dd_real(12.)*pow(ex6,2)) + ex4*(dd_real(72.) - dd_real(93.)*ex6 + dd_real(57.)*pow(ex6,2) - dd_real(20.)*pow(ex6,3)))) + pow(ex2,3)*(dd_real(2.)*ex4*(-dd_real(1.) + dd_real(3.)*ex4 - dd_real(3.)*ex6)*pow(-dd_real(1.) + ex6,2) + ex3*(pow(-dd_real(1.) + ex6,2)*(dd_real(5.) + dd_real(7.)*ex6) + pow(ex4,2)*(dd_real(37.) - dd_real(36.)*ex6 + dd_real(3.)*pow(ex6,2)) + ex4*(-dd_real(38.) + dd_real(41.)*ex6 - dd_real(3.)*pow(ex6,3)))) + ex2*pow(ex4,2)*(dd_real(2.)*(dd_real(2.) + dd_real(3.)*pow(ex4,2) + dd_real(4.)*ex6 - dd_real(6.)*pow(ex6,2) + ex4*(-dd_real(7.) + dd_real(3.)*ex6)) + ex3*(dd_real(15.) - dd_real(8.)*pow(ex4,4) + dd_real(7.)*ex6 - dd_real(18.)*pow(ex6,2) + dd_real(12.)*pow(ex6,3) - dd_real(4.)*pow(ex6,4) + dd_real(4.)*pow(ex4,3)*(-dd_real(6.) + dd_real(7.)*ex6) - dd_real(3.)*pow(ex4,2)*(dd_real(7.) - dd_real(20.)*ex6 + dd_real(12.)*pow(ex6,2)) + ex4*(-dd_real(34.) + dd_real(39.)*ex6 - dd_real(48.)*pow(ex6,2) + dd_real(20.)*pow(ex6,3))));
return res;
}
