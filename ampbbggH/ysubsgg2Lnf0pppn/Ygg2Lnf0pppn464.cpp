#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn464(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(6.)*pow(ex2,5)*pow(ex3,2) + dd_real(3.)*(-dd_real(2.) - dd_real(1.)*ex3 + pow(ex3,2))*pow(ex4,2) - dd_real(6.)*pow(ex2,4)*ex3*(ex4 + ex3*(-dd_real(3.) + dd_real(2.)*ex4)) + ex2*ex3*ex4*(dd_real(3.) + dd_real(6.)*ex4 + ex3*(-dd_real(6.) + dd_real(19.)*ex4)) + pow(ex2,3)*ex3*(dd_real(6.)*(-dd_real(1.) + ex4)*ex4 + ex3*(dd_real(19.) - dd_real(36.)*ex4 + dd_real(6.)*pow(ex4,2))) + pow(ex2,2)*(dd_real(6.)*ex3*(-dd_real(1.) + ex4)*ex4 - dd_real(12.)*pow(ex4,2) + pow(ex3,2)*(dd_real(3.) - dd_real(38.)*ex4 + dd_real(18.)*pow(ex4,2)));
return res;
}
