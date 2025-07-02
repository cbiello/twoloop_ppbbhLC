#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp143(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(117.)*pow(ex2,5)*pow(ex3,2) + dd_real(117.)*pow(ex2,4)*ex3*(dd_real(4.) + dd_real(7.)*ex3) - dd_real(1.)*pow(dd_real(1.) + ex3,2)*(-dd_real(38.) + dd_real(169.)*ex3) + ex2*(dd_real(498.) + dd_real(765.)*ex3 - dd_real(240.)*pow(ex3,2) - dd_real(507.)*pow(ex3,3)) + pow(ex2,2)*(dd_real(786.) + dd_real(2229.)*ex3 + dd_real(1005.)*pow(ex3,2) - dd_real(507.)*pow(ex3,3)) + pow(ex2,3)*(dd_real(390.) + dd_real(1839.)*ex3 + dd_real(1647.)*pow(ex3,2) - dd_real(169.)*pow(ex3,3));
return res;
}
