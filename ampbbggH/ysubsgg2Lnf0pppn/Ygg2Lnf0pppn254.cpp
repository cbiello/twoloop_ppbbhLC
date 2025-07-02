#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn254(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,6)*pow(ex3,3) - dd_real(1.)*pow(ex2,5)*pow(ex3,2)*(dd_real(11.) + ex3*(dd_real(10.) + dd_real(7.)*ex4 - dd_real(4.)*ex6)) + dd_real(2.)*pow(ex4,3)*pow(-dd_real(1.) + ex3*(ex4 - dd_real(1.)*ex6),2)*(dd_real(7.) + ex3*(dd_real(5.) + ex4 - dd_real(1.)*ex6)) + pow(ex2,4)*pow(ex3,2)*(-dd_real(5.) + dd_real(20.)*ex3*pow(ex4,2) + ex4*(dd_real(55.) + ex3*(dd_real(50.) - dd_real(22.)*ex6)) - dd_real(1.)*(dd_real(21.) + dd_real(20.)*ex3)*ex6 + dd_real(5.)*ex3*pow(ex6,2)) + pow(ex2,2)*ex3*ex4*(dd_real(7.) + dd_real(25.)*pow(ex3,2)*pow(ex4,3) + ex3*pow(ex4,2)*(dd_real(107.) + ex3*(dd_real(100.) - dd_real(52.)*ex6)) + (dd_real(19.) + dd_real(30.)*ex3)*ex6 + dd_real(30.)*ex3*(dd_real(1.) + ex3)*pow(ex6,2) - dd_real(6.)*pow(ex3,2)*pow(ex6,3) + ex4*(-dd_real(68.) - dd_real(25.)*ex3*(dd_real(3.) + dd_real(5.)*ex6) + dd_real(3.)*pow(ex3,2)*ex6*(-dd_real(40.) + dd_real(11.)*ex6))) + pow(ex2,3)*ex3*(-dd_real(30.)*pow(ex3,2)*pow(ex4,3) + ex3*ex6*(-dd_real(5.) - dd_real(10.)*(dd_real(1.) + ex3)*ex6 + dd_real(2.)*ex3*pow(ex6,2)) + ex3*pow(ex4,2)*(-dd_real(109.) + dd_real(4.)*ex3*(-dd_real(25.) + dd_real(12.)*ex6)) + ex4*(dd_real(22.) + pow(ex3,2)*(dd_real(80.) - dd_real(21.)*ex6)*ex6 + dd_real(7.)*ex3*(dd_real(5.) + dd_real(12.)*ex6))) - dd_real(1.)*ex2*pow(ex4,2)*(dd_real(11.) + ex3*(dd_real(17.) - dd_real(72.)*ex4 + dd_real(45.)*ex6) + pow(ex3,3)*(dd_real(11.)*pow(ex4,3) + pow(ex4,2)*(dd_real(50.) - dd_real(28.)*ex6) - dd_real(6.)*(-dd_real(5.) + ex6)*pow(ex6,2) + ex4*ex6*(-dd_real(80.) + dd_real(23.)*ex6)) + pow(ex3,2)*(dd_real(52.)*pow(ex4,2) + dd_real(15.)*ex6*(dd_real(3.) + dd_real(2.)*ex6) - dd_real(1.)*ex4*(dd_real(65.) + dd_real(82.)*ex6)));
return res;
}
