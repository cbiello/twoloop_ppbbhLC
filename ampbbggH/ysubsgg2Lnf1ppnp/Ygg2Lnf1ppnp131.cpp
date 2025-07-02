#include <iostream>
#include "listYgg2Lnf1ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf1ppnp131(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,6)*pow(ex3,2)*(dd_real(10.) + dd_real(17.)*ex3 + dd_real(16.)*pow(ex3,2)) + pow(ex2,5)*pow(ex3,2)*(dd_real(37.) + pow(ex3,2)*(dd_real(58.) - dd_real(32.)*ex4) - dd_real(43.)*ex3*(-dd_real(2.) + ex4) - dd_real(17.)*ex4) + dd_real(10.)*pow(dd_real(1.) + ex3,4)*pow(ex4,2) + dd_real(2.)*ex2*pow(dd_real(1.) + ex3,3)*ex4*(dd_real(13.)*ex4 + ex3*(-dd_real(10.) + dd_real(23.)*ex4)) + pow(ex2,4)*ex3*(dd_real(1.) + ex3)*(-dd_real(17.)*ex4 + dd_real(2.)*pow(ex3,2)*(dd_real(39.) - dd_real(58.)*ex4 + dd_real(8.)*pow(ex4,2)) + ex3*(dd_real(63.) - dd_real(106.)*ex4 + dd_real(10.)*pow(ex4,2))) + pow(ex2,3)*ex3*pow(dd_real(1.) + ex3,2)*(ex4*(-dd_real(63.) + dd_real(20.)*ex4) + dd_real(2.)*ex3*(dd_real(23.) - dd_real(78.)*ex4 + dd_real(29.)*pow(ex4,2))) + dd_real(2.)*pow(ex2,2)*pow(dd_real(1.) + ex3,2)*(dd_real(5.)*pow(ex4,2) + dd_real(3.)*ex3*ex4*(-dd_real(12.) + dd_real(13.)*ex4) + pow(ex3,2)*(dd_real(5.) - dd_real(46.)*ex4 + dd_real(39.)*pow(ex4,2)));
return res;
}
