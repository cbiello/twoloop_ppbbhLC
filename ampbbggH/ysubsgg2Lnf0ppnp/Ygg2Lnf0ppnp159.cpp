#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp159(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(981.)*pow(ex2,4)*pow(ex3,2) + pow(ex2,3)*ex3*(-dd_real(3472.)*ex4 - dd_real(981.)*ex3*(-dd_real(1.) + dd_real(3.)*ex4 - dd_real(2.)*ex6)) - dd_real(3.)*ex4*((dd_real(247.) + dd_real(574.)*ex3 + dd_real(327.)*pow(ex3,2))*pow(ex4,2) - dd_real(1.)*(dd_real(319.) + dd_real(901.)*ex3 + dd_real(654.)*pow(ex3,2))*ex4*ex6 + dd_real(327.)*ex3*(dd_real(1.) + ex3)*pow(ex6,2)) + pow(ex2,2)*(dd_real(2491.)*pow(ex4,2) + ex3*ex4*(-dd_real(2342.) + dd_real(6324.)*ex4 - dd_real(5583.)*ex6) + dd_real(981.)*pow(ex3,2)*(dd_real(3.)*pow(ex4,2) + ex6*(dd_real(2.) + ex6) - dd_real(1.)*ex4*(dd_real(3.) + dd_real(4.)*ex6))) + ex2*(-dd_real(1.)*(dd_real(1895.) + dd_real(2852.)*ex3 + dd_real(981.)*pow(ex3,2))*pow(ex4,3) + dd_real(981.)*pow(ex3,2)*pow(ex6,2) - dd_real(1.)*ex3*ex4*ex6*(dd_real(3323.) + dd_real(2111.)*ex6 + dd_real(981.)*ex3*(dd_real(4.) + ex6)) + pow(ex4,2)*(dd_real(1337.) + dd_real(2111.)*ex6 + dd_real(981.)*pow(ex3,2)*(dd_real(3.) + dd_real(2.)*ex6) + ex3*(dd_real(4064.) + dd_real(4963.)*ex6)));
return res;
}
