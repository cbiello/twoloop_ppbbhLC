#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn395(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(6.)*pow(dd_real(1.) + ex3,3)*pow(ex4,5) + ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,4)*(-dd_real(30.) + dd_real(7.)*ex6 + ex3*(-dd_real(30.) + dd_real(13.)*ex6)) + pow(ex2,6)*pow(ex3,2)*(ex4 - dd_real(1.)*ex6)*(-dd_real(16.) + dd_real(27.)*ex6 + ex3*(-dd_real(16.) + dd_real(11.)*ex6 + dd_real(5.)*pow(ex6,2))) - dd_real(1.)*pow(ex2,2)*(dd_real(1.) + ex3)*pow(ex4,3)*(-dd_real(54.) + dd_real(26.)*ex6 + pow(ex3,2)*(-dd_real(54.) + dd_real(5.)*ex4*(-dd_real(2.) + ex6) + dd_real(67.)*ex6 - dd_real(8.)*pow(ex6,2)) + ex3*(-dd_real(108.) + dd_real(69.)*ex6 - dd_real(14.)*pow(ex6,2) + ex4*(dd_real(14.) + dd_real(5.)*ex6))) + pow(ex2,3)*pow(ex4,2)*(-dd_real(42.) + dd_real(31.)*ex6 + ex3*(-dd_real(126.) + dd_real(97.)*ex6 - dd_real(29.)*pow(ex6,2) + ex4*(dd_real(46.) + dd_real(6.)*ex6)) + pow(ex3,2)*(-dd_real(126.) + dd_real(10.)*pow(ex4,2) + dd_real(183.)*ex6 - dd_real(92.)*pow(ex6,2) + dd_real(7.)*pow(ex6,3) - dd_real(10.)*ex4*(-dd_real(1.) - dd_real(4.)*ex6 + pow(ex6,2))) + pow(ex3,3)*(-dd_real(42.) + dd_real(10.)*pow(ex4,2) + dd_real(117.)*ex6 - dd_real(39.)*pow(ex6,2) + pow(ex6,3) - dd_real(2.)*ex4*(dd_real(18.) - dd_real(5.)*ex6 + dd_real(5.)*pow(ex6,2)))) + pow(ex2,4)*ex4*(-dd_real(12.)*(-dd_real(1.) + ex6) + ex3*(dd_real(36.) - dd_real(17.)*ex6 + dd_real(3.)*pow(ex6,2) + ex4*(-dd_real(50.) + dd_real(6.)*ex6)) + pow(ex3,2)*(dd_real(36.) - dd_real(90.)*ex6 + dd_real(115.)*pow(ex6,2) - dd_real(31.)*pow(ex6,3) + dd_real(3.)*pow(ex4,2)*(-dd_real(12.) + dd_real(5.)*ex6) + ex4*(-dd_real(8.) - dd_real(47.)*ex6 + dd_real(24.)*pow(ex6,2))) + pow(ex3,3)*(dd_real(12.) - dd_real(85.)*ex6 + dd_real(54.)*pow(ex6,2) - dd_real(2.)*pow(ex6,3) + pow(ex4,2)*(-dd_real(36.) + dd_real(5.)*ex6) + ex4*(dd_real(42.) + dd_real(5.)*ex6 + dd_real(10.)*pow(ex6,2) - dd_real(5.)*pow(ex6,3)))) + pow(ex2,5)*ex3*(ex3*pow(ex4,2)*(-dd_real(42.)*(-dd_real(1.) + ex6) + ex3*(dd_real(42.) - dd_real(16.)*ex6 - dd_real(5.)*pow(ex6,2))) + ex6*(dd_real(12.)*(-dd_real(1.) + ex6) + pow(ex3,2)*(dd_real(22.) - dd_real(23.)*ex6 + pow(ex6,2)) + ex3*(dd_real(10.) - dd_real(45.)*ex6 + dd_real(24.)*pow(ex6,2))) + ex4*(dd_real(18.) - dd_real(7.)*ex6 + ex3*(dd_real(2.) + ex6 + dd_real(8.)*pow(ex6,2)) + pow(ex3,2)*(-dd_real(16.) - dd_real(26.)*ex6 + dd_real(11.)*pow(ex6,2) + dd_real(10.)*pow(ex6,3))));
return res;
}
