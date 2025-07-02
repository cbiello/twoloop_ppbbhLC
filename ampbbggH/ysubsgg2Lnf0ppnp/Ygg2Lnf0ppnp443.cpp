#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp443(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(4.)*pow(ex2,4)*pow(ex3,2) + pow(ex2,3)*pow(ex3,2)*(dd_real(5.) - dd_real(15.)*ex4 + dd_real(7.)*ex6) + pow(ex2,2)*ex3*(dd_real(2.)*ex4*(-dd_real(1.) + dd_real(3.)*ex4 - dd_real(3.)*ex6) + ex3*(dd_real(13.) + dd_real(33.)*pow(ex4,2) + ex4*(dd_real(6.) - dd_real(44.)*ex6) - dd_real(16.)*ex6 + dd_real(15.)*pow(ex6,2))) - dd_real(1.)*ex2*ex3*ex4*(dd_real(42.)*pow(ex4,2) + ex4*(dd_real(50.) - dd_real(78.)*ex6) + dd_real(4.)*(dd_real(8.) - dd_real(13.)*ex6 + dd_real(9.)*pow(ex6,2)) + ex3*(dd_real(26.) + dd_real(30.)*pow(ex4,2) + ex4*(dd_real(32.) - dd_real(57.)*ex6) - dd_real(37.)*ex6 + dd_real(27.)*pow(ex6,2))) + pow(ex4,2)*(dd_real(22.) + dd_real(24.)*pow(ex4,2) - dd_real(42.)*ex6 + dd_real(24.)*pow(ex6,2) - dd_real(6.)*ex4*(-dd_real(7.) + dd_real(8.)*ex6) + ex3*(dd_real(32.) + dd_real(30.)*pow(ex4,2) + ex4*(dd_real(54.) - dd_real(60.)*ex6) - dd_real(54.)*ex6 + dd_real(30.)*pow(ex6,2)) + pow(ex3,2)*(dd_real(13.) + dd_real(12.)*pow(ex4,2) - dd_real(21.)*ex6 + dd_real(12.)*pow(ex6,2) - dd_real(3.)*ex4*(-dd_real(7.) + dd_real(8.)*ex6)));
return res;
}
