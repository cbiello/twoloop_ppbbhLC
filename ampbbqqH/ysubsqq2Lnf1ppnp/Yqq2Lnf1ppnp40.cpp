#include <iostream>
#include "listYqq2Lnf1ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Yqq2Lnf1ppnp40(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(17.)*ex2*ex3 + dd_real(17.)*pow(ex2,2)*ex3 - dd_real(17.)*ex4 + dd_real(31.)*ex2*ex4 - dd_real(17.)*ex3*ex4 - dd_real(17.)*ex2*ex3*ex4;
return res;
}
