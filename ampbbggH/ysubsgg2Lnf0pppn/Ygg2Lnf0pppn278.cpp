#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn278(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
(-dd_real(1.) + dd_real(2.)*ex3 + dd_real(3.)*pow(ex3,2))*pow(ex4,3) + ex2*pow(ex4,2)*(dd_real(4.) - dd_real(1.)*ex6 + dd_real(2.)*ex3*(-dd_real(3.) + ex4 + dd_real(3.)*ex6) + pow(ex3,2)*(-dd_real(10.) + dd_real(2.)*ex4 + dd_real(3.)*ex6)) + pow(ex2,4)*ex3*(-dd_real(3.) + dd_real(5.)*ex6 + ex3*(-dd_real(3.) + dd_real(2.)*ex6 + pow(ex6,2))) + pow(ex2,2)*ex4*(-dd_real(5.) + pow(ex3,2)*(dd_real(11.) + ex4*(-dd_real(7.) + ex6) - dd_real(7.)*ex6) + dd_real(3.)*ex6 + ex3*(dd_real(6.) - dd_real(14.)*ex6 + dd_real(3.)*pow(ex6,2) + ex4*(-dd_real(7.) + dd_real(3.)*ex6))) - dd_real(1.)*pow(ex2,3)*(dd_real(2.)*(-dd_real(1.) + ex6) + ex3*(dd_real(2.) + dd_real(8.)*ex4*(-dd_real(1.) + ex6) - dd_real(8.)*ex6 + dd_real(4.)*pow(ex6,2)) + pow(ex3,2)*(dd_real(4.) - dd_real(4.)*ex6 + ex4*(-dd_real(8.) + dd_real(3.)*ex6 + pow(ex6,2))));
return res;
}
