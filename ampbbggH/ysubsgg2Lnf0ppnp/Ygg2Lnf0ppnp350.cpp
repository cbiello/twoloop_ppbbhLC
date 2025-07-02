#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp350(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(6.)*pow(ex2,7)*pow(ex3,3) + pow(ex2,6)*pow(ex3,2)*(-dd_real(45.) + dd_real(73.)*pow(ex3,2) + ex3*(dd_real(52.) - dd_real(6.)*ex4)) + dd_real(15.)*pow(dd_real(1.) + ex3,3)*(-dd_real(3.) + dd_real(5.)*ex3)*pow(ex4,2) - dd_real(2.)*pow(ex2,5)*pow(ex3,2)*(dd_real(88.) - dd_real(40.)*ex4 + ex3*(-dd_real(68.) + dd_real(40.)*ex4) + pow(ex3,2)*(-dd_real(147.) + dd_real(73.)*ex4)) + dd_real(2.)*ex2*pow(dd_real(1.) + ex3,2)*ex4*(-dd_real(49.)*ex4 - dd_real(5.)*ex3*(-dd_real(9.) + dd_real(4.)*ex4) + pow(ex3,2)*(-dd_real(75.) + dd_real(149.)*ex4)) + pow(ex2,4)*ex3*(dd_real(1.) + ex3)*(dd_real(86.)*ex4 + ex3*(-dd_real(274.) + dd_real(200.)*ex4 - dd_real(45.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(444.) - dd_real(588.)*ex4 + dd_real(73.)*pow(ex4,2))) + dd_real(2.)*pow(ex2,3)*ex3*(dd_real(1.) + ex3)*((dd_real(137.) - dd_real(45.)*ex4)*ex4 + ex3*(-dd_real(94.) + dd_real(59.)*ex4 - dd_real(21.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(149.) - dd_real(444.)*ex4 + dd_real(147.)*pow(ex4,2))) + pow(ex2,2)*(dd_real(1.) + ex3)*(ex3*(dd_real(286.) - dd_real(213.)*ex4)*ex4 - dd_real(45.)*pow(ex4,2) + pow(ex3,2)*(-dd_real(45.) - dd_real(70.)*ex4 + dd_real(156.)*pow(ex4,2)) + pow(ex3,3)*(dd_real(75.) - dd_real(596.)*ex4 + dd_real(444.)*pow(ex4,2)));
return res;
}
