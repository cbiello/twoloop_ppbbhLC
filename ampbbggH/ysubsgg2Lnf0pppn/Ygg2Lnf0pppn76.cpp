#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn76(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(1.)*ex4*(dd_real(843.) + dd_real(2.)*ex3*(dd_real(673.) + dd_real(120.)*ex4 - dd_real(120.)*ex6)) + ex2*(dd_real(975.) + dd_real(2.)*ex3*(dd_real(673.) + dd_real(120.)*ex4 - dd_real(120.)*ex6));
return res;
}
