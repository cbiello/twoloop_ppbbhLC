#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp102(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(789.)*pow(ex2,4)*pow(ex3,2) + pow(ex2,3)*ex3*(-dd_real(3088.)*ex4 - dd_real(789.)*ex3*(-dd_real(1.) + dd_real(3.)*ex4 - dd_real(2.)*ex6)) - dd_real(3.)*ex4*((dd_real(183.) + dd_real(446.)*ex3 + dd_real(263.)*pow(ex3,2))*pow(ex4,2) - dd_real(1.)*(dd_real(255.) + dd_real(709.)*ex3 + dd_real(526.)*pow(ex3,2))*ex4*ex6 + dd_real(263.)*ex3*(dd_real(1.) + ex3)*pow(ex6,2)) + pow(ex2,2)*(dd_real(2299.)*pow(ex4,2) + ex3*ex4*(-dd_real(1958.) + dd_real(5556.)*ex4 - dd_real(5007.)*ex6) + dd_real(789.)*pow(ex3,2)*(dd_real(3.)*pow(ex4,2) + ex6*(dd_real(2.) + ex6) - dd_real(1.)*ex4*(dd_real(3.) + dd_real(4.)*ex6))) + ex2*(-dd_real(1.)*(dd_real(1703.) + dd_real(2468.)*ex3 + dd_real(789.)*pow(ex3,2))*pow(ex4,3) + dd_real(789.)*pow(ex3,2)*pow(ex6,2) - dd_real(1.)*ex3*ex4*ex6*(dd_real(2747.) + dd_real(1919.)*ex6 + dd_real(789.)*ex3*(dd_real(4.) + ex6)) + pow(ex4,2)*(dd_real(1145.) + dd_real(1919.)*ex6 + dd_real(789.)*pow(ex3,2)*(dd_real(3.) + dd_real(2.)*ex6) + ex3*(dd_real(3296.) + dd_real(4387.)*ex6)));
return res;
}
