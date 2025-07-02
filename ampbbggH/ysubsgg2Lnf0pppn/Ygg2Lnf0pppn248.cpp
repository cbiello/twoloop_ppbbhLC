#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn248(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(3.)*(dd_real(1.) + ex3)*pow(ex4,2) + ex2*ex4*(dd_real(15.) + dd_real(7.)*ex4 + ex3*(dd_real(15.) - dd_real(5.)*ex4 - dd_real(12.)*ex6) - dd_real(12.)*ex6) + pow(ex2,2)*(dd_real(2.)*(-dd_real(6.) + ex4 + dd_real(6.)*ex6) + ex3*(-dd_real(12.) + dd_real(5.)*ex4 + dd_real(12.)*ex6));
return res;
}
