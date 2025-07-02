#include <iostream>
#include "listYgg2Lnf0ppnn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnn208(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(6.)*pow(ex2,5)*pow(ex3,3)*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + dd_real(3.)*pow(dd_real(1.) + ex3,3)*pow(ex4,2)*pow(ex4 - dd_real(1.)*ex6,2)*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(3.)*pow(ex2,4)*pow(ex3,2)*(-dd_real(1.) + dd_real(8.)*pow(ex4,2) + ex4*(dd_real(6.) - dd_real(12.)*ex6) - dd_real(3.)*ex6 + dd_real(4.)*pow(ex6,2) + ex3*(-dd_real(1.) + dd_real(8.)*pow(ex4,2) + ex4*(dd_real(7.) - dd_real(12.)*ex6) - dd_real(3.)*ex6 + dd_real(4.)*pow(ex6,2))) + pow(ex2,3)*ex3*(dd_real(1.) + ex3)*(-dd_real(23.) + dd_real(30.)*pow(ex4,3) + dd_real(75.)*ex6 - dd_real(69.)*pow(ex6,2) + dd_real(17.)*pow(ex6,3) - dd_real(1.)*pow(ex4,2)*(dd_real(11.) + dd_real(37.)*ex6) + ex4*(-dd_real(55.) + dd_real(83.)*ex6 - dd_real(10.)*pow(ex6,2)) + ex3*(-dd_real(23.) + dd_real(13.)*pow(ex4,3) + dd_real(75.)*ex6 - dd_real(69.)*pow(ex6,2) + dd_real(17.)*pow(ex6,3) - dd_real(3.)*pow(ex4,2)*(dd_real(15.) + ex6) - dd_real(3.)*ex4*(dd_real(27.) - dd_real(40.)*ex6 + dd_real(9.)*pow(ex6,2)))) + pow(ex2,2)*(dd_real(1.) + ex3)*(-dd_real(12.)*pow(ex4,4) - dd_real(3.)*(-dd_real(1.) + ex6)*pow(ex6,2) + pow(ex4,3)*(dd_real(23.) + dd_real(7.)*ex6) + ex4*ex6*(-dd_real(32.) + dd_real(55.)*ex6 - dd_real(17.)*pow(ex6,2)) + pow(ex4,2)*(dd_real(29.) - dd_real(75.)*ex6 + dd_real(22.)*pow(ex6,2)) + ex3*(dd_real(10.)*pow(ex4,4) + pow(ex4,3)*(dd_real(135.) - dd_real(71.)*ex6) - dd_real(6.)*(-dd_real(1.) + ex6)*pow(ex6,2) + pow(ex4,2)*(dd_real(162.) - dd_real(331.)*ex6 + dd_real(112.)*pow(ex6,2)) + ex4*(dd_real(46.) - dd_real(188.)*ex6 + dd_real(202.)*pow(ex6,2) - dd_real(51.)*pow(ex6,3))) + pow(ex3,2)*(dd_real(22.)*pow(ex4,4) + pow(ex4,3)*(dd_real(132.) - dd_real(78.)*ex6) - dd_real(3.)*(-dd_real(1.) + ex6)*pow(ex6,2) + dd_real(6.)*pow(ex4,2)*(dd_real(26.) - dd_real(46.)*ex6 + dd_real(15.)*pow(ex6,2)) + ex4*(dd_real(46.) - dd_real(156.)*ex6 + dd_real(147.)*pow(ex6,2) - dd_real(34.)*pow(ex6,3)))) - dd_real(1.)*ex2*pow(dd_real(1.) + ex3,2)*ex4*(dd_real(17.)*pow(ex4,4) + pow(ex4,3)*(dd_real(52.) - dd_real(51.)*ex6) - dd_real(6.)*(-dd_real(1.) + ex6)*pow(ex6,2) + ex4*ex6*(-dd_real(38.) + dd_real(64.)*ex6 - dd_real(17.)*pow(ex6,2)) + pow(ex4,2)*(dd_real(32.) - dd_real(110.)*ex6 + dd_real(51.)*pow(ex6,2)) + ex3*(dd_real(17.)*pow(ex4,4) + pow(ex4,3)*(dd_real(75.) - dd_real(51.)*ex6) - dd_real(6.)*(-dd_real(1.) + ex6)*pow(ex6,2) + dd_real(3.)*pow(ex4,2)*(dd_real(27.) - dd_real(52.)*ex6 + dd_real(17.)*pow(ex6,2)) + ex4*(dd_real(23.) - dd_real(87.)*ex6 + dd_real(87.)*pow(ex6,2) - dd_real(17.)*pow(ex6,3))));
return res;
}
