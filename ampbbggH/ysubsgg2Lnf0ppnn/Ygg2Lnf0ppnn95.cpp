#include <iostream>
#include "listYgg2Lnf0ppnn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnn95(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(54.)*pow(ex2,4)*pow(ex3,2) - dd_real(6.)*ex4*((dd_real(53.) + dd_real(62.)*ex3 + dd_real(9.)*pow(ex3,2))*pow(ex4,2) - dd_real(1.)*(dd_real(17.) + dd_real(75.)*ex3 + dd_real(18.)*pow(ex3,2))*ex4*ex6 + ex3*(dd_real(13.) + dd_real(9.)*ex3)*pow(ex6,2)) + dd_real(2.)*pow(ex2,3)*ex3*(dd_real(677.)*ex4 + ex3*(dd_real(27.) - dd_real(81.)*ex4 + dd_real(54.)*ex6)) + pow(ex2,2)*(-dd_real(1408.)*pow(ex4,2) + dd_real(54.)*pow(ex3,2)*(dd_real(3.)*pow(ex4,2) + ex6*(dd_real(2.) + ex6) - dd_real(1.)*ex4*(dd_real(3.) + dd_real(4.)*ex6)) + ex3*ex4*(-dd_real(1547.)*ex4 + dd_real(263.)*(dd_real(3.) + dd_real(7.)*ex6))) + ex2*((dd_real(271.) + dd_real(193.)*ex3 - dd_real(54.)*pow(ex3,2))*pow(ex4,3) + dd_real(54.)*pow(ex3,2)*pow(ex6,2) + ex3*ex4*ex6*(dd_real(711.) + dd_real(487.)*ex6 - dd_real(54.)*ex3*(dd_real(4.) + ex6)) + pow(ex4,2)*(-dd_real(819.) - dd_real(487.)*ex6 + dd_real(54.)*pow(ex3,2)*(dd_real(3.) + dd_real(2.)*ex6) - dd_real(1.)*ex3*(dd_real(417.) + dd_real(680.)*ex6)));
return res;
}
