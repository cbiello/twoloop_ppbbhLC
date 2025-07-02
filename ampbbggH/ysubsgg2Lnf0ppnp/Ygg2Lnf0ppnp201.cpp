#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp201(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(5.)*pow(ex2,4)*pow(ex3,2)*(dd_real(15.) + dd_real(14.)*ex3) + dd_real(5.)*(dd_real(15.) + dd_real(14.)*ex3)*pow(ex4,2)*pow(-dd_real(1.) + ex3*(ex4 - dd_real(1.)*ex6),2) + dd_real(2.)*pow(ex2,3)*pow(ex3,2)*(dd_real(1.) - dd_real(1.)*(dd_real(149.) + dd_real(140.)*ex3)*ex4 + (dd_real(74.) + dd_real(70.)*ex3)*ex6) + pow(ex2,2)*ex3*(dd_real(2.)*ex3*(dd_real(223.) + dd_real(210.)*ex3)*pow(ex4,2) + ex3*ex6*(dd_real(2.) + (dd_real(73.) + dd_real(70.)*ex3)*ex6) - dd_real(6.)*ex4*(dd_real(25.) + dd_real(70.)*pow(ex3,2)*ex6 + ex3*(dd_real(24.) + dd_real(74.)*ex6))) - dd_real(2.)*ex2*ex3*ex4*(dd_real(3.) + ex3*(dd_real(149.) + dd_real(140.)*ex3)*pow(ex4,2) + (dd_real(72.) + dd_real(71.)*ex3)*ex6 + dd_real(2.)*ex3*(dd_real(37.) + dd_real(35.)*ex3)*pow(ex6,2) - dd_real(1.)*ex4*(dd_real(147.) + dd_real(210.)*pow(ex3,2)*ex6 + ex3*(dd_real(141.) + dd_real(223.)*ex6)));
return res;
}
