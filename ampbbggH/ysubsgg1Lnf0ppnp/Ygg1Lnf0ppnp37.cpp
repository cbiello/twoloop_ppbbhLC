#include <qd/qd_real.h>
#include <iostream>
#include "listYgg1Lnf0ppnp.h" 
#include <complex>
std::complex<dd_real> Ygg1Lnf0ppnp37(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,2)*pow(ex3,2) + dd_real(2.)*pow(ex2,3)*pow(ex3,2) + pow(ex2,4)*pow(ex3,2) - dd_real(2.)*ex2*ex3*ex4 - dd_real(7.)*pow(ex2,2)*ex3*ex4 - dd_real(5.)*pow(ex2,3)*ex3*ex4 - dd_real(2.)*ex2*pow(ex3,2)*ex4 - dd_real(4.)*pow(ex2,2)*pow(ex3,2)*ex4 - dd_real(2.)*pow(ex2,3)*pow(ex3,2)*ex4 + pow(ex4,2) + dd_real(5.)*ex2*pow(ex4,2) + dd_real(10.)*pow(ex2,2)*pow(ex4,2) + dd_real(2.)*ex3*pow(ex4,2) + dd_real(7.)*ex2*ex3*pow(ex4,2) + dd_real(5.)*pow(ex2,2)*ex3*pow(ex4,2) + pow(ex3,2)*pow(ex4,2) + dd_real(2.)*ex2*pow(ex3,2)*pow(ex4,2) + pow(ex2,2)*pow(ex3,2)*pow(ex4,2);
return res;
}
