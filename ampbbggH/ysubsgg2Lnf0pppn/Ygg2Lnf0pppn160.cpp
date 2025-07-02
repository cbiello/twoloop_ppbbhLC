#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn160(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(2.)*pow(ex2,2)*(dd_real(9.) + dd_real(97.)*ex3) - dd_real(1.)*ex2*(dd_real(144.) + dd_real(293.)*ex4 + dd_real(2.)*ex3*(dd_real(72.) + dd_real(266.)*ex4 - dd_real(169.)*ex6) - dd_real(338.)*ex6) + dd_real(2.)*(dd_real(1.) + ex3)*ex4*(dd_real(72.) + dd_real(169.)*ex4 - dd_real(169.)*ex6);
return res;
}
