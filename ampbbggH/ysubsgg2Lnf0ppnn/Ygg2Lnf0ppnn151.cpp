#include <iostream>
#include "listYgg2Lnf0ppnn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnn151(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,4)*ex3*(dd_real(59.) + dd_real(18.)*ex4 + dd_real(59.)*ex3*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(59.)*ex6) - dd_real(1.)*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(-dd_real(50.) + dd_real(9.)*pow(ex4,2) + dd_real(41.)*ex6 + dd_real(9.)*pow(ex6,2) - dd_real(1.)*ex4*(dd_real(41.) + dd_real(18.)*ex6)) - dd_real(1.)*pow(ex2,3)*(dd_real(18.)*pow(ex4,2) + ex4*(dd_real(50.) - dd_real(68.)*ex6) + dd_real(59.)*(-dd_real(1.) + ex6) + pow(ex3,2)*(-dd_real(109.) + dd_real(127.)*pow(ex4,2) + dd_real(100.)*ex6 + dd_real(9.)*pow(ex6,2) - dd_real(2.)*ex4*(-dd_real(9.) + dd_real(68.)*ex6)) + ex3*(dd_real(145.)*pow(ex4,2) - dd_real(5.)*ex4*(-dd_real(20.) + dd_real(39.)*ex6) + dd_real(3.)*(-dd_real(56.) + dd_real(53.)*ex6 + dd_real(3.)*pow(ex6,2)))) - dd_real(1.)*ex2*(dd_real(1.) + ex3)*ex4*(dd_real(9.)*pow(ex4,3) - dd_real(2.)*pow(ex4,2)*(dd_real(59.) + dd_real(9.)*ex6) - dd_real(2.)*(-dd_real(50.) + dd_real(41.)*ex6 + dd_real(9.)*pow(ex6,2)) + ex4*(-dd_real(68.) + dd_real(136.)*ex6 + dd_real(9.)*pow(ex6,2)) + ex3*(dd_real(9.)*pow(ex4,3) - dd_real(2.)*pow(ex4,2)*(dd_real(59.) + dd_real(9.)*ex6) - dd_real(2.)*(-dd_real(50.) + dd_real(41.)*ex6 + dd_real(9.)*pow(ex6,2)) + ex4*(-dd_real(27.) + dd_real(136.)*ex6 + dd_real(9.)*pow(ex6,2)))) + pow(ex2,2)*(dd_real(50.) + dd_real(68.)*pow(ex4,3) - dd_real(41.)*ex6 - dd_real(9.)*pow(ex6,2) - dd_real(1.)*pow(ex4,2)*(dd_real(18.) + dd_real(77.)*ex6) + dd_real(3.)*ex4*(-dd_real(56.) + dd_real(59.)*ex6 + dd_real(3.)*pow(ex6,2)) + pow(ex3,2)*(dd_real(50.) + dd_real(77.)*pow(ex4,3) - dd_real(41.)*ex6 - dd_real(9.)*pow(ex6,2) - dd_real(5.)*pow(ex4,2)*(dd_real(30.) + dd_real(19.)*ex6) + ex4*(-dd_real(177.) + dd_real(218.)*ex6 + dd_real(18.)*pow(ex6,2))) + ex3*(dd_real(145.)*pow(ex4,3) - dd_real(1.)*pow(ex4,2)*(dd_real(177.) + dd_real(172.)*ex6) - dd_real(2.)*(-dd_real(50.) + dd_real(41.)*ex6 + dd_real(9.)*pow(ex6,2)) + ex4*(-dd_real(345.) + dd_real(395.)*ex6 + dd_real(27.)*pow(ex6,2))));
return res;
}
