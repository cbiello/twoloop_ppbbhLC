#include <iostream>
#include "listYgg2Lnf1ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf1ppnp76(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(33.)*pow(ex2,4)*pow(ex3,2) - dd_real(3.)*(dd_real(1.) + ex3)*ex4*(ex4 - dd_real(1.)*ex6)*((dd_real(9.) + dd_real(11.)*ex3)*ex4 - dd_real(11.)*ex3*ex6) + pow(ex2,3)*ex3*(-dd_real(148.)*ex4 + ex3*(dd_real(33.) - dd_real(99.)*ex4 + dd_real(66.)*ex6)) + pow(ex2,2)*(dd_real(115.)*pow(ex4,2) + ex3*ex4*(-dd_real(74.) + dd_real(282.)*ex4 - dd_real(255.)*ex6) + dd_real(33.)*pow(ex3,2)*(dd_real(3.)*pow(ex4,2) + ex6*(dd_real(2.) + ex6) - dd_real(1.)*ex4*(dd_real(3.) + dd_real(4.)*ex6))) + ex2*(-dd_real(1.)*(dd_real(107.) + dd_real(134.)*ex3 + dd_real(33.)*pow(ex3,2))*pow(ex4,3) + dd_real(33.)*pow(ex3,2)*pow(ex6,2) - dd_real(1.)*ex3*ex4*ex6*(dd_real(107.)*(dd_real(1.) + ex6) + dd_real(33.)*ex3*(dd_real(4.) + ex6)) + pow(ex4,2)*(dd_real(35.) + dd_real(107.)*ex6 + dd_real(33.)*pow(ex3,2)*(dd_real(3.) + dd_real(2.)*ex6) + ex3*(dd_real(134.) + dd_real(241.)*ex6)));
return res;
}
