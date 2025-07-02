#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn172(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(360.)*pow(ex2,6)*pow(ex3,3) - dd_real(1.)*ex2*pow(dd_real(1.) + ex3,2)*(dd_real(1080.)*ex3*(-dd_real(1.) + ex4) - dd_real(793.)*ex4)*pow(ex4,2) - dd_real(360.)*pow(dd_real(1.) + ex3,3)*pow(ex4,3) + pow(ex2,5)*pow(ex3,2)*(-dd_real(1080.)*ex3*(-dd_real(1.) + ex4) + dd_real(793.)*ex4) + dd_real(2.)*pow(ex2,4)*ex3*(ex3*(dd_real(253.) - dd_real(793.)*ex4)*ex4 - dd_real(1430.)*pow(ex4,2) + dd_real(540.)*pow(ex3,2)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2))) - dd_real(2.)*pow(ex2,2)*(dd_real(1.) + ex3)*ex4*(ex3*(dd_real(253.) - dd_real(793.)*ex4)*ex4 - dd_real(1430.)*pow(ex4,2) + dd_real(540.)*pow(ex3,2)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2))) + pow(ex2,3)*(dd_real(987.)*pow(ex4,3) + dd_real(26.)*ex3*pow(ex4,2)*(-dd_real(171.) + dd_real(110.)*ex4) + pow(ex3,2)*ex4*(-dd_real(1367.) - dd_real(1012.)*ex4 + dd_real(793.)*pow(ex4,2)) - dd_real(360.)*pow(ex3,3)*(-dd_real(1.) + dd_real(9.)*ex4 - dd_real(9.)*pow(ex4,2) + pow(ex4,3)));
return res;
}
