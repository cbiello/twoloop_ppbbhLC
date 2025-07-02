#include <iostream>
#include "listYgg2Lnf0pppp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppp21(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(1749.)*pow(ex2,5)*pow(ex3,2) + dd_real(1749.)*pow(dd_real(1.) + ex3,2)*pow(ex4,3) + pow(ex2,4)*ex3*(dd_real(3329.)*ex4 + ex3*(-dd_real(3498.) + dd_real(5347.)*ex4 - dd_real(100.)*ex6)) + ex2*(dd_real(1.) + ex3)*pow(ex4,2)*(-dd_real(3444.) + dd_real(3498.)*ex4 + ex3*(-dd_real(5247.) + dd_real(3598.)*ex4 - dd_real(100.)*ex6) - dd_real(1749.)*ex6) + pow(ex2,3)*(-dd_real(36.)*pow(ex4,2) + ex3*ex4*(dd_real(8522.) - dd_real(6827.)*ex4 + dd_real(1749.)*ex6) + pow(ex3,2)*(-dd_real(1749.) - dd_real(5447.)*pow(ex4,2) - dd_real(100.)*ex6 + dd_real(2.)*ex4*(dd_real(5297.) + dd_real(100.)*ex6))) + pow(ex2,2)*ex4*(-dd_real(3329.)*ex4 + pow(ex3,2)*(dd_real(5247.) + dd_real(1849.)*pow(ex4,2) + dd_real(200.)*ex6 - dd_real(2.)*ex4*(dd_real(5347.) + dd_real(50.)*ex6)) + ex3*(dd_real(5193.) + dd_real(3498.)*pow(ex4,2) + dd_real(1849.)*ex6 - dd_real(3.)*ex4*(dd_real(5206.) + dd_real(583.)*ex6)));
return res;
}
