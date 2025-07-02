#include <iostream>
#include "listYgg2Lnf1pppn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppn131(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,6)*pow(ex3,4)*(dd_real(20.) + dd_real(27.)*ex3 + dd_real(18.)*pow(ex3,2)) + pow(dd_real(1.) + ex3,4)*(dd_real(20.) + dd_real(27.)*ex3 + dd_real(18.)*pow(ex3,2))*pow(ex4,4) + dd_real(2.)*ex2*ex3*pow(dd_real(1.) + ex3,3)*pow(ex4,3)*(-dd_real(37.) + dd_real(27.)*ex3*(-dd_real(2.) + ex4) + dd_real(18.)*pow(ex3,2)*(-dd_real(2.) + ex4) + dd_real(20.)*ex4) - dd_real(2.)*pow(ex2,5)*pow(ex3,3)*(dd_real(26.)*ex4 + dd_real(18.)*pow(ex3,3)*(-dd_real(1.) + dd_real(2.)*ex4) + dd_real(9.)*pow(ex3,2)*(-dd_real(3.) + dd_real(8.)*ex4) + ex3*(-dd_real(20.) + dd_real(73.)*ex4)) + pow(ex2,2)*ex3*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(-dd_real(34.)*ex4 + dd_real(18.)*pow(ex3,3)*(dd_real(6.) - dd_real(8.)*ex4 + pow(ex4,2)) + dd_real(9.)*pow(ex3,2)*(dd_real(18.) - dd_real(28.)*ex4 + dd_real(3.)*pow(ex4,2)) + dd_real(2.)*ex3*(dd_real(63.) - dd_real(101.)*ex4 + dd_real(10.)*pow(ex4,2))) - dd_real(2.)*pow(ex2,3)*pow(ex3,2)*(dd_real(1.) + ex3)*ex4*(ex4*(-dd_real(63.) + dd_real(17.)*ex4) + dd_real(36.)*pow(ex3,3)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2)) + dd_real(18.)*pow(ex3,2)*(dd_real(3.) - dd_real(12.)*ex4 + dd_real(4.)*pow(ex4,2)) + ex3*(dd_real(46.) - dd_real(207.)*ex4 + dd_real(64.)*pow(ex4,2))) + pow(ex2,4)*pow(ex3,2)*(dd_real(20.)*pow(ex4,2) + dd_real(9.)*ex3*ex4*(-dd_real(16.) + dd_real(17.)*ex4) + dd_real(18.)*pow(ex3,4)*(dd_real(1.) - dd_real(8.)*ex4 + dd_real(6.)*pow(ex4,2)) + dd_real(27.)*pow(ex3,3)*(dd_real(1.) - dd_real(12.)*ex4 + dd_real(10.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(20.) - dd_real(346.)*ex4 + dd_real(306.)*pow(ex4,2)));
return res;
}
