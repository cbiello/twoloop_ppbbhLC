#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn113(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(3.)*pow(ex2,7)*pow(ex3,3) - dd_real(60.)*pow(dd_real(1.) + ex3,3)*pow(ex4,3) - dd_real(3.)*pow(ex2,6)*pow(ex3,2)*(dd_real(2.)*ex4 + ex3*(-dd_real(23.) + dd_real(3.)*ex4)) - dd_real(3.)*ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(40.)*ex4 + ex3*(-dd_real(60.) + dd_real(61.)*ex4)) + dd_real(3.)*pow(ex2,5)*ex3*(pow(ex4,2) + dd_real(2.)*ex3*ex4*(-dd_real(23.) + dd_real(2.)*ex4) + dd_real(3.)*pow(ex3,2)*(dd_real(21.) - dd_real(23.)*ex4 + pow(ex4,2))) - dd_real(3.)*pow(ex2,2)*(dd_real(1.) + ex3)*ex4*(dd_real(20.)*pow(ex4,2) + ex3*ex4*(-dd_real(141.) + dd_real(83.)*ex4) + dd_real(3.)*pow(ex3,2)*(dd_real(20.) - dd_real(61.)*ex4 + dd_real(21.)*pow(ex4,2))) - dd_real(3.)*pow(ex2,4)*ex3*((-dd_real(23.) + ex4)*pow(ex4,2) + dd_real(2.)*ex3*ex4*(dd_real(73.) - dd_real(46.)*ex4 + pow(ex4,2)) + pow(ex3,2)*(-dd_real(61.) + dd_real(189.)*ex4 - dd_real(69.)*pow(ex4,2) + pow(ex4,3))) - dd_real(1.)*pow(ex2,3)*(dd_real(4.)*pow(ex4,3) + dd_real(3.)*ex3*pow(ex4,2)*(-dd_real(103.) + dd_real(23.)*ex4) + dd_real(6.)*pow(ex3,2)*ex4*(dd_real(81.) - dd_real(146.)*ex4 + dd_real(23.)*pow(ex4,2)) + pow(ex3,3)*(-dd_real(60.) + dd_real(549.)*ex4 - dd_real(567.)*pow(ex4,2) + dd_real(69.)*pow(ex4,3)));
return res;
}
