#include <iostream>
#include "listYgg2Lnf1ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf1ppnp138(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(2.)*pow(ex2,4)*pow(ex3,2)*(dd_real(3.) + dd_real(10.)*ex3) + dd_real(2.)*(dd_real(3.) + dd_real(10.)*ex3)*pow(ex4,2)*pow(-dd_real(1.) + ex3*(ex4 - dd_real(1.)*ex6),2) + pow(ex2,3)*pow(ex3,2)*(-dd_real(3.) - dd_real(1.)*(dd_real(27.) + dd_real(80.)*ex3)*ex4 + dd_real(5.)*(dd_real(3.) + dd_real(8.)*ex3)*ex6) - dd_real(1.)*ex2*ex3*ex4*(ex3*(dd_real(27.) + dd_real(80.)*ex3)*pow(ex4,2) - dd_real(1.)*ex4*(dd_real(24.) + dd_real(120.)*pow(ex3,2)*ex6 + dd_real(7.)*ex3*(dd_real(11.) + dd_real(6.)*ex6)) + ex6*(dd_real(12.) + dd_real(40.)*pow(ex3,2)*ex6 + ex3*(dd_real(37.) + dd_real(15.)*ex6))) + pow(ex2,2)*ex3*(dd_real(6.)*ex3*(dd_real(7.) + dd_real(20.)*ex3)*pow(ex4,2) + ex3*ex6*(-dd_real(3.) + (dd_real(9.) + dd_real(20.)*ex3)*ex6) - dd_real(1.)*ex4*(dd_real(12.) + dd_real(120.)*pow(ex3,2)*ex6 + ex3*(dd_real(34.) + dd_real(45.)*ex6)));
return res;
}
