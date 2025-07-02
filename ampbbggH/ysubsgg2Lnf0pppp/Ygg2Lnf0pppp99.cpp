#include <iostream>
#include "listYgg2Lnf0pppp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppp99(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(45.)*pow(ex2,3)*ex3 + dd_real(45.)*(dd_real(1.) + ex3)*pow(ex4,2) + ex2*ex4*(ex3*(-dd_real(90.) + dd_real(329.)*ex4 - dd_real(284.)*ex6) + dd_real(9.)*(-dd_real(12.) + dd_real(10.)*ex4 - dd_real(5.)*ex6)) + pow(ex2,2)*(-dd_real(291.)*ex4 + ex3*(dd_real(45.) - dd_real(545.)*ex4 + dd_real(284.)*ex6));
return res;
}
