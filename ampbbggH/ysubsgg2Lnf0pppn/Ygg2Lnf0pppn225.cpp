#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn225(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(2.)*(dd_real(1.) + dd_real(10.)*ex3 + dd_real(9.)*pow(ex3,2))*pow(ex4,3) + ex2*pow(ex4,2)*(dd_real(4.) + dd_real(5.)*ex6 + pow(ex3,2)*(-dd_real(58.) + dd_real(14.)*ex4 + dd_real(15.)*ex6) + dd_real(2.)*ex3*(-dd_real(27.) + dd_real(7.)*ex4 + dd_real(18.)*ex6)) + pow(ex2,4)*ex3*(-dd_real(18.) + dd_real(29.)*ex6 + ex3*(-dd_real(18.) + dd_real(11.)*ex6 + dd_real(7.)*pow(ex6,2))) + pow(ex2,2)*ex4*(-dd_real(14.) + dd_real(3.)*ex6 + pow(ex3,2)*(dd_real(62.) - dd_real(34.)*ex6 - dd_real(3.)*pow(ex6,2) + ex4*(-dd_real(46.) + dd_real(7.)*ex6)) + ex3*(dd_real(48.) - dd_real(77.)*ex6 + dd_real(9.)*pow(ex6,2) + ex4*(-dd_real(46.) + dd_real(21.)*ex6))) + pow(ex2,3)*(dd_real(8.) - dd_real(8.)*ex6 + ex3*(-dd_real(14.) - dd_real(50.)*ex4*(-dd_real(1.) + ex6) + dd_real(41.)*ex6 - dd_real(16.)*pow(ex6,2)) + pow(ex3,2)*(-dd_real(22.) + dd_real(19.)*ex6 + dd_real(3.)*pow(ex6,2) + ex4*(dd_real(50.) - dd_real(18.)*ex6 - dd_real(7.)*pow(ex6,2))));
return res;
}
