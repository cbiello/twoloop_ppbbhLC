#include <iostream>
#include "listYgg2Lnf0pppp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppp110(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(54.)*pow(dd_real(1.) + ex2,3)*pow(ex3,3)*(dd_real(1.) + ex4) - dd_real(116.)*pow(ex4,2)*(dd_real(1.) + ex4) + (dd_real(1.) + ex2)*ex3*ex4*(dd_real(238.) + dd_real(301.)*ex4 + dd_real(54.)*pow(ex4,2)) - dd_real(1.)*pow(dd_real(1.) + ex2,2)*pow(ex3,2)*(dd_real(116.) + dd_real(233.)*ex4 + dd_real(108.)*pow(ex4,2));
return res;
}
