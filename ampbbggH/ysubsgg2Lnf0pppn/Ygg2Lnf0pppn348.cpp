#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn348(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(7.)*pow(ex2,4)*pow(ex3,2)*(dd_real(1.) + ex3)*ex4 + pow(dd_real(1.) + ex3,3)*pow(ex4,2)*(-dd_real(5.) + dd_real(2.)*ex4) + pow(ex2,3)*ex3*(-dd_real(3.) + dd_real(4.)*ex4 - dd_real(14.)*pow(ex4,2) + pow(ex3,2)*(-dd_real(5.) + dd_real(9.)*ex4 - dd_real(14.)*pow(ex4,2)) + ex3*(dd_real(10.) + dd_real(49.)*ex4 - dd_real(10.)*pow(ex4,2))) + ex2*pow(dd_real(1.) + ex3,2)*ex4*(-dd_real(10.) - dd_real(40.)*ex4 - dd_real(9.)*pow(ex4,2) + ex3*(dd_real(10.) - dd_real(9.)*ex4 + dd_real(9.)*pow(ex4,2))) + pow(ex2,2)*(dd_real(1.) + ex3)*(-dd_real(3.) - dd_real(18.)*ex4 - dd_real(40.)*pow(ex4,2) - dd_real(11.)*pow(ex4,3) + ex3*(dd_real(10.) + dd_real(30.)*ex4 - dd_real(40.)*pow(ex4,2) - dd_real(4.)*pow(ex4,3)) + pow(ex3,2)*(-dd_real(5.) + dd_real(12.)*ex4 - dd_real(18.)*pow(ex4,2) + dd_real(7.)*pow(ex4,3)));
return res;
}
