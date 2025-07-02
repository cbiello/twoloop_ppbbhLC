#include <iostream>
#include "listYgg2Lnf1pppn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppn71(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(6.)*pow(dd_real(1.) + ex3,3)*pow(ex4,3) + dd_real(6.)*pow(ex2,6)*pow(ex3,3)*(dd_real(1.) + ex4) - dd_real(6.)*ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(-dd_real(1.) + pow(ex4,2) + ex3*(-dd_real(3.) + dd_real(2.)*ex4)) + pow(ex2,5)*pow(ex3,2)*(dd_real(5.) - dd_real(7.)*ex4 - dd_real(12.)*pow(ex4,2) - dd_real(6.)*ex3*(-dd_real(3.) + dd_real(2.)*pow(ex4,2))) + pow(ex2,2)*(dd_real(1.) + ex3)*ex4*(dd_real(6.)*pow(ex3,2)*(-dd_real(3.) + dd_real(7.)*ex4) - dd_real(1.)*ex4*(dd_real(1.) + dd_real(7.)*ex4 + dd_real(6.)*pow(ex4,2)) + ex3*(-dd_real(11.) + dd_real(37.)*ex4 + dd_real(24.)*pow(ex4,2) - dd_real(12.)*pow(ex4,3))) + pow(ex2,4)*ex3*(dd_real(2.)*ex4*(dd_real(19.) + dd_real(22.)*ex4 + dd_real(3.)*pow(ex4,2)) + dd_real(6.)*pow(ex3,2)*(dd_real(3.) - dd_real(6.)*ex4 - dd_real(3.)*pow(ex4,2) + pow(ex4,3)) + ex3*(dd_real(10.) - dd_real(43.)*ex4 - dd_real(29.)*pow(ex4,2) + dd_real(18.)*pow(ex4,3))) + pow(ex2,3)*(-dd_real(37.)*pow(ex4,2)*(dd_real(1.) + ex4) + ex3*ex4*(dd_real(27.) + dd_real(50.)*ex4 + dd_real(17.)*pow(ex4,2) - dd_real(6.)*pow(ex4,3)) + dd_real(6.)*pow(ex3,3)*(dd_real(1.) - dd_real(8.)*ex4 + dd_real(3.)*pow(ex4,2) + dd_real(2.)*pow(ex4,3)) + pow(ex3,2)*(dd_real(5.) - dd_real(65.)*ex4 + dd_real(20.)*pow(ex4,2) + dd_real(48.)*pow(ex4,3) - dd_real(6.)*pow(ex4,4)));
return res;
}
