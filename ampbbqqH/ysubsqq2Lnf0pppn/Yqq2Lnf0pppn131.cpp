#include <iostream>
#include "listYqq2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Yqq2Lnf0pppn131(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(2.)*pow(ex2,3) + pow(ex2,4) + dd_real(2.)*pow(ex2,3)*ex4 + pow(ex2,4)*ex4 - dd_real(6.)*pow(ex4,2) - dd_real(10.)*ex2*pow(ex4,2) - dd_real(4.)*pow(ex2,2)*pow(ex4,2) - dd_real(2.)*pow(ex4,3) - dd_real(4.)*ex2*pow(ex4,3) - dd_real(2.)*pow(ex2,2)*pow(ex4,3);
return res;
}
