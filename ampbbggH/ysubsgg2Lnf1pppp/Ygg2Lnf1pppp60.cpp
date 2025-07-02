#include <iostream>
#include "listYgg2Lnf1pppp.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppp60(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(15.)*pow(ex2,4)*pow(ex3,2) - dd_real(15.)*(dd_real(1.) + ex3)*(ex3 - dd_real(1.)*ex4)*pow(ex4,2) + dd_real(2.)*pow(ex2,3)*ex3*(dd_real(14.)*ex4 + ex3*(-dd_real(15.) + dd_real(64.)*ex4 - dd_real(49.)*ex6)) + ex2*ex4*(dd_real(3.)*ex4*(-dd_real(10.) + dd_real(2.)*ex4 - dd_real(1.)*ex6) + pow(ex3,2)*(dd_real(30.) - dd_real(128.)*ex4 + dd_real(98.)*ex6) + ex3*(dd_real(30.) - dd_real(39.)*ex4 + dd_real(113.)*pow(ex4,2) + dd_real(3.)*ex6 - dd_real(98.)*ex4*ex6)) + pow(ex2,2)*(-dd_real(25.)*pow(ex4,2) + ex3*ex4*(dd_real(58.) - dd_real(122.)*ex4 + dd_real(101.)*ex6) + pow(ex3,2)*(-dd_real(15.) - dd_real(113.)*pow(ex4,2) - dd_real(98.)*ex6 + dd_real(2.)*ex4*(dd_real(79.) + dd_real(49.)*ex6)));
return res;
}
