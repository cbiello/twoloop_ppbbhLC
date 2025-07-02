#include <iostream>
#include "listYgg2Lnf0pppp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppp33(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(39.)*pow(ex2,6)*pow(ex3,3) + pow(ex2,5)*pow(ex3,2)*(-dd_real(117.)*ex3*(-dd_real(1.) + ex4) - dd_real(43.)*ex4) - dd_real(1.)*pow(dd_real(1.) + ex3,2)*(dd_real(39.)*ex3 - dd_real(41.)*ex4)*pow(ex4,3) - dd_real(1.)*ex2*(dd_real(1.) + ex3)*pow(ex4,2)*(dd_real(117.)*pow(ex3,2)*(-dd_real(1.) + ex4) + dd_real(41.)*ex4 + ex3*(-dd_real(39.) + dd_real(162.)*ex4 - dd_real(82.)*pow(ex4,2))) + pow(ex2,4)*ex3*(dd_real(3.)*pow(ex4,2) + ex3*ex4*(-dd_real(164.) + dd_real(125.)*ex4) + dd_real(117.)*pow(ex3,2)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2))) - dd_real(1.)*pow(ex2,2)*ex4*(dd_real(2.)*pow(ex4,2) + ex3*ex4*(-dd_real(123.) + dd_real(166.)*ex4) + dd_real(117.)*pow(ex3,3)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2)) + pow(ex3,2)*(dd_real(78.) - dd_real(437.)*ex4 + dd_real(324.)*pow(ex4,2) - dd_real(41.)*pow(ex4,3))) - dd_real(1.)*pow(ex2,3)*(pow(ex4,3) + ex3*pow(ex4,2)*(-dd_real(87.) + dd_real(2.)*ex4) + pow(ex3,2)*ex4*(dd_real(199.) - dd_real(406.)*ex4 + dd_real(123.)*pow(ex4,2)) + dd_real(39.)*pow(ex3,3)*(-dd_real(1.) + dd_real(9.)*ex4 - dd_real(9.)*pow(ex4,2) + pow(ex4,3)));
return res;
}
