#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn294(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(3.)*pow(ex2,5)*pow(ex3,2) + dd_real(3.)*pow(ex2,4)*pow(ex3,2)*(dd_real(3.) - dd_real(2.)*ex4) + dd_real(6.)*(-dd_real(2.) + ex3)*ex3*pow(ex4,2) + ex2*ex4*(ex3*(dd_real(12.) - dd_real(23.)*ex4) - dd_real(13.)*ex4 + dd_real(4.)*pow(ex3,2)*(-dd_real(3.) + dd_real(2.)*ex4)) + pow(ex2,3)*ex3*(dd_real(6.)*ex4 + ex3*(dd_real(8.) - dd_real(18.)*ex4 + dd_real(3.)*pow(ex4,2))) + pow(ex2,2)*ex3*((dd_real(23.) - dd_real(6.)*ex4)*ex4 + ex3*(dd_real(6.) - dd_real(16.)*ex4 + dd_real(9.)*pow(ex4,2)));
return res;
}
