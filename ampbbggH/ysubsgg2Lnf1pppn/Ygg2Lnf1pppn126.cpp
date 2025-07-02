#include <iostream>
#include "listYgg2Lnf1pppn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppn126(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(2.)*pow(ex2,5)*pow(ex3,3) - dd_real(3.)*pow(ex2,4)*pow(ex3,2)*(dd_real(25.) + dd_real(2.)*ex3)*ex4 - dd_real(72.)*pow(dd_real(1.) + ex3,2)*pow(ex4,3) - dd_real(3.)*ex2*(dd_real(1.) + ex3)*pow(ex4,2)*(dd_real(48.)*ex3*(-dd_real(1.) + ex4) + dd_real(19.)*ex4) + dd_real(6.)*pow(ex2,3)*ex3*ex4*(dd_real(10.)*ex4 + pow(ex3,2)*ex4 + ex3*(-dd_real(24.) + dd_real(25.)*ex4)) + pow(ex2,2)*ex4*(dd_real(3.)*ex3*(dd_real(67.) - dd_real(20.)*ex4)*ex4 + dd_real(18.)*pow(ex4,2) - dd_real(2.)*pow(ex3,3)*pow(ex4,2) - dd_real(3.)*pow(ex3,2)*(dd_real(24.) - dd_real(96.)*ex4 + dd_real(25.)*pow(ex4,2)));
return res;
}
