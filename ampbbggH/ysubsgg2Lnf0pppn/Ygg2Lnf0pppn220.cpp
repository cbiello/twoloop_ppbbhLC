#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn220(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(21.)*pow(ex2,7)*pow(ex3,3) + dd_real(240.)*pow(dd_real(1.) + ex3,2)*pow(ex4,3) - dd_real(21.)*pow(ex2,6)*pow(ex3,2)*(dd_real(3.)*ex3*(-dd_real(1.) + ex4) + ex4) - dd_real(2.)*ex2*(dd_real(1.) + ex3)*pow(ex4,2)*(-dd_real(121.)*ex4 + dd_real(15.)*pow(ex3,2)*ex4 - dd_real(30.)*ex3*(-dd_real(8.) + dd_real(9.)*ex4)) - dd_real(1.)*pow(ex2,3)*ex3*ex4*(dd_real(2.)*(dd_real(199.) - dd_real(21.)*ex4)*ex4 + dd_real(9.)*pow(ex3,2)*(dd_real(10.) - dd_real(20.)*ex4 + dd_real(7.)*pow(ex4,2)) + dd_real(3.)*ex3*(-dd_real(170.) + dd_real(198.)*ex4 + dd_real(7.)*pow(ex4,2))) + dd_real(3.)*pow(ex2,5)*pow(ex3,2)*(dd_real(7.)*ex4*(-dd_real(1.) + dd_real(2.)*ex4) + ex3*(dd_real(20.) - dd_real(63.)*ex4 + dd_real(21.)*pow(ex4,2))) + pow(ex2,2)*ex4*(dd_real(30.)*pow(ex3,3)*(dd_real(3.) - dd_real(2.)*ex4)*ex4 - dd_real(31.)*pow(ex4,2) + dd_real(2.)*ex3*ex4*(-dd_real(391.) + dd_real(199.)*ex4) + dd_real(3.)*pow(ex3,2)*(dd_real(80.) - dd_real(340.)*ex4 + dd_real(99.)*pow(ex4,2))) - dd_real(3.)*pow(ex2,4)*ex3*(dd_real(14.)*pow(ex4,2) + ex3*ex4*(-dd_real(99.) - dd_real(14.)*ex4 + dd_real(7.)*pow(ex4,2)) + pow(ex3,2)*(-dd_real(10.) + dd_real(60.)*ex4 - dd_real(63.)*pow(ex4,2) + dd_real(7.)*pow(ex4,3)));
return res;
}
