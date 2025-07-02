#include <iostream>
#include "listYgg2Lnf1ppnn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1ppnn88(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(15.)*pow(ex2,4)*pow(ex3,2) + pow(ex2,3)*ex3*(dd_real(170.)*ex4 + ex3*(-dd_real(15.) + dd_real(45.)*ex4 - dd_real(30.)*ex6)) + ex4*((-dd_real(9.) + dd_real(6.)*ex3 + dd_real(15.)*pow(ex3,2))*pow(ex4,2) + (dd_real(9.) - dd_real(9.)*ex3 - dd_real(30.)*pow(ex3,2))*ex4*ex6 + ex3*(dd_real(3.) + dd_real(15.)*ex3)*pow(ex6,2)) + ex2*((dd_real(77.) + dd_real(80.)*ex3 + dd_real(15.)*pow(ex3,2))*pow(ex4,3) + pow(ex4,2)*(-dd_real(69.) + ex3*(-dd_real(102.) - dd_real(157.)*ex6) + pow(ex3,2)*(-dd_real(45.) - dd_real(30.)*ex6) - dd_real(77.)*ex6) - dd_real(15.)*pow(ex3,2)*pow(ex6,2) + ex3*ex4*ex6*(dd_real(99.) + dd_real(77.)*ex6 + ex3*(dd_real(60.) + dd_real(15.)*ex6))) + pow(ex2,2)*(-dd_real(155.)*pow(ex4,2) + ex3*ex4*(dd_real(96.) - dd_real(250.)*ex4 + dd_real(247.)*ex6) + pow(ex3,2)*(-dd_real(45.)*pow(ex4,2) + (-dd_real(30.) - dd_real(15.)*ex6)*ex6 + ex4*(dd_real(45.) + dd_real(60.)*ex6)));
return res;
}
