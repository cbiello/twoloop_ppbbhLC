#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp455(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(6.)*(dd_real(3.) - dd_real(10.)*ex3 + dd_real(3.)*pow(ex3,2))*pow(ex4,4) + dd_real(6.)*pow(ex2,5)*(-dd_real(1.) + ex3)*ex3*pow(-dd_real(1.) + ex6,2) + ex2*pow(ex4,3)*(-dd_real(59.) + dd_real(2.)*ex4 + dd_real(40.)*ex6 - dd_real(10.)*ex3*(-dd_real(22.) + ex4 + dd_real(14.)*ex6) + pow(ex3,2)*(-dd_real(73.) + dd_real(4.)*ex4 + dd_real(44.)*ex6)) + pow(ex2,2)*pow(ex4,2)*(dd_real(69.) - dd_real(92.)*ex6 + dd_real(26.)*pow(ex6,2) + ex4*(-dd_real(6.) + dd_real(4.)*ex6) + ex3*(-dd_real(300.) + ex4*(dd_real(36.) - dd_real(24.)*ex6) + dd_real(374.)*ex6 - dd_real(96.)*pow(ex6,2)) + pow(ex3,2)*(dd_real(111.) - dd_real(132.)*ex6 + dd_real(32.)*pow(ex6,2) + dd_real(2.)*ex4*(-dd_real(9.) + dd_real(5.)*ex6))) + pow(ex2,3)*ex4*((-dd_real(1.) + ex6)*(dd_real(33.) + dd_real(2.)*ex4*(-dd_real(3.) + ex6) - dd_real(31.)*ex6 + dd_real(4.)*pow(ex6,2)) + ex3*(dd_real(180.) - dd_real(328.)*ex6 + dd_real(165.)*pow(ex6,2) - dd_real(18.)*pow(ex6,3) - dd_real(12.)*ex4*(dd_real(4.) - dd_real(5.)*ex6 + pow(ex6,2))) + pow(ex3,2)*(-dd_real(75.) + dd_real(132.)*ex6 - dd_real(63.)*pow(ex6,2) + dd_real(6.)*pow(ex6,3) + ex4*(dd_real(30.) - dd_real(32.)*ex6 + dd_real(6.)*pow(ex6,2)))) + pow(ex2,4)*(-dd_real(1.)*pow(-dd_real(1.) + ex6,2)*(-dd_real(5.) + dd_real(2.)*ex4 + dd_real(2.)*ex6) - dd_real(1.)*pow(ex3,2)*(-dd_real(1.) + ex6)*(dd_real(19.) - dd_real(25.)*ex6 + dd_real(6.)*pow(ex6,2) + dd_real(2.)*ex4*(-dd_real(11.) + dd_real(6.)*ex6)) + ex3*(-dd_real(40.) + dd_real(94.)*ex6 - dd_real(69.)*pow(ex6,2) + dd_real(15.)*pow(ex6,3) + dd_real(2.)*ex4*(dd_real(14.) - dd_real(24.)*ex6 + dd_real(9.)*pow(ex6,2))));
return res;
}
