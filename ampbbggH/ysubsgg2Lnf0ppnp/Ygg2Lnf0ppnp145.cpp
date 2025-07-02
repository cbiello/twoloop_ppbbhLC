#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp145(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(2.)*pow(ex4,2)*(dd_real(3.)*(dd_real(36.) + dd_real(37.)*ex4 - dd_real(37.)*ex6) - dd_real(110.)*ex3*(dd_real(1.) + ex4 - dd_real(1.)*ex6)) + dd_real(220.)*pow(ex2,3)*ex3*(dd_real(1.) + ex4 - dd_real(1.)*ex6)*(-dd_real(1.) + ex6) + ex2*ex4*(-dd_real(216.) + dd_real(365.)*pow(ex4,2) + ex4*(dd_real(137.) - dd_real(286.)*ex6) + dd_real(295.)*ex6 - dd_real(79.)*pow(ex6,2) - dd_real(220.)*ex3*(-dd_real(2.) - dd_real(1.)*ex4 + pow(ex4,2) + dd_real(3.)*ex6 - dd_real(1.)*pow(ex6,2))) + pow(ex2,2)*(-dd_real(220.)*ex3*(pow(ex4,2)*(-dd_real(2.) + ex6) + pow(-dd_real(1.) + ex6,2) - dd_real(1.)*ex4*pow(-dd_real(1.) + ex6,2)) + ex4*(-dd_real(359.) + dd_real(581.)*ex6 - dd_real(222.)*pow(ex6,2) + ex4*(-dd_real(365.) + dd_real(222.)*ex6)));
return res;
}
