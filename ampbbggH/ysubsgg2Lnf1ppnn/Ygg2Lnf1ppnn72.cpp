#include <iostream>
#include "listYgg2Lnf1ppnn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1ppnn72(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(70.)*pow(ex2,3)*ex3 + (dd_real(12.) + dd_real(12.)*ex3)*pow(ex4,2) + pow(ex2,2)*(dd_real(70.)*ex4 + ex3*(-dd_real(33.) + dd_real(95.)*ex4 - dd_real(101.)*ex6)) + (-dd_real(12.) - dd_real(18.)*ex3)*ex4*ex6 + dd_real(6.)*ex3*pow(ex6,2) + ex2*((-dd_real(31.) - dd_real(25.)*ex3)*pow(ex4,2) + ex3*(-dd_real(27.) - dd_real(31.)*ex6)*ex6 + ex4*(dd_real(27.) + dd_real(31.)*ex6 + ex3*(dd_real(21.) + dd_real(56.)*ex6)));
return res;
}
