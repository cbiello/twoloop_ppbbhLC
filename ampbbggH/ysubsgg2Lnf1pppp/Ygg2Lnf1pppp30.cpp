#include <iostream>
#include "listYgg2Lnf1pppp.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppp30(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(206.)*pow(ex2,6)*pow(ex3,3) - dd_real(2.)*pow(dd_real(1.) + ex3,2)*(dd_real(103.)*ex3 - dd_real(112.)*ex4)*pow(ex4,3) - dd_real(2.)*pow(ex2,5)*pow(ex3,2)*(dd_real(309.)*ex3*(-dd_real(1.) + ex4) + dd_real(121.)*ex4) - dd_real(2.)*ex2*(dd_real(1.) + ex3)*pow(ex4,2)*(dd_real(309.)*pow(ex3,2)*(-dd_real(1.) + ex4) + dd_real(112.)*ex4 + ex3*(-dd_real(103.) + dd_real(439.)*ex4 - dd_real(224.)*pow(ex4,2))) + pow(ex2,4)*ex3*(dd_real(27.)*pow(ex4,2) + dd_real(2.)*ex3*ex4*(-dd_real(448.) + dd_real(345.)*ex4) + dd_real(618.)*pow(ex3,2)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2))) - dd_real(2.)*pow(ex2,2)*ex4*(dd_real(9.)*pow(ex4,2) + ex3*ex4*(-dd_real(336.) + dd_real(457.)*ex4) + dd_real(309.)*pow(ex3,3)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2)) + pow(ex3,2)*(dd_real(206.) - dd_real(1169.)*ex4 + dd_real(878.)*pow(ex4,2) - dd_real(112.)*pow(ex4,3))) - dd_real(1.)*pow(ex2,3)*(dd_real(9.)*pow(ex4,3) + ex3*pow(ex4,2)*(-dd_real(493.) + dd_real(18.)*ex4) + dd_real(2.)*pow(ex3,2)*ex4*(dd_real(533.) - dd_real(1102.)*ex4 + dd_real(336.)*pow(ex4,2)) + dd_real(206.)*pow(ex3,3)*(-dd_real(1.) + dd_real(9.)*ex4 - dd_real(9.)*pow(ex4,2) + pow(ex4,3)));
return res;
}
