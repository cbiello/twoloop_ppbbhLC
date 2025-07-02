#include <iostream>
#include "listYgg2Lnf0pppp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppp102(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(109.)*pow(ex2,3)*pow(ex3,2)*(dd_real(1.) + ex4) - dd_real(1.)*ex4*(dd_real(127.)*pow(ex3,2)*(dd_real(1.) + ex4) + pow(ex4,2)*(dd_real(127.) + dd_real(118.)*ex4) - dd_real(1.)*ex3*ex4*(dd_real(260.) + dd_real(251.)*ex4)) + pow(ex2,2)*ex3*(-dd_real(1.)*ex4*(dd_real(224.) + dd_real(215.)*ex4) + ex3*(dd_real(218.) + dd_real(91.)*ex4 - dd_real(127.)*pow(ex4,2))) + ex2*(pow(ex4,2)*(dd_real(109.) + dd_real(100.)*ex4) + pow(ex3,2)*(dd_real(109.) - dd_real(145.)*ex4 - dd_real(254.)*pow(ex4,2)) + ex3*ex4*(-dd_real(224.) + dd_real(45.)*ex4 + dd_real(251.)*pow(ex4,2)));
return res;
}
