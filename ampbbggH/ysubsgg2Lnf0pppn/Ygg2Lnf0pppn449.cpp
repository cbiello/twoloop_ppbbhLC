#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn449(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,2)*pow(ex3,2)*(dd_real(22.) + dd_real(17.)*ex3 + dd_real(13.)*pow(ex3,2)) - dd_real(1.)*ex2*ex3*(dd_real(42.) + dd_real(83.)*ex3 + dd_real(67.)*pow(ex3,2) + dd_real(26.)*pow(ex3,3))*ex4 + pow(dd_real(1.) + ex3,2)*(dd_real(24.) + dd_real(24.)*ex3 + dd_real(13.)*pow(ex3,2))*pow(ex4,2);
return res;
}
