#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp146(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(17.)*pow(ex2,6)*pow(ex3,2) + pow(ex2,5)*pow(ex3,2)*(dd_real(63.) - dd_real(39.)*ex4 + dd_real(5.)*ex6) + pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(17.) + dd_real(5.)*pow(ex4,2) + ex4*(dd_real(5.) - dd_real(10.)*ex6) - dd_real(5.)*ex6 + dd_real(5.)*pow(ex6,2)) + pow(ex2,4)*ex3*(dd_real(29.) - dd_real(5.)*ex4 - dd_real(29.)*ex6 + ex3*(dd_real(92.) + dd_real(32.)*pow(ex4,2) + dd_real(5.)*ex6 + dd_real(5.)*pow(ex6,2) - dd_real(1.)*ex4*(dd_real(131.) + dd_real(20.)*ex6))) + ex2*(dd_real(1.) + ex3)*ex4*(-dd_real(34.) - dd_real(10.)*pow(ex4,2) + dd_real(39.)*ex6 - dd_real(5.)*pow(ex6,2) + dd_real(5.)*ex4*(-dd_real(2.) + dd_real(3.)*ex6) + ex3*(dd_real(10.)*pow(ex4,3) - dd_real(5.)*pow(ex4,2)*(dd_real(1.) + dd_real(4.)*ex6) - dd_real(2.)*(dd_real(17.) - dd_real(5.)*ex6 + dd_real(5.)*pow(ex6,2)) + ex4*(dd_real(53.) + dd_real(15.)*ex6 + dd_real(10.)*pow(ex6,2)))) + pow(ex2,3)*ex3*(dd_real(63.) + dd_real(20.)*pow(ex4,2) - dd_real(68.)*ex6 + dd_real(5.)*pow(ex6,2) + ex4*(-dd_real(53.) + dd_real(9.)*ex6) + ex3*(dd_real(63.) - dd_real(15.)*pow(ex4,3) - dd_real(5.)*ex6 + dd_real(10.)*pow(ex6,2) + pow(ex4,2)*(dd_real(83.) + dd_real(25.)*ex6) - dd_real(1.)*ex4*(dd_real(179.) + dd_real(30.)*ex6 + dd_real(10.)*pow(ex6,2)))) + pow(ex2,2)*(dd_real(5.)*pow(ex4,2) - dd_real(5.)*ex4*(-dd_real(1.) + ex6) + dd_real(17.)*pow(-dd_real(1.) + ex6,2) + ex3*(dd_real(34.) - dd_real(25.)*pow(ex4,3) - dd_real(39.)*ex6 + dd_real(5.)*pow(ex6,2) + pow(ex4,2)*(dd_real(29.) + dd_real(40.)*ex6) + ex4*(-dd_real(116.) + dd_real(58.)*ex6 - dd_real(15.)*pow(ex6,2))) + pow(ex3,2)*(dd_real(17.) + dd_real(5.)*pow(ex4,4) - dd_real(5.)*ex6 + dd_real(5.)*pow(ex6,2) - dd_real(5.)*pow(ex4,3)*(dd_real(5.) + dd_real(2.)*ex6) + pow(ex4,2)*(dd_real(87.) + dd_real(45.)*ex6 + dd_real(5.)*pow(ex6,2)) - dd_real(1.)*ex4*(dd_real(121.) + dd_real(20.)*pow(ex6,2))));
return res;
}
