#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp61(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
(dd_real(1.) - dd_real(5.)*ex3 - dd_real(5.)*pow(ex3,2) + pow(ex3,3))*pow(ex4,3) + pow(ex2,4)*ex3*(dd_real(1.) + pow(ex3,2) + dd_real(3.)*ex3*(-dd_real(2.) + ex6) - dd_real(1.)*ex6)*(-dd_real(1.) + ex6) + ex2*pow(ex4,2)*(ex3*(dd_real(5.) - dd_real(3.)*ex4 - dd_real(3.)*ex6) + dd_real(2.)*(-dd_real(1.) + ex6) + pow(ex3,3)*(-dd_real(3.) + ex4 + ex6) - dd_real(2.)*pow(ex3,2)*(-dd_real(10.) + ex4 + dd_real(6.)*ex6)) + pow(ex2,2)*ex4*(pow(ex3,3)*(dd_real(3.) + ex4*(-dd_real(3.) + ex6) - dd_real(2.)*ex6) + pow(-dd_real(1.) + ex6,2) - dd_real(1.)*ex3*(dd_real(1.) + ex4 - dd_real(1.)*ex6)*(-dd_real(5.) + dd_real(3.)*ex6) + pow(ex3,2)*(-dd_real(25.) + ex4*(dd_real(10.) - dd_real(6.)*ex6) + dd_real(28.)*ex6 - dd_real(6.)*pow(ex6,2))) + pow(ex2,3)*ex3*(pow(ex3,2)*(-dd_real(1.) + ex4*(dd_real(3.) - dd_real(2.)*ex6) + ex6) + (-dd_real(1.) + ex6)*(dd_real(5.) + ex4 - dd_real(6.)*ex6 + pow(ex6,2)) + ex3*(ex4*(-dd_real(14.) + dd_real(15.)*ex6 - dd_real(3.)*pow(ex6,2)) + dd_real(2.)*(dd_real(5.) - dd_real(8.)*ex6 + dd_real(3.)*pow(ex6,2))));
return res;
}
