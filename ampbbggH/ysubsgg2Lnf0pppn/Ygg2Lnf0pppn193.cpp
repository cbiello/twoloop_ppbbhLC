#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn193(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(18.)*pow(ex2,7)*pow(ex3,5)*(dd_real(1.) + ex3) + pow(dd_real(1.) + ex3,4)*(dd_real(115.) + dd_real(216.)*ex3 + dd_real(90.)*pow(ex3,2))*pow(ex4,4) + pow(ex2,6)*pow(ex3,4)*(dd_real(115.) + dd_real(36.)*ex4 + dd_real(18.)*pow(ex3,2)*(dd_real(2.) + dd_real(3.)*ex4) + dd_real(18.)*ex3*(dd_real(9.) + dd_real(5.)*ex4)) + dd_real(2.)*ex2*ex3*pow(dd_real(1.) + ex3,3)*pow(ex4,3)*(-dd_real(224.) + dd_real(115.)*ex4 + dd_real(9.)*pow(ex3,2)*(-dd_real(19.) + dd_real(10.)*ex4) + dd_real(18.)*ex3*(-dd_real(23.) + dd_real(12.)*ex4)) - dd_real(2.)*pow(ex2,5)*pow(ex3,3)*(ex4*(dd_real(127.) + dd_real(9.)*ex4) + dd_real(9.)*pow(ex3,3)*(-dd_real(7.) + dd_real(11.)*ex4 + dd_real(3.)*pow(ex4,2)) + dd_real(9.)*pow(ex3,2)*(-dd_real(21.) + dd_real(41.)*ex4 + dd_real(7.)*pow(ex4,2)) + ex3*(-dd_real(115.) + dd_real(386.)*ex4 + dd_real(45.)*pow(ex4,2))) + pow(ex2,2)*ex3*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(-dd_real(218.)*ex4 + dd_real(18.)*pow(ex3,3)*(dd_real(27.) - dd_real(37.)*ex4 + dd_real(5.)*pow(ex4,2)) + dd_real(18.)*pow(ex3,2)*(dd_real(67.) - dd_real(99.)*ex4 + dd_real(12.)*pow(ex4,2)) + ex3*(dd_real(702.) - dd_real(1274.)*ex4 + dd_real(115.)*pow(ex4,2))) - dd_real(2.)*pow(ex2,3)*pow(ex3,2)*(dd_real(1.) + ex3)*ex4*(ex4*(-dd_real(351.) + dd_real(100.)*ex4) + dd_real(153.)*pow(ex3,3)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2)) + dd_real(18.)*pow(ex3,2)*(dd_real(22.) - dd_real(77.)*ex4 + dd_real(25.)*pow(ex4,2)) + dd_real(2.)*ex3*(dd_real(121.) - dd_real(630.)*ex4 + dd_real(193.)*pow(ex4,2))) + pow(ex2,4)*pow(ex3,2)*(dd_real(115.)*pow(ex4,2) + dd_real(18.)*ex3*ex4*(-dd_real(41.) + dd_real(45.)*ex4 + pow(ex4,2)) + dd_real(18.)*pow(ex3,4)*(dd_real(4.) - dd_real(31.)*ex4 + dd_real(21.)*pow(ex4,2) + pow(ex4,3)) + dd_real(18.)*pow(ex3,3)*(dd_real(11.) - dd_real(107.)*ex4 + dd_real(77.)*pow(ex4,2) + dd_real(3.)*pow(ex4,3)) + pow(ex3,2)*(dd_real(115.) - dd_real(2084.)*ex4 + dd_real(1692.)*pow(ex4,2) + dd_real(54.)*pow(ex4,3)));
return res;
}
