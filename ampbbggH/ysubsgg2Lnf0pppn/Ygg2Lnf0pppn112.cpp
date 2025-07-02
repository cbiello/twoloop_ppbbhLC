#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn112(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(3.)*pow(ex2,5)*pow(ex3,3) + pow(ex2,4)*pow(ex3,2)*(-dd_real(3.) + dd_real(2.)*ex3*(dd_real(5.) + dd_real(9.)*ex4 - dd_real(6.)*ex6)) + pow(ex4,2)*(-dd_real(3.) + dd_real(2.)*ex3*(dd_real(5.) + dd_real(3.)*ex4 - dd_real(3.)*ex6))*pow(-dd_real(1.) + ex3*(ex4 - dd_real(1.)*ex6),2) + pow(ex2,2)*ex3*(dd_real(48.)*pow(ex3,2)*pow(ex4,3) + ex3*ex6*(dd_real(5.) + dd_real(2.)*(-dd_real(2.) + dd_real(5.)*ex3)*ex6 - dd_real(6.)*ex3*pow(ex6,2)) - dd_real(2.)*ex3*pow(ex4,2)*(dd_real(22.) + dd_real(15.)*ex3*(-dd_real(2.) + dd_real(3.)*ex6)) + ex4*(dd_real(6.) + dd_real(12.)*pow(ex3,2)*ex6*(-dd_real(5.) + dd_real(4.)*ex6) + ex3*(-dd_real(30.) + dd_real(39.)*ex6))) + pow(ex2,3)*pow(ex3,2)*(dd_real(5.) - dd_real(42.)*ex3*pow(ex4,2) + (-dd_real(7.) + dd_real(20.)*ex3)*ex6 - dd_real(15.)*ex3*pow(ex6,2) + ex4*(dd_real(19.) + ex3*(-dd_real(40.) + dd_real(54.)*ex6))) + ex2*ex3*ex4*(-dd_real(7.) - dd_real(27.)*pow(ex3,2)*pow(ex4,3) + (dd_real(9.) - dd_real(25.)*ex3)*ex6 + (dd_real(19.) - dd_real(20.)*ex3)*ex3*pow(ex6,2) + dd_real(12.)*pow(ex3,2)*pow(ex6,3) + ex4*(-dd_real(18.) + ex3*(dd_real(45.) - dd_real(62.)*ex6) + dd_real(3.)*pow(ex3,2)*(dd_real(20.) - dd_real(17.)*ex6)*ex6) + ex3*pow(ex4,2)*(dd_real(43.) + ex3*(-dd_real(40.) + dd_real(66.)*ex6)));
return res;
}
