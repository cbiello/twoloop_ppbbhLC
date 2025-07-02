#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp165(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(4.)*pow(dd_real(1.) + ex3,3)*pow(ex4,6) + ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,5)*(-dd_real(13.) + dd_real(2.)*ex6 + dd_real(7.)*ex3*(-dd_real(3.) + dd_real(2.)*ex6)) + pow(ex2,6)*ex3*(ex4 - dd_real(1.)*ex6)*(-dd_real(1.) + ex6)*(-dd_real(1.) + ex6 + pow(ex3,2)*(-dd_real(9.) + dd_real(6.)*ex6) + ex3*(dd_real(14.) - dd_real(13.)*ex6 + dd_real(2.)*pow(ex6,2))) + pow(ex2,2)*(dd_real(1.) + ex3)*pow(ex4,4)*(dd_real(14.) - dd_real(3.)*ex6 - dd_real(2.)*pow(ex6,2) + ex3*(dd_real(58.) - dd_real(8.)*ex4 - dd_real(37.)*ex6 + dd_real(2.)*pow(ex6,2)) + dd_real(2.)*pow(ex3,2)*(dd_real(22.) + dd_real(4.)*ex4 - dd_real(33.)*ex6 + dd_real(8.)*pow(ex6,2))) + pow(ex2,3)*pow(ex4,3)*(-dd_real(4.) - dd_real(2.)*ex6 + dd_real(4.)*pow(ex6,2) + ex3*(-dd_real(54.) + ex4*(dd_real(19.) - dd_real(10.)*ex6) + dd_real(23.)*ex6 + dd_real(16.)*pow(ex6,2) - dd_real(4.)*pow(ex6,3)) - dd_real(1.)*pow(ex3,2)*(dd_real(96.) - dd_real(116.)*ex6 + dd_real(27.)*pow(ex6,2) + dd_real(2.)*pow(ex6,3) + dd_real(6.)*ex4*(-dd_real(3.) + dd_real(2.)*ex6)) + pow(ex3,3)*(-dd_real(46.) + dd_real(123.)*ex6 - dd_real(63.)*pow(ex6,2) + dd_real(6.)*pow(ex6,3) + ex4*(-dd_real(33.) + dd_real(14.)*ex6))) + pow(ex2,4)*pow(ex4,2)*(-dd_real(2.) + dd_real(5.)*ex6 - dd_real(3.)*pow(ex6,2) + ex3*(dd_real(20.) + ex6 - dd_real(25.)*pow(ex6,2) + dd_real(8.)*pow(ex6,3) + ex4*(-dd_real(13.) + dd_real(13.)*ex6 - dd_real(2.)*pow(ex6,2))) + pow(ex3,3)*(dd_real(24.) - dd_real(113.)*ex6 + dd_real(93.)*pow(ex6,2) - dd_real(18.)*pow(ex6,3) + ex4*(dd_real(51.) - dd_real(43.)*ex6 + dd_real(6.)*pow(ex6,2))) - dd_real(1.)*pow(ex3,2)*(-dd_real(46.) + dd_real(29.)*ex6 + dd_real(27.)*pow(ex6,2) - dd_real(19.)*pow(ex6,3) + dd_real(2.)*pow(ex6,4) + dd_real(2.)*ex4*(dd_real(25.) - dd_real(27.)*ex6 + dd_real(6.)*pow(ex6,2)))) - dd_real(1.)*pow(ex2,5)*ex4*(-dd_real(1.)*pow(-dd_real(1.) + ex6,2) + ex3*(-dd_real(1.) + ex6)*(-dd_real(3.) + ex4 - dd_real(4.)*ex6 + dd_real(3.)*pow(ex6,2)) + pow(ex3,3)*(dd_real(5.) - dd_real(51.)*ex6 + dd_real(61.)*pow(ex6,2) - dd_real(18.)*pow(ex6,3) + ex4*(dd_real(35.) - dd_real(44.)*ex6 + dd_real(12.)*pow(ex6,2))) + pow(ex3,2)*(dd_real(9.) + dd_real(28.)*ex6 - dd_real(63.)*pow(ex6,2) + dd_real(32.)*pow(ex6,3) - dd_real(4.)*pow(ex6,4) + ex4*(-dd_real(46.) + dd_real(69.)*ex6 - dd_real(27.)*pow(ex6,2) + dd_real(2.)*pow(ex6,3))));
return res;
}
