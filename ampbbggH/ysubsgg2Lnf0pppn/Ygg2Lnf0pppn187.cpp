#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn187(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
(dd_real(1.) + ex3)*pow(ex4,2)*(dd_real(1895.)*ex4 + ex3*(dd_real(914.)*ex4 + dd_real(216.)*(-dd_real(1.) + ex6)) + dd_real(216.)*(-dd_real(1.) + ex6)) + pow(ex2,2)*(dd_real(1859.)*pow(ex4,2) + ex3*(dd_real(962.)*pow(ex4,2) - dd_real(2581.)*ex4*(-dd_real(1.) + ex6) - dd_real(432.)*pow(-dd_real(1.) + ex6,2)) + pow(ex3,2)*(dd_real(24.)*pow(ex4,2) - dd_real(938.)*ex4*(-dd_real(1.) + ex6) - dd_real(216.)*pow(-dd_real(1.) + ex6,2)) - dd_real(1643.)*ex4*(-dd_real(1.) + ex6) - dd_real(216.)*pow(-dd_real(1.) + ex6,2)) + ex2*ex4*(-dd_real(1895.)*pow(ex4,2) + ex4*(-dd_real(3538.) + dd_real(1679.)*ex6) + dd_real(216.)*(dd_real(2.) - dd_real(3.)*ex6 + pow(ex6,2)) + pow(ex3,2)*(-dd_real(24.)*pow(ex4,2) + dd_real(2.)*ex4*(-dd_real(926.) + dd_real(469.)*ex6) + dd_real(216.)*(dd_real(2.) - dd_real(3.)*ex6 + pow(ex6,2))) + ex3*(-dd_real(938.)*pow(ex4,2) + ex4*(-dd_real(5390.) + dd_real(2617.)*ex6) + dd_real(432.)*(dd_real(2.) - dd_real(3.)*ex6 + pow(ex6,2))));
return res;
}
