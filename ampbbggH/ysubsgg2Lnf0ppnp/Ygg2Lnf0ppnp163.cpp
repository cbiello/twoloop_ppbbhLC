#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp163(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(8.)*(-dd_real(1.) + pow(ex3,2))*pow(ex4,4) + ex2*pow(ex4,3)*(dd_real(19.) - dd_real(10.)*ex6 - dd_real(6.)*ex3*(-dd_real(3.) + dd_real(2.)*ex6) + pow(ex3,2)*(-dd_real(33.) + dd_real(14.)*ex6)) + pow(ex2,4)*(-dd_real(1.) + ex6)*(-dd_real(1.) + ex6 + pow(ex3,2)*(-dd_real(9.) + dd_real(6.)*ex6) + ex3*(dd_real(14.) - dd_real(13.)*ex6 + dd_real(2.)*pow(ex6,2))) + pow(ex2,2)*pow(ex4,2)*(-dd_real(13.) + dd_real(13.)*ex6 - dd_real(2.)*pow(ex6,2) + pow(ex3,2)*(dd_real(51.) - dd_real(43.)*ex6 + dd_real(6.)*pow(ex6,2)) - dd_real(2.)*ex3*(dd_real(25.) - dd_real(27.)*ex6 + dd_real(6.)*pow(ex6,2))) - dd_real(1.)*pow(ex2,3)*ex4*(-dd_real(1.) + ex6 + pow(ex3,2)*(dd_real(35.) - dd_real(44.)*ex6 + dd_real(12.)*pow(ex6,2)) + ex3*(-dd_real(46.) + dd_real(69.)*ex6 - dd_real(27.)*pow(ex6,2) + dd_real(2.)*pow(ex6,3)));
return res;
}
