#include <iostream>
#include "listYgg2Lnf0pppp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppp91(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(144.)*pow(ex2,4)*pow(ex3,2) - dd_real(144.)*(dd_real(1.) + ex3)*(ex3 - dd_real(1.)*ex4)*pow(ex4,2) + pow(ex2,3)*ex3*(dd_real(228.)*ex4 + ex3*(-dd_real(288.) + dd_real(671.)*ex4 - dd_real(383.)*ex6)) + ex2*ex4*(dd_real(9.)*ex4*(-dd_real(32.) + dd_real(10.)*ex4 - dd_real(5.)*ex6) + pow(ex3,2)*(dd_real(288.) - dd_real(671.)*ex4 + dd_real(383.)*ex6) + ex3*(dd_real(288.) - dd_real(504.)*ex4 + dd_real(527.)*pow(ex4,2) + dd_real(45.)*ex6 - dd_real(383.)*ex4*ex6)) + pow(ex2,2)*(-dd_real(102.)*pow(ex4,2) + ex3*ex4*(dd_real(516.) - dd_real(743.)*ex4 + dd_real(428.)*ex6) + pow(ex3,2)*(-dd_real(144.) - dd_real(527.)*pow(ex4,2) - dd_real(383.)*ex6 + ex4*(dd_real(959.) + dd_real(383.)*ex6)));
return res;
}
