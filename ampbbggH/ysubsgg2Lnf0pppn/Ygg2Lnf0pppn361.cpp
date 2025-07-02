#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn361(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
ex4*(dd_real(7.)*(dd_real(1.) + ex3)*pow(ex4,2) + ex4*(dd_real(7.) + ex3*(dd_real(7.) - dd_real(14.)*ex6) - dd_real(9.)*ex6) + dd_real(5.)*ex6) + pow(ex2,2)*ex3*(dd_real(7.) + dd_real(3.)*ex6 + ex4*(dd_real(7.) + dd_real(17.)*ex6)) - dd_real(1.)*ex2*(ex4*(dd_real(7.) + ex3*(dd_real(14.) - dd_real(17.)*ex6) - dd_real(11.)*ex6) - dd_real(3.)*(dd_real(1.) + ex3)*ex6 + pow(ex4,2)*(dd_real(7.) + dd_real(6.)*ex6 + dd_real(14.)*ex3*(dd_real(1.) + ex6)));
return res;
}
