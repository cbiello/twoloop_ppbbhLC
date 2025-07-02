#include <iostream>
#include "listYqq2Lnf1ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Yqq2Lnf1ppnp41(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(31.)*pow(ex2,2)*pow(ex3,2) + dd_real(62.)*pow(ex2,3)*pow(ex3,2) + dd_real(31.)*pow(ex2,4)*pow(ex3,2) - dd_real(62.)*ex2*ex3*ex4 - dd_real(62.)*pow(ex2,2)*ex3*ex4 - dd_real(62.)*ex2*pow(ex3,2)*ex4 - dd_real(124.)*pow(ex2,2)*pow(ex3,2)*ex4 - dd_real(62.)*pow(ex2,3)*pow(ex3,2)*ex4 + dd_real(31.)*pow(ex4,2) - dd_real(3.)*pow(ex2,2)*pow(ex4,2) + dd_real(62.)*ex3*pow(ex4,2) + dd_real(62.)*ex2*ex3*pow(ex4,2) + dd_real(31.)*pow(ex3,2)*pow(ex4,2) + dd_real(62.)*ex2*pow(ex3,2)*pow(ex4,2) + dd_real(31.)*pow(ex2,2)*pow(ex3,2)*pow(ex4,2);
return res;
}
