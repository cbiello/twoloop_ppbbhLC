#include <iostream>
#include "listYgg2Lnf1ppnn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1ppnn95(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(12.)*pow(dd_real(1.) + dd_real(1.)*ex3,2)*pow(ex4,2) + pow(ex2,3)*(dd_real(152.) + dd_real(152.)*ex4 + ex3*(dd_real(226.) + dd_real(86.)*ex4 - dd_real(226.)*ex6) + pow(ex3,2)*(dd_real(74.) + dd_real(12.)*ex4 - dd_real(74.)*ex6) - dd_real(152.)*ex6) + ex2*ex4*(dd_real(24.) + dd_real(89.)*ex4 + ex3*(dd_real(48.) + dd_real(151.)*ex4 - dd_real(24.)*ex6) + pow(ex3,2)*(dd_real(24.) + dd_real(62.)*ex4 - dd_real(12.)*ex6) - dd_real(12.)*ex6) + pow(ex2,2)*(-dd_real(12.) - dd_real(77.)*pow(ex4,2) + dd_real(12.)*ex6 + ex4*(-dd_real(241.) + dd_real(77.)*ex6) + pow(ex3,2)*(-dd_real(12.) - dd_real(12.)*pow(ex4,2) + dd_real(12.)*ex6 + ex4*(-dd_real(136.) + dd_real(74.)*ex6)) + ex3*(-dd_real(24.) - dd_real(74.)*pow(ex4,2) + dd_real(24.)*ex6 + ex4*(-dd_real(377.) + dd_real(151.)*ex6)));
return res;
}
