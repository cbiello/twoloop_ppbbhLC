#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn249(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
ex3*pow(ex4,2)*ex6*(dd_real(7.)*(dd_real(1.) + ex3)*pow(ex4,2) + ex4*(dd_real(7.) + ex3*(dd_real(7.) - dd_real(9.)*ex6) - dd_real(4.)*ex6) + dd_real(5.)*(dd_real(2.) + ex3)*ex6) + pow(ex2,4)*pow(ex3,2)*(dd_real(1.) + ex4)*(dd_real(2.) + dd_real(2.)*pow(ex4,2) + ex4*(dd_real(4.) + dd_real(7.)*ex6)) + ex2*ex4*ex6*((dd_real(28.) + dd_real(31.)*ex3 + dd_real(3.)*pow(ex3,2))*pow(ex4,3) - dd_real(5.)*ex3*(dd_real(3.) + dd_real(2.)*ex3)*ex6 - dd_real(1.)*pow(ex4,2)*(dd_real(7.)*(-dd_real(7.) + ex6) + dd_real(2.)*pow(ex3,2)*(dd_real(11.) + dd_real(7.)*ex6) + ex3*(-dd_real(34.) + dd_real(13.)*ex6)) + ex4*(dd_real(7.)*(dd_real(3.) + ex6) + ex3*(dd_real(3.) + dd_real(14.)*ex6) + pow(ex3,2)*(-dd_real(25.) + dd_real(18.)*ex6))) - dd_real(1.)*pow(ex2,3)*ex3*(ex6*(-dd_real(22.) + dd_real(9.)*pow(ex4,3) + dd_real(3.)*ex6 - dd_real(1.)*pow(ex4,2)*(dd_real(18.) + dd_real(7.)*ex6) + ex4*(-dd_real(49.) + dd_real(10.)*ex6)) + ex3*(dd_real(4.)*pow(ex4,4) + dd_real(11.)*ex6 + dd_real(2.)*pow(ex4,3)*(dd_real(6.) + dd_real(7.)*ex6) + pow(ex4,2)*(dd_real(12.) + dd_real(11.)*ex6) + dd_real(2.)*ex4*(dd_real(2.) + dd_real(4.)*ex6 + dd_real(7.)*pow(ex6,2)))) + pow(ex2,2)*(ex4*ex6*(-dd_real(21.) + ex6 - dd_real(1.)*pow(ex4,2)*(dd_real(28.) + ex6) + dd_real(7.)*ex4*(-dd_real(7.) + dd_real(2.)*ex6)) - dd_real(1.)*ex3*ex6*(-dd_real(9.)*pow(ex4,4) + pow(ex4,2)*(dd_real(90.) - dd_real(23.)*ex6) - dd_real(5.)*ex6 + dd_real(7.)*pow(ex4,3)*(dd_real(7.) + ex6) + ex4*(dd_real(32.) + dd_real(7.)*ex6)) + pow(ex3,2)*(dd_real(2.)*pow(ex4,5) + ex4*(dd_real(29.) - dd_real(9.)*ex6)*ex6 + dd_real(5.)*pow(ex6,2) + pow(ex4,3)*(dd_real(6.) + ex6) + pow(ex4,4)*(dd_real(6.) + dd_real(7.)*ex6) + pow(ex4,2)*(dd_real(2.) + dd_real(23.)*ex6 + dd_real(28.)*pow(ex6,2))));
return res;
}
