#include <iostream>
#include "listYgg2Lnf1ppnn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1ppnn76(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,5)*pow(ex3,2)*(dd_real(7.)*ex4 + dd_real(13.)*ex3*(dd_real(1.) + ex4 - dd_real(1.)*ex6))*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(6.)*ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(-dd_real(1.)*ex4 + dd_real(2.)*ex3*(-dd_real(3.) + dd_real(2.)*ex4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6))*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(12.)*pow(dd_real(1.) + ex3,3)*pow(ex4,3)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) - dd_real(1.)*pow(ex2,2)*ex3*(dd_real(1.) + ex3)*ex4*(dd_real(1.) + ex4 - dd_real(1.)*ex6)*(ex3*(dd_real(36.) - dd_real(72.)*ex4 + dd_real(13.)*pow(ex4,2))*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + ex4*(-dd_real(12.) - dd_real(35.)*ex4 + dd_real(24.)*ex6)) - dd_real(1.)*pow(ex2,4)*ex3*(pow(ex4,2) + dd_real(3.)*pow(ex3,2)*(-dd_real(8.) + dd_real(13.)*ex4)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) + ex3*ex4*(dd_real(2.) + dd_real(27.)*pow(ex4,2) + ex4*(dd_real(29.) - dd_real(40.)*ex6) - dd_real(15.)*ex6 + dd_real(13.)*pow(ex6,2))) + pow(ex2,3)*ex3*(pow(ex4,2)*(-dd_real(10.)*ex4 + dd_real(11.)*(-dd_real(1.) + ex6)) + dd_real(3.)*pow(ex3,2)*(dd_real(4.) - dd_real(24.)*ex4 + dd_real(13.)*pow(ex4,2))*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) + ex3*ex4*(dd_real(33.)*pow(ex4,3) - dd_real(1.)*pow(ex4,2)*(dd_real(11.) + dd_real(59.)*ex6) - dd_real(6.)*(dd_real(7.) - dd_real(15.)*ex6 + dd_real(8.)*pow(ex6,2)) + ex4*(-dd_real(86.) + dd_real(66.)*ex6 + dd_real(26.)*pow(ex6,2))));
return res;
}
