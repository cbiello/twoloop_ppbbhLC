#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp425(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(22.) + dd_real(3.)*(dd_real(19.) + dd_real(4.)*ex2)*ex3 + dd_real(3.)*(dd_real(16.) + dd_real(4.)*ex2 + pow(ex2,2))*pow(ex3,2) + dd_real(13.)*pow(ex3,3);
return res;
}
