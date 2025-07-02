#include <iostream>
#include "listYgg2Lnf0pppp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppp125(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,4)*(dd_real(22.)*pow(ex4,2) + dd_real(32.)*ex3*ex4*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + dd_real(13.)*pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2)) + pow(ex2,2)*pow(ex4,2)*(dd_real(3.) + dd_real(66.)*pow(ex4,2) + dd_real(45.)*pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) + dd_real(6.)*ex6 + dd_real(13.)*pow(ex6,2) - dd_real(6.)*ex4*(dd_real(5.) + dd_real(11.)*ex6) + dd_real(18.)*ex3*(-dd_real(1.) + dd_real(6.)*pow(ex4,2) + ex4*(dd_real(5.) - dd_real(9.)*ex6) - dd_real(2.)*ex6 + dd_real(3.)*pow(ex6,2))) + pow(ex4,4)*(dd_real(3.) + dd_real(4.)*pow(ex4,2) + dd_real(4.)*pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) + dd_real(6.)*ex6 + dd_real(4.)*pow(ex6,2) - dd_real(2.)*ex4*(dd_real(3.) + dd_real(4.)*ex6) + dd_real(2.)*ex3*(-dd_real(3.) + ex4 + dd_real(4.)*pow(ex4,2) - dd_real(1.)*ex6 - dd_real(8.)*ex4*ex6 + dd_real(4.)*pow(ex6,2))) - dd_real(2.)*pow(ex2,3)*ex4*(dd_real(2.)*ex4*(-dd_real(3.) + dd_real(16.)*ex4 - dd_real(8.)*ex6) + dd_real(20.)*pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) + ex3*(-dd_real(3.) + dd_real(49.)*pow(ex4,2) + ex4*(dd_real(46.) - dd_real(62.)*ex6) - dd_real(10.)*ex6 + dd_real(13.)*pow(ex6,2))) - dd_real(2.)*ex2*pow(ex4,3)*(dd_real(3.) + dd_real(14.)*pow(ex4,2) + dd_real(11.)*pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) + dd_real(6.)*ex6 + dd_real(7.)*pow(ex6,2) - dd_real(3.)*ex4*(dd_real(4.) + dd_real(7.)*ex6) + ex3*(-dd_real(9.) + dd_real(25.)*pow(ex4,2) + ex4*(dd_real(16.) - dd_real(43.)*ex6) - dd_real(9.)*ex6 + dd_real(18.)*pow(ex6,2)));
return res;
}
