#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn386(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(15.)*pow(ex2,6)*pow(ex3,3) + dd_real(4.)*(-dd_real(4.) + dd_real(2.)*ex3 + dd_real(3.)*pow(ex3,2) - dd_real(3.)*pow(ex3,3))*pow(ex4,3) - dd_real(15.)*pow(ex2,5)*pow(ex3,2)*(dd_real(3.)*ex3*(-dd_real(1.) + ex4) + ex4) + ex2*pow(ex4,2)*(pow(ex3,3)*(dd_real(36.) - dd_real(46.)*ex4) + dd_real(3.)*pow(ex3,2)*(-dd_real(8.) + ex4) - dd_real(3.)*ex4 + dd_real(4.)*ex3*(-dd_real(2.) + dd_real(5.)*ex4)) - dd_real(1.)*pow(ex2,2)*ex3*ex4*(dd_real(10.)*(dd_real(2.) - dd_real(3.)*ex4)*ex4 + dd_real(3.)*ex3*(-dd_real(4.) + dd_real(2.)*ex4 + dd_real(5.)*pow(ex4,2)) + dd_real(3.)*pow(ex3,2)*(dd_real(12.) - dd_real(46.)*ex4 + dd_real(15.)*pow(ex4,2))) + pow(ex2,4)*pow(ex3,2)*(dd_real(15.)*ex4*(-dd_real(1.) + dd_real(2.)*ex4) + ex3*(dd_real(46.) - dd_real(135.)*ex4 + dd_real(45.)*pow(ex4,2))) - dd_real(3.)*pow(ex2,3)*ex3*(dd_real(10.)*pow(ex4,2) + ex3*ex4*(-dd_real(1.) - dd_real(10.)*ex4 + dd_real(5.)*pow(ex4,2)) + pow(ex3,2)*(-dd_real(4.) + dd_real(46.)*ex4 - dd_real(45.)*pow(ex4,2) + dd_real(5.)*pow(ex4,3)));
return res;
}
