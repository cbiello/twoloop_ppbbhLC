#include <qd/qd_real.h>
#include <iostream>
#include "listYgg1Lnf0ppnp.h" 
#include <complex>
std::complex<dd_real> Ygg1Lnf0ppnp15(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
ex2*ex3 - dd_real(1.)*ex4 - dd_real(1.)*ex3*ex4 - dd_real(1.)*ex2*ex3*ex4 + ex2*ex3*ex4*ex5;
return res;
}
