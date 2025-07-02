#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp199(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(18.)*pow(ex2,7)*pow(ex3,3) + dd_real(5.)*pow(dd_real(1.) + ex3,3)*(-dd_real(23.) + dd_real(49.)*ex3)*pow(ex4,2) + pow(ex2,6)*pow(ex3,2)*(-dd_real(115.) + dd_real(239.)*pow(ex3,2) - dd_real(2.)*ex3*(-dd_real(98.) + dd_real(9.)*ex4)) + dd_real(2.)*pow(ex2,5)*pow(ex3,2)*(pow(ex3,2)*(dd_real(481.) - dd_real(239.)*ex4) + dd_real(4.)*(-dd_real(56.) + dd_real(25.)*ex4) - dd_real(4.)*ex3*(-dd_real(71.) + dd_real(40.)*ex4)) + dd_real(2.)*ex2*pow(dd_real(1.) + ex3,2)*ex4*(dd_real(115.)*ex3 - dd_real(127.)*ex4 + pow(ex3,2)*(-dd_real(245.) + dd_real(487.)*ex4)) + pow(ex2,4)*ex3*(dd_real(1.) + ex3)*(dd_real(218.)*ex4 + ex3*(-dd_real(702.) + dd_real(400.)*ex4 - dd_real(115.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(1452.) - dd_real(1924.)*ex4 + dd_real(239.)*pow(ex4,2))) + dd_real(2.)*pow(ex2,3)*ex3*(dd_real(1.) + ex3)*((dd_real(351.) - dd_real(115.)*ex4)*ex4 - dd_real(1.)*ex3*(dd_real(242.) + dd_real(3.)*ex4 + dd_real(3.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(487.) - dd_real(1452.)*ex4 + dd_real(481.)*pow(ex4,2))) + pow(ex2,2)*(dd_real(1.) + ex3)*(ex3*(dd_real(738.) - dd_real(499.)*ex4)*ex4 - dd_real(115.)*pow(ex4,2) + pow(ex3,2)*(-dd_real(115.) - dd_real(490.)*ex4 + dd_real(708.)*pow(ex4,2)) + pow(ex3,3)*(dd_real(245.) - dd_real(1948.)*ex4 + dd_real(1452.)*pow(ex4,2)));
return res;
}
