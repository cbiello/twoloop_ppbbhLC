#include <iostream>
#include "listYgg2Lnf0ppnn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnn33(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(1.)*(dd_real(1.) + ex3)*ex4 + pow(ex2,2)*ex3*(dd_real(1.) + ex4*(-dd_real(1.) + ex5)) + ex2*(dd_real(1.) + ex3 + ex3*ex4*(-dd_real(2.) + ex5) - dd_real(1.)*ex6);
return res;
}
