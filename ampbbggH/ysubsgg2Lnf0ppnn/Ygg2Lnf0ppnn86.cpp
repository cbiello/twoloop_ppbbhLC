#include <iostream>
#include "listYgg2Lnf0ppnn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnn86(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(6.)*pow(ex2,5)*pow(ex3,3) + pow(ex2,4)*pow(ex3,3)*(dd_real(50.) + dd_real(5.)*ex3 - dd_real(12.)*ex4) + (-dd_real(4.) - dd_real(2.)*ex3 - dd_real(107.)*pow(ex3,2) + dd_real(16.)*pow(ex3,3) + dd_real(5.)*pow(ex3,4))*pow(ex4,2) + dd_real(2.)*ex2*ex3*ex4*(dd_real(2.) + ex3*(dd_real(10.) - dd_real(107.)*ex4) + dd_real(5.)*pow(ex3,3)*(-dd_real(1.) + ex4) - dd_real(1.)*ex4 + pow(ex3,2)*(-dd_real(27.) + dd_real(19.)*ex4)) + dd_real(2.)*pow(ex2,3)*pow(ex3,2)*(-dd_real(5.)*pow(ex3,2)*(-dd_real(1.) + ex4) + dd_real(10.)*ex4 + ex3*(dd_real(41.) - dd_real(39.)*ex4 + dd_real(3.)*pow(ex4,2))) + pow(ex2,2)*ex3*(dd_real(4.)*ex4 + ex3*(dd_real(40.) - dd_real(107.)*ex4)*ex4 + dd_real(5.)*pow(ex3,3)*(dd_real(1.) - dd_real(4.)*ex4 + pow(ex4,2)) + dd_real(2.)*pow(ex3,2)*(dd_real(19.) - dd_real(60.)*ex4 + dd_real(14.)*pow(ex4,2)));
return res;
}
