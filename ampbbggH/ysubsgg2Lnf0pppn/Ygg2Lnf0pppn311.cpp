#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn311(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(3.)*pow(ex2,4)*pow(ex3,2) + dd_real(3.)*pow(ex2,3)*pow(ex3,2)*(dd_real(3.) - dd_real(2.)*ex4) + (dd_real(13.) - dd_real(1.)*ex3 + dd_real(10.)*pow(ex3,2))*pow(ex4,2) + ex2*ex3*ex4*(dd_real(1.) - dd_real(6.)*ex4 + ex3*(-dd_real(20.) + dd_real(9.)*ex4)) + pow(ex2,2)*ex3*(dd_real(6.)*ex4 + ex3*(dd_real(10.) - dd_real(18.)*ex4 + dd_real(3.)*pow(ex4,2)));
return res;
}
