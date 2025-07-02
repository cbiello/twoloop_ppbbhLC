#include <qd/qd_real.h>
#include <iostream>
#include "listYgg1Lnf0ppnp.h" 
#include <complex>
std::complex<dd_real> Ygg1Lnf0ppnp34(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(3.)*pow(ex2,2)*ex3 + dd_real(3.)*pow(ex2,3)*ex3 - dd_real(5.)*ex2*ex4 - dd_real(7.)*pow(ex2,2)*ex4 - dd_real(6.)*ex2*ex3*ex4 - dd_real(6.)*pow(ex2,2)*ex3*ex4 + dd_real(3.)*pow(ex4,2) + dd_real(5.)*ex2*pow(ex4,2) + dd_real(3.)*ex3*pow(ex4,2) + dd_real(3.)*ex2*ex3*pow(ex4,2) + dd_real(3.)*ex2*ex3*ex6 + dd_real(3.)*pow(ex2,2)*ex3*ex6 - dd_real(3.)*ex4*ex6 - dd_real(5.)*ex2*ex4*ex6 - dd_real(3.)*ex3*ex4*ex6 - dd_real(3.)*ex2*ex3*ex4*ex6;
return res;
}
