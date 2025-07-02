#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp217(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(33.)*pow(ex2,4)*pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2)*(-dd_real(1.) + ex6) + pow(ex4,3)*(dd_real(35.) + dd_real(25.)*pow(ex4,2) + ex4*(dd_real(62.) - dd_real(50.)*ex6) + dd_real(33.)*pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) - dd_real(62.)*ex6 + dd_real(25.)*pow(ex6,2) + dd_real(4.)*ex3*(dd_real(20.) + dd_real(19.)*pow(ex4,2) + ex4*(dd_real(39.) - dd_real(38.)*ex6) - dd_real(39.)*ex6 + dd_real(19.)*pow(ex6,2))) - dd_real(1.)*pow(ex2,3)*ex3*(dd_real(1.) + ex4 - dd_real(1.)*ex6)*(dd_real(33.)*ex3*(pow(-dd_real(1.) + ex6,2) - dd_real(2.)*ex4*pow(-dd_real(1.) + ex6,2) + pow(ex4,2)*(-dd_real(3.) + dd_real(2.)*ex6)) + dd_real(2.)*ex4*(-dd_real(51.) + dd_real(89.)*ex6 - dd_real(38.)*pow(ex6,2) + ex4*(-dd_real(49.) + dd_real(38.)*ex6))) + ex2*pow(ex4,2)*(-dd_real(35.) + dd_real(35.)*pow(ex4,3) + pow(ex4,2)*(dd_real(61.) - dd_real(55.)*ex6) + dd_real(83.)*ex6 - dd_real(63.)*pow(ex6,2) + dd_real(15.)*pow(ex6,3) + dd_real(33.)*pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2)*(-dd_real(3.) + ex4 + ex6) + ex4*(-dd_real(13.) + dd_real(2.)*ex6 + dd_real(5.)*pow(ex6,2)) + dd_real(2.)*ex3*(-dd_real(80.) + dd_real(49.)*pow(ex4,3) + pow(ex4,2)*(dd_real(24.) - dd_real(71.)*ex6) + dd_real(185.)*ex6 - dd_real(132.)*pow(ex6,2) + dd_real(27.)*pow(ex6,3) + ex4*(-dd_real(105.) + dd_real(108.)*ex6 - dd_real(5.)*pow(ex6,2)))) + pow(ex2,2)*ex4*(dd_real(33.)*pow(ex3,2)*(dd_real(3.) + ex4*(-dd_real(3.) + ex6) - dd_real(2.)*ex6)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) + ex4*(-dd_real(49.) + dd_real(121.)*ex6 - dd_real(97.)*pow(ex6,2) + dd_real(25.)*pow(ex6,3) + dd_real(5.)*pow(ex4,2)*(-dd_real(7.) + dd_real(5.)*ex6) - dd_real(2.)*ex4*(dd_real(43.) - dd_real(66.)*ex6 + dd_real(25.)*pow(ex6,2))) + dd_real(2.)*ex3*(-dd_real(1.)*pow(-dd_real(1.) + ex6,2)*(-dd_real(40.) + dd_real(27.)*ex6) + pow(ex4,3)*(-dd_real(98.) + dd_real(38.)*ex6) + pow(ex4,2)*(-dd_real(162.) + dd_real(247.)*ex6 - dd_real(76.)*pow(ex6,2)) + dd_real(2.)*ex4*(-dd_real(12.) + dd_real(54.)*ex6 - dd_real(61.)*pow(ex6,2) + dd_real(19.)*pow(ex6,3))));
return res;
}
