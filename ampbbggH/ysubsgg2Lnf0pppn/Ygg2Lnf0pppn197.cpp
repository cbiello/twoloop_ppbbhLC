#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn197(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,4)*pow(ex3,2)*(dd_real(75.) + dd_real(46.)*ex3) + (dd_real(75.) + dd_real(46.)*ex3)*pow(ex4,2)*pow(-dd_real(1.) + ex3*(ex4 - dd_real(1.)*ex6),2) - dd_real(2.)*pow(ex2,3)*pow(ex3,2)*(-dd_real(5.) + (dd_real(149.) + dd_real(92.)*ex3)*ex4 - dd_real(2.)*(dd_real(37.) + dd_real(23.)*ex3)*ex6) + pow(ex2,2)*ex3*(dd_real(2.)*ex3*(dd_real(223.) + dd_real(138.)*ex3)*pow(ex4,2) + ex3*ex6*(dd_real(10.) + (dd_real(73.) + dd_real(46.)*ex3)*ex6) - dd_real(2.)*ex4*(dd_real(75.) + dd_real(138.)*pow(ex3,2)*ex6 + ex3*(dd_real(56.) + dd_real(222.)*ex6))) - dd_real(2.)*ex2*ex3*ex4*(dd_real(7.) + ex3*(dd_real(149.) + dd_real(92.)*ex3)*pow(ex4,2) + (dd_real(72.) + dd_real(51.)*ex3)*ex6 + dd_real(2.)*ex3*(dd_real(37.) + dd_real(23.)*ex3)*pow(ex6,2) - dd_real(1.)*ex4*(dd_real(147.) + dd_real(138.)*pow(ex3,2)*ex6 + ex3*(dd_real(97.) + dd_real(223.)*ex6)));
return res;
}
