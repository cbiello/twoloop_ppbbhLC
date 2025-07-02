#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp240(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(3.)*pow(ex2,6)*pow(ex3,3) - dd_real(1.)*pow(ex2,5)*pow(ex3,2)*(dd_real(33.) + ex3*(dd_real(166.) + dd_real(21.)*ex4 - dd_real(12.)*ex6)) + dd_real(2.)*pow(ex4,3)*(dd_real(21.) + ex3*(dd_real(83.) + dd_real(3.)*ex4 - dd_real(3.)*ex6))*pow(-dd_real(1.) + ex3*(ex4 - dd_real(1.)*ex6),2) + pow(ex2,4)*pow(ex3,2)*(-dd_real(3.) + dd_real(60.)*ex3*pow(ex4,2) + ex4*(dd_real(165.) + ex3*(dd_real(830.) - dd_real(66.)*ex6)) - dd_real(1.)*(dd_real(63.) + dd_real(332.)*ex3)*ex6 + dd_real(15.)*ex3*pow(ex6,2)) + pow(ex2,2)*ex3*ex4*(dd_real(9.) + dd_real(75.)*pow(ex3,2)*pow(ex4,3) + (dd_real(57.) + dd_real(338.)*ex3)*ex6 + dd_real(6.)*ex3*(dd_real(15.) + dd_real(83.)*ex3)*pow(ex6,2) - dd_real(18.)*pow(ex3,2)*pow(ex6,3) + dd_real(3.)*ex4*(-dd_real(68.) - dd_real(5.)*ex3*(dd_real(67.) + dd_real(25.)*ex6) + pow(ex3,2)*ex6*(-dd_real(664.) + dd_real(33.)*ex6)) + ex3*pow(ex4,2)*(dd_real(321.) - dd_real(4.)*ex3*(-dd_real(415.) + dd_real(39.)*ex6))) - dd_real(1.)*ex2*pow(ex4,2)*(dd_real(33.) + ex3*(dd_real(175.) - dd_real(216.)*ex4 + dd_real(135.)*ex6) + pow(ex3,3)*(dd_real(33.)*pow(ex4,3) + pow(ex4,2)*(dd_real(830.) - dd_real(84.)*ex6) + dd_real(6.)*(dd_real(83.) - dd_real(3.)*ex6)*pow(ex6,2) + ex4*ex6*(-dd_real(1328.) + dd_real(69.)*ex6)) + pow(ex3,2)*(dd_real(156.)*pow(ex4,2) - dd_real(3.)*ex4*(dd_real(333.) + dd_real(82.)*ex6) + ex6*(dd_real(667.) + dd_real(90.)*ex6))) + pow(ex2,3)*ex3*(-dd_real(90.)*pow(ex3,2)*pow(ex4,3) + ex3*ex6*(-dd_real(3.) - dd_real(2.)*(dd_real(15.) + dd_real(83.)*ex3)*ex6 + dd_real(6.)*ex3*pow(ex6,2)) + ex3*pow(ex4,2)*(-dd_real(327.) + dd_real(4.)*ex3*(-dd_real(415.) + dd_real(36.)*ex6)) + ex4*(dd_real(66.) + pow(ex3,2)*(dd_real(1328.) - dd_real(63.)*ex6)*ex6 + ex3*(dd_real(341.) + dd_real(252.)*ex6)));
return res;
}
