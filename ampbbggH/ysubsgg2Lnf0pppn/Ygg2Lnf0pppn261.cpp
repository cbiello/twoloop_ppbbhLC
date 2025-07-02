#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn261(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(48.)*pow(ex2,6)*pow(ex3,3) - dd_real(37.)*pow(dd_real(1.) + ex3,3)*pow(ex4,3) - dd_real(12.)*pow(ex2,5)*pow(ex3,2)*(dd_real(10.)*ex4 + ex3*(-dd_real(11.) + dd_real(12.)*ex4)) - dd_real(3.)*ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(33.)*ex4 + ex3*(-dd_real(37.) + dd_real(41.)*ex4)) - dd_real(3.)*pow(ex2,2)*(dd_real(1.) + ex3)*ex4*(dd_real(30.)*pow(ex4,2) + ex3*ex4*(-dd_real(107.) + dd_real(72.)*ex4) + pow(ex3,2)*(dd_real(37.) - dd_real(123.)*ex4 + dd_real(44.)*pow(ex4,2))) + dd_real(3.)*pow(ex2,4)*ex3*(dd_real(34.)*pow(ex4,2) + dd_real(4.)*ex3*ex4*(-dd_real(29.) + dd_real(20.)*ex4) + pow(ex3,2)*(dd_real(41.) - dd_real(132.)*ex4 + dd_real(48.)*pow(ex4,2))) - dd_real(1.)*pow(ex2,3)*(dd_real(102.)*ex3*(-dd_real(3.) + ex4)*pow(ex4,2) + dd_real(26.)*pow(ex4,3) + dd_real(3.)*pow(ex3,2)*ex4*(dd_real(115.) - dd_real(232.)*ex4 + dd_real(40.)*pow(ex4,2)) + pow(ex3,3)*(-dd_real(37.) + dd_real(369.)*ex4 - dd_real(396.)*pow(ex4,2) + dd_real(48.)*pow(ex4,3)));
return res;
}
