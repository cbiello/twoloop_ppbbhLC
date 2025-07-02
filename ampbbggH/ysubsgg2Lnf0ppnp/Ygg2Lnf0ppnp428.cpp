#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp428(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(11.)*pow(ex2,6)*pow(ex3,2) + pow(ex2,5)*pow(ex3,2)*(dd_real(41.) - dd_real(25.)*ex4 + dd_real(3.)*ex6) + pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(11.) + dd_real(3.)*pow(ex4,2) + ex4*(dd_real(3.) - dd_real(6.)*ex6) - dd_real(3.)*ex6 + dd_real(3.)*pow(ex6,2)) + pow(ex2,4)*ex3*(dd_real(19.) - dd_real(3.)*ex4 - dd_real(19.)*ex6 + ex3*(dd_real(20.)*pow(ex4,2) - dd_real(1.)*ex4*(dd_real(85.) + dd_real(12.)*ex6) + dd_real(3.)*(dd_real(20.) + ex6 + pow(ex6,2)))) + pow(ex2,3)*ex3*(dd_real(41.) + dd_real(12.)*pow(ex4,2) + dd_real(7.)*ex4*(-dd_real(5.) + ex6) - dd_real(44.)*ex6 + dd_real(3.)*pow(ex6,2) + ex3*(dd_real(41.) - dd_real(9.)*pow(ex4,3) - dd_real(3.)*ex6 + dd_real(6.)*pow(ex6,2) + pow(ex4,2)*(dd_real(53.) + dd_real(15.)*ex6) - dd_real(3.)*ex4*(dd_real(39.) + dd_real(6.)*ex6 + dd_real(2.)*pow(ex6,2)))) + ex2*(dd_real(1.) + ex3)*ex4*(-dd_real(22.) - dd_real(6.)*pow(ex4,2) + dd_real(25.)*ex6 - dd_real(3.)*pow(ex6,2) + ex4*(-dd_real(6.) + dd_real(9.)*ex6) + ex3*(-dd_real(22.) + dd_real(6.)*pow(ex4,3) + dd_real(6.)*ex6 - dd_real(6.)*pow(ex6,2) - dd_real(3.)*pow(ex4,2)*(dd_real(1.) + dd_real(4.)*ex6) + ex4*(dd_real(35.) + dd_real(9.)*ex6 + dd_real(6.)*pow(ex6,2)))) + pow(ex2,2)*(dd_real(3.)*pow(ex4,2) - dd_real(3.)*ex4*(-dd_real(1.) + ex6) + dd_real(11.)*pow(-dd_real(1.) + ex6,2) + ex3*(dd_real(22.) - dd_real(15.)*pow(ex4,3) - dd_real(25.)*ex6 + dd_real(3.)*pow(ex6,2) + pow(ex4,2)*(dd_real(19.) + dd_real(24.)*ex6) + ex4*(-dd_real(76.) + dd_real(38.)*ex6 - dd_real(9.)*pow(ex6,2))) + pow(ex3,2)*(dd_real(11.) + dd_real(3.)*pow(ex4,4) - dd_real(3.)*ex6 + dd_real(3.)*pow(ex6,2) - dd_real(3.)*pow(ex4,3)*(dd_real(5.) + dd_real(2.)*ex6) + dd_real(3.)*pow(ex4,2)*(dd_real(19.) + dd_real(9.)*ex6 + pow(ex6,2)) - dd_real(1.)*ex4*(dd_real(79.) + dd_real(12.)*pow(ex6,2))));
return res;
}
