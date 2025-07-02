#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn235(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(3.)*(dd_real(1.) + ex3)*ex4 + ex2*(-dd_real(6.) + dd_real(23.)*ex4 + dd_real(6.)*ex6 + ex3*(-dd_real(6.) + dd_real(11.)*ex4 + dd_real(6.)*ex6));
return res;
}
