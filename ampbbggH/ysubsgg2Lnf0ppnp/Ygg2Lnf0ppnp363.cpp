#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp363(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(2.)*(dd_real(27.) + dd_real(9.)*ex3 + dd_real(2.)*pow(ex3,2))*pow(ex4,3) + dd_real(4.)*pow(ex2,5)*pow(ex3,2)*(-dd_real(1.) + ex6) + ex2*pow(ex4,2)*(-dd_real(54.) + dd_real(131.)*ex4 + dd_real(31.)*ex6 + dd_real(4.)*pow(ex3,2)*(-dd_real(3.) + dd_real(2.)*ex4 + ex6) + ex3*(-dd_real(36.) + dd_real(28.)*ex4 + dd_real(26.)*ex6)) - dd_real(2.)*pow(ex2,4)*ex3*(ex4*(-dd_real(5.) + dd_real(9.)*ex6) + ex3*(dd_real(4.) - dd_real(4.)*ex6 + ex4*(-dd_real(6.) + dd_real(4.)*ex6))) + dd_real(2.)*pow(ex2,3)*(dd_real(2.)*pow(ex3,2)*(-dd_real(1.) + ex4*(dd_real(6.) - dd_real(4.)*ex6) + pow(ex4,2)*(-dd_real(3.) + ex6) + ex6) + dd_real(9.)*pow(ex4,2)*(-dd_real(5.) + dd_real(3.)*ex6) + ex3*ex4*(dd_real(14.) - dd_real(22.)*ex6 + ex4*(-dd_real(10.) + dd_real(9.)*ex6))) + pow(ex2,2)*ex4*(dd_real(4.)*pow(ex3,2)*(dd_real(3.) + pow(ex4,2) + dd_real(2.)*ex4*(-dd_real(3.) + ex6) - dd_real(2.)*ex6) + ex4*(-dd_real(131.) + dd_real(90.)*ex4 + dd_real(72.)*ex6) + dd_real(2.)*ex3*(dd_real(9.) + dd_real(5.)*pow(ex4,2) - dd_real(13.)*ex6 + ex4*(-dd_real(28.) + dd_real(22.)*ex6)));
return res;
}
