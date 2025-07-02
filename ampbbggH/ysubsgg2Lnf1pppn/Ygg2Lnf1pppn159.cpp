#include <iostream>
#include "listYgg2Lnf1pppn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppn159(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(dd_real(1.) + ex3,4)*(-dd_real(1.) + ex4)*pow(ex4,5) + dd_real(2.)*pow(ex2,7)*pow(ex3,3)*(-dd_real(6.) - dd_real(12.)*ex4 + (-dd_real(6.) + ex3)*pow(ex4,2)) + dd_real(2.)*ex2*pow(dd_real(1.) + ex3,3)*pow(ex4,3)*(dd_real(6.) + dd_real(2.)*(dd_real(6.) + ex3)*ex4 - dd_real(3.)*(-dd_real(2.) + ex3)*pow(ex4,2) + (dd_real(1.) + dd_real(2.)*ex3)*pow(ex4,3)) + pow(ex2,6)*pow(ex3,2)*(dd_real(23.)*ex4*pow(dd_real(1.) + ex4,2) - dd_real(1.)*pow(ex3,2)*ex4*(dd_real(1.) - dd_real(5.)*ex4 + dd_real(8.)*pow(ex4,2)) + dd_real(4.)*ex3*(-dd_real(9.) - dd_real(9.)*ex4 + dd_real(9.)*pow(ex4,2) + dd_real(8.)*pow(ex4,3))) + dd_real(2.)*pow(ex2,5)*ex3*(-dd_real(5.)*pow(ex4,2)*pow(dd_real(1.) + ex4,2) + ex3*ex4*(dd_real(41.) + dd_real(59.)*ex4 - dd_real(5.)*pow(ex4,2) - dd_real(22.)*pow(ex4,3)) + pow(ex3,3)*ex4*(-dd_real(1.) + dd_real(4.)*ex4 - dd_real(10.)*pow(ex4,2) + dd_real(6.)*pow(ex4,3)) + pow(ex3,2)*(-dd_real(18.) + dd_real(18.)*ex4 + dd_real(73.)*pow(ex4,2) + dd_real(11.)*pow(ex4,3) - dd_real(12.)*pow(ex4,4))) + pow(ex2,2)*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(23.)*ex4*pow(dd_real(1.) + ex4,2) + pow(ex3,2)*ex4*(-dd_real(6.) + dd_real(14.)*ex4 - dd_real(17.)*pow(ex4,2) + dd_real(5.)*pow(ex4,3)) + ex3*(-dd_real(36.) - dd_real(36.)*ex4 + dd_real(38.)*pow(ex4,2) + dd_real(26.)*pow(ex4,3) + dd_real(4.)*pow(ex4,4))) + pow(ex2,4)*(pow(ex4,3)*pow(dd_real(1.) + ex4,2) + dd_real(2.)*ex3*pow(ex4,2)*pow(dd_real(1.) + ex4,2)*(-dd_real(28.) + dd_real(5.)*ex4) - dd_real(1.)*pow(ex3,4)*ex4*(dd_real(1.) - dd_real(9.)*ex4 + dd_real(22.)*pow(ex4,2) - dd_real(30.)*pow(ex4,3) + dd_real(8.)*pow(ex4,4)) + pow(ex3,2)*ex4*(dd_real(95.) + dd_real(26.)*ex4 - dd_real(211.)*pow(ex4,2) - dd_real(105.)*pow(ex4,3) + dd_real(19.)*pow(ex4,4)) - dd_real(2.)*pow(ex3,3)*(dd_real(6.) - dd_real(42.)*ex4 - dd_real(51.)*pow(ex4,2) + dd_real(58.)*pow(ex4,3) + dd_real(21.)*pow(ex4,4))) + dd_real(2.)*pow(ex2,3)*(dd_real(1.) + ex3)*ex4*(dd_real(5.)*pow(ex4,2)*pow(dd_real(1.) + ex4,2) + ex3*ex4*(-dd_real(41.) - dd_real(59.)*ex4 + dd_real(5.)*pow(ex4,2) + dd_real(21.)*pow(ex4,3)) + pow(ex3,3)*ex4*(dd_real(2.) - dd_real(8.)*ex4 + dd_real(14.)*pow(ex4,2) - dd_real(10.)*pow(ex4,3) + pow(ex4,4)) + pow(ex3,2)*(dd_real(18.) - dd_real(18.)*ex4 - dd_real(75.)*pow(ex4,2) - dd_real(8.)*pow(ex4,3) + dd_real(7.)*pow(ex4,4) + pow(ex4,5)));
return res;
}
