#include <iostream>
#include "listYgg2Lnf1ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf1ppnp63(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(1.)*pow(ex2,4)*pow(ex3,2)*(dd_real(7.) + dd_real(6.)*ex3) - dd_real(1.)*(dd_real(1.) + ex3)*pow(ex4,2)*(-dd_real(1.) + dd_real(6.)*pow(ex3,2) + ex3*(dd_real(2.) + ex4 - dd_real(1.)*ex6)) + pow(ex2,3)*ex3*(dd_real(12.)*pow(ex3,2)*(-dd_real(1.) + ex4) + ex4*(-dd_real(2.) - dd_real(1.)*ex4 + ex6) + dd_real(2.)*ex3*(-dd_real(8.) + dd_real(3.)*ex4 + ex6)) + pow(ex2,2)*ex3*(-dd_real(6.)*pow(ex3,2)*(dd_real(1.) - dd_real(4.)*ex4 + pow(ex4,2)) + ex4*(dd_real(6.) + pow(ex4,2) - dd_real(1.)*ex4*(-dd_real(3.) + ex6) - dd_real(1.)*ex6) + ex3*(-dd_real(8.) + dd_real(3.)*pow(ex4,2) + ex4*(dd_real(25.) - dd_real(4.)*ex6) + ex6)) + ex2*ex4*(-dd_real(12.)*pow(ex3,3)*(-dd_real(1.) + ex4) + ex4 - dd_real(2.)*pow(ex3,2)*(-dd_real(8.) + pow(ex4,2) - dd_real(1.)*ex4*(-dd_real(4.) + ex6) + ex6) + ex3*(dd_real(7.) - dd_real(1.)*pow(ex4,2) - dd_real(1.)*ex6 + ex4*(dd_real(1.) + ex6)));
return res;
}
