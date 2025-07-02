#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp231(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(22.)*(dd_real(1.) + ex3)*pow(ex4,4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + pow(ex2,5)*ex3*(dd_real(2.)*pow(ex4,4) + pow(ex4,3)*(dd_real(3.) - dd_real(5.)*ex6) - dd_real(11.)*pow(-dd_real(1.) + ex6,3)*(-dd_real(1.) + dd_real(2.)*ex6) + ex4*pow(-dd_real(1.) + ex6,2)*(-dd_real(22.) + dd_real(19.)*ex6) + pow(ex4,2)*(dd_real(3.) - dd_real(9.)*ex6 + dd_real(6.)*pow(ex6,2))) + ex2*pow(ex4,3)*(-dd_real(33.)*(pow(ex4,2) + ex4*(-dd_real(1.) + ex6) - dd_real(2.)*pow(-dd_real(1.) + ex6,2)) + ex3*(dd_real(77.) + dd_real(2.)*pow(ex4,3) - dd_real(157.)*ex6 + dd_real(69.)*pow(ex6,2) - dd_real(2.)*pow(ex6,3) - dd_real(1.)*pow(ex4,2)*(dd_real(19.) + dd_real(6.)*ex6) + ex4*(dd_real(69.) - dd_real(50.)*ex6 + dd_real(6.)*pow(ex6,2)))) + pow(ex2,4)*(-dd_real(33.)*ex4*(dd_real(1.) + ex4 - dd_real(1.)*ex6)*pow(-dd_real(1.) + ex6,3) + ex3*(-dd_real(4.)*pow(ex4,5) + dd_real(5.)*pow(ex4,3)*(dd_real(1.) - dd_real(2.)*ex6)*ex6 - dd_real(11.)*pow(-dd_real(1.) + ex6,3)*(-dd_real(1.) + dd_real(2.)*ex6) + pow(ex4,4)*(-dd_real(2.) + dd_real(11.)*ex6) + ex4*pow(-dd_real(1.) + ex6,2)*(dd_real(33.) - dd_real(94.)*ex6 + dd_real(22.)*pow(ex6,2)) + pow(ex4,2)*(dd_real(94.) - dd_real(210.)*ex6 + dd_real(135.)*pow(ex6,2) - dd_real(19.)*pow(ex6,3)))) + pow(ex2,2)*pow(ex4,2)*(dd_real(33.)*(-dd_real(3.)*pow(ex4,2) + ex4*(-dd_real(1.) + ex6) + dd_real(2.)*pow(-dd_real(1.) + ex6,2))*(-dd_real(1.) + ex6) + ex3*(-dd_real(99.) + dd_real(4.)*pow(ex4,4) + pow(ex4,3)*(dd_real(2.) - dd_real(12.)*ex6) + dd_real(303.)*ex6 - dd_real(273.)*pow(ex6,2) + dd_real(69.)*pow(ex6,3) + pow(ex4,2)*(dd_real(88.) - dd_real(67.)*ex6 + dd_real(12.)*pow(ex6,2)) - dd_real(1.)*ex4*(dd_real(61.) - dd_real(53.)*ex6 + dd_real(4.)*pow(ex6,2) + dd_real(4.)*pow(ex6,3)))) + pow(ex2,3)*ex4*(dd_real(11.)*(-dd_real(9.)*pow(ex4,2) + dd_real(7.)*ex4*(-dd_real(1.) + ex6) + dd_real(2.)*pow(-dd_real(1.) + ex6,2))*pow(-dd_real(1.) + ex6,2) + ex3*(dd_real(2.)*pow(ex4,5) - dd_real(1.)*pow(ex4,4)*(dd_real(5.) + dd_real(6.)*ex6) + pow(ex4,3)*(-dd_real(7.) + dd_real(16.)*ex6 + dd_real(6.)*pow(ex6,2)) + pow(-dd_real(1.) + ex6,2)*(dd_real(55.) - dd_real(113.)*ex6 + dd_real(22.)*pow(ex6,2)) - dd_real(1.)*pow(ex4,2)*(dd_real(141.) - dd_real(220.)*ex6 + dd_real(83.)*pow(ex6,2) + dd_real(2.)*pow(ex6,3)) + dd_real(2.)*ex4*(-dd_real(4.) + dd_real(51.)*ex6 - dd_real(72.)*pow(ex6,2) + dd_real(25.)*pow(ex6,3))));
return res;
}
