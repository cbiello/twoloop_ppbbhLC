#include <iostream>
#include "listYgg2Lnf0ppnn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnn148(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(4.)*pow(ex2,4)*(-dd_real(11.)*pow(ex4,2) + dd_real(24.)*ex3*ex4*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + dd_real(15.)*pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2)) - dd_real(24.)*ex2*(dd_real(1.) + ex3)*ex4*(ex4*(dd_real(1.) + dd_real(5.)*ex4 - dd_real(5.)*ex6) + dd_real(5.)*ex3*(-dd_real(1.) + ex4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6))*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(60.)*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) + dd_real(4.)*pow(ex2,3)*(pow(ex4,2)*(dd_real(43.) + dd_real(21.)*ex4 - dd_real(21.)*ex6) + dd_real(30.)*pow(ex3,2)*(-dd_real(1.) + ex4)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) + dd_real(6.)*ex3*ex4*(-dd_real(3.) + dd_real(9.)*pow(ex4,2) + ex4*(dd_real(6.) - dd_real(14.)*ex6) - dd_real(2.)*ex6 + dd_real(5.)*pow(ex6,2))) + pow(ex2,2)*(-dd_real(60.)*pow(ex3,2)*(dd_real(1.) - dd_real(4.)*ex4 + pow(ex4,2))*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) + pow(ex4,2)*(dd_real(167.) - dd_real(57.)*pow(ex4,2) - dd_real(66.)*ex6 - dd_real(57.)*pow(ex6,2) + dd_real(6.)*ex4*(dd_real(11.) + dd_real(19.)*ex6)) - dd_real(24.)*ex3*ex4*(dd_real(5.)*pow(ex4,3) - dd_real(2.)*pow(ex4,2)*(dd_real(4.) + dd_real(5.)*ex6) - dd_real(2.)*(dd_real(3.) - dd_real(8.)*ex6 + dd_real(5.)*pow(ex6,2)) + ex4*(-dd_real(19.) + dd_real(18.)*ex6 + dd_real(5.)*pow(ex6,2))));
return res;
}
