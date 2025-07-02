#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp214(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(11.)*pow(ex2,6)*pow(ex3,2) + pow(ex2,5)*pow(ex3,2)*(dd_real(53.) - dd_real(13.)*ex4 - dd_real(9.)*ex6) - dd_real(1.)*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(-dd_real(11.) + dd_real(9.)*pow(ex4,2) + ex4*(dd_real(9.) - dd_real(18.)*ex6) - dd_real(9.)*ex6 + dd_real(9.)*pow(ex6,2)) + pow(ex2,4)*ex3*(dd_real(31.) + dd_real(9.)*ex4 - dd_real(31.)*ex6 - dd_real(1.)*ex3*(-dd_real(84.) + dd_real(16.)*pow(ex4,2) + ex4*(dd_real(97.) - dd_real(36.)*ex6) + dd_real(9.)*ex6 + dd_real(9.)*pow(ex6,2))) + pow(ex2,3)*ex3*(dd_real(53.) - dd_real(36.)*pow(ex4,2) - dd_real(44.)*ex6 - dd_real(9.)*pow(ex6,2) + ex4*(-dd_real(71.) + dd_real(67.)*ex6) + ex3*(dd_real(53.) + dd_real(27.)*pow(ex4,3) + pow(ex4,2)*(dd_real(17.) - dd_real(45.)*ex6) + dd_real(9.)*ex6 - dd_real(18.)*pow(ex6,2) + dd_real(3.)*ex4*(-dd_real(59.) + dd_real(18.)*ex6 + dd_real(6.)*pow(ex6,2)))) - dd_real(1.)*ex2*(dd_real(1.) + ex3)*ex4*(dd_real(22.) - dd_real(18.)*pow(ex4,2) - dd_real(13.)*ex6 - dd_real(9.)*pow(ex6,2) + dd_real(9.)*ex4*(-dd_real(2.) + dd_real(3.)*ex6) + ex3*(dd_real(22.) + dd_real(18.)*pow(ex4,3) + dd_real(18.)*ex6 - dd_real(18.)*pow(ex6,2) - dd_real(9.)*pow(ex4,2)*(dd_real(1.) + dd_real(4.)*ex6) + ex4*(-dd_real(71.) + dd_real(27.)*ex6 + dd_real(18.)*pow(ex6,2)))) + pow(ex2,2)*(-dd_real(9.)*pow(ex4,2) + dd_real(9.)*ex4*(-dd_real(1.) + ex6) + dd_real(11.)*pow(-dd_real(1.) + ex6,2) + ex3*(dd_real(22.) + dd_real(45.)*pow(ex4,3) + pow(ex4,2)*(dd_real(31.) - dd_real(72.)*ex6) - dd_real(13.)*ex6 - dd_real(9.)*pow(ex6,2) + ex4*(-dd_real(124.) + dd_real(62.)*ex6 + dd_real(27.)*pow(ex6,2))) + pow(ex3,2)*(dd_real(11.) - dd_real(9.)*pow(ex4,4) + dd_real(9.)*ex6 - dd_real(9.)*pow(ex6,2) + dd_real(9.)*pow(ex4,3)*(dd_real(5.) + dd_real(2.)*ex6) + pow(ex4,2)*(dd_real(93.) - dd_real(81.)*ex6 - dd_real(9.)*pow(ex6,2)) + ex4*(-dd_real(115.) + dd_real(36.)*pow(ex6,2))));
return res;
}
