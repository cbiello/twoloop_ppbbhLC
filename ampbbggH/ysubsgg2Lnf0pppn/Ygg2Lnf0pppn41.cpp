#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn41(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(24.)*pow(dd_real(1.) + ex3,3)*pow(ex4,3) + dd_real(240.)*pow(ex2,6)*pow(ex3,3)*(dd_real(1.) + ex4) + dd_real(24.)*ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(1.) - dd_real(9.)*ex4 - dd_real(10.)*pow(ex4,2) + ex3*(dd_real(12.) + dd_real(7.)*ex4)) - dd_real(1.)*pow(ex2,5)*pow(ex3,2)*(dd_real(181.) + dd_real(661.)*ex4 + dd_real(480.)*pow(ex4,2) + dd_real(24.)*ex3*(-dd_real(30.) - dd_real(9.)*ex4 + dd_real(20.)*pow(ex4,2))) + pow(ex2,2)*(dd_real(1.) + ex3)*ex4*(dd_real(24.)*pow(ex3,2)*(-dd_real(21.) + dd_real(16.)*ex4 + dd_real(27.)*pow(ex4,2)) - dd_real(5.)*ex4*(dd_real(41.) + dd_real(89.)*ex4 + dd_real(48.)*pow(ex4,2)) + ex3*(dd_real(157.) + dd_real(1213.)*ex4 + dd_real(528.)*pow(ex4,2) - dd_real(480.)*pow(ex4,3))) + pow(ex2,4)*ex3*(dd_real(8.)*ex4*(dd_real(103.) + dd_real(133.)*ex4 + dd_real(30.)*pow(ex4,2)) + dd_real(24.)*pow(ex3,2)*(dd_real(30.) - dd_real(33.)*ex4 - dd_real(48.)*pow(ex4,2) + dd_real(10.)*pow(ex4,3)) + ex3*(-dd_real(362.) - dd_real(1669.)*ex4 - dd_real(563.)*pow(ex4,2) + dd_real(720.)*pow(ex4,3))) + pow(ex2,3)*(-dd_real(619.)*pow(ex4,2)*(dd_real(1.) + ex4) + ex3*ex4*(dd_real(981.) + dd_real(1736.)*ex4 + dd_real(515.)*pow(ex4,2) - dd_real(240.)*pow(ex4,3)) + dd_real(24.)*pow(ex3,3)*(dd_real(10.) - dd_real(53.)*ex4 - dd_real(24.)*pow(ex4,2) + dd_real(29.)*pow(ex4,3)) + pow(ex3,2)*(-dd_real(181.) - dd_real(1355.)*ex4 + dd_real(914.)*pow(ex4,2) + dd_real(1704.)*pow(ex4,3) - dd_real(240.)*pow(ex4,4)));
return res;
}
