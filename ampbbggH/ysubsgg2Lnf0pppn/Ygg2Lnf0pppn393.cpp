#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn393(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(8.)*(-dd_real(1.) + ex3 + dd_real(2.)*pow(ex3,2))*pow(ex4,3) + ex2*pow(ex4,2)*(dd_real(28.) - dd_real(9.)*ex6 + dd_real(2.)*ex3*(-dd_real(13.) + dd_real(5.)*ex4 + dd_real(16.)*ex6) + pow(ex3,2)*(-dd_real(54.) + dd_real(10.)*ex4 + dd_real(17.)*ex6)) + pow(ex2,4)*ex3*(-dd_real(16.) + dd_real(27.)*ex6 + ex3*(-dd_real(16.) + dd_real(11.)*ex6 + dd_real(5.)*pow(ex6,2))) + pow(ex2,2)*ex4*(-dd_real(32.) + dd_real(21.)*ex6 + pow(ex3,2)*(dd_real(60.) - dd_real(40.)*ex6 + pow(ex6,2) + ex4*(-dd_real(36.) + dd_real(5.)*ex6)) + ex3*(dd_real(28.) - dd_real(77.)*ex6 + dd_real(19.)*pow(ex6,2) + dd_real(3.)*ex4*(-dd_real(12.) + dd_real(5.)*ex6))) - dd_real(1.)*pow(ex2,3)*(dd_real(12.)*(-dd_real(1.) + ex6) + ex3*(dd_real(10.) + dd_real(42.)*ex4*(-dd_real(1.) + ex6) - dd_real(45.)*ex6 + dd_real(24.)*pow(ex6,2)) + pow(ex3,2)*(dd_real(22.) - dd_real(23.)*ex6 + pow(ex6,2) + ex4*(-dd_real(42.) + dd_real(16.)*ex6 + dd_real(5.)*pow(ex6,2))));
return res;
}
