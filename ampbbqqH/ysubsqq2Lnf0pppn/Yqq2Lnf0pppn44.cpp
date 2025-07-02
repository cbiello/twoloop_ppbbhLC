#include <iostream>
#include "listYqq2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Yqq2Lnf0pppn44(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,2)*pow(ex4,2) + dd_real(2.)*pow(ex2,2)*ex3*pow(ex4,2) + dd_real(2.)*pow(ex2,3)*ex3*pow(ex4,2) + pow(ex2,2)*pow(ex3,2)*pow(ex4,2) - dd_real(2.)*pow(ex2,3)*pow(ex3,2)*pow(ex4,2) + pow(ex2,4)*pow(ex3,2)*pow(ex4,2) - dd_real(2.)*ex2*pow(ex4,3) - dd_real(4.)*ex2*ex3*pow(ex4,3) - dd_real(2.)*pow(ex2,2)*ex3*pow(ex4,3) - dd_real(2.)*ex2*pow(ex3,2)*pow(ex4,3) + dd_real(2.)*pow(ex2,2)*pow(ex3,2)*pow(ex4,3) + pow(ex4,4) + dd_real(2.)*ex3*pow(ex4,4) + pow(ex3,2)*pow(ex4,4) - dd_real(2.)*pow(ex2,3)*ex3*pow(ex4,2)*ex5 + dd_real(2.)*pow(ex2,3)*pow(ex3,2)*pow(ex4,2)*ex5 - dd_real(2.)*pow(ex2,4)*pow(ex3,2)*pow(ex4,2)*ex5 + dd_real(2.)*pow(ex2,2)*ex3*pow(ex4,3)*ex5 - dd_real(2.)*pow(ex2,2)*pow(ex3,2)*pow(ex4,3)*ex5 + pow(ex2,4)*pow(ex3,2)*pow(ex4,2)*pow(ex5,2) - dd_real(2.)*pow(ex2,3)*ex3*ex4*ex6 + dd_real(2.)*pow(ex2,3)*pow(ex3,2)*ex4*ex6 - dd_real(2.)*pow(ex2,4)*pow(ex3,2)*ex4*ex6 - dd_real(4.)*pow(ex2,2)*pow(ex3,2)*pow(ex4,2)*ex6 + dd_real(2.)*pow(ex2,3)*pow(ex3,2)*pow(ex4,2)*ex6 + dd_real(2.)*ex2*ex3*pow(ex4,3)*ex6 + dd_real(2.)*ex2*pow(ex3,2)*pow(ex4,3)*ex6 + dd_real(2.)*pow(ex2,4)*pow(ex3,2)*ex4*ex5*ex6 - dd_real(2.)*pow(ex2,3)*pow(ex3,2)*pow(ex4,2)*ex5*ex6 + pow(ex2,4)*pow(ex3,2)*pow(ex6,2) - dd_real(2.)*pow(ex2,3)*pow(ex3,2)*ex4*pow(ex6,2) + pow(ex2,2)*pow(ex3,2)*pow(ex4,2)*pow(ex6,2);
return res;
}
