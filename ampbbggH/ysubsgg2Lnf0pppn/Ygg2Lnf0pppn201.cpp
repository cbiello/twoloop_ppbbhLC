#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn201(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(6.)*pow(ex2,7)*pow(ex3,5)*(dd_real(1.) + ex3) + pow(dd_real(1.) + ex3,4)*(dd_real(75.) + dd_real(116.)*ex3 + dd_real(50.)*pow(ex3,2))*pow(ex4,4) + pow(ex2,6)*pow(ex3,4)*(dd_real(75.) + dd_real(12.)*ex4 + dd_real(2.)*pow(ex3,2)*(dd_real(16.) + dd_real(9.)*ex4) + ex3*(dd_real(98.) + dd_real(30.)*ex4)) + dd_real(2.)*ex2*ex3*pow(dd_real(1.) + ex3,3)*pow(ex4,3)*(-dd_real(148.) + dd_real(75.)*ex4 + pow(ex3,2)*(-dd_real(97.) + dd_real(50.)*ex4) + dd_real(2.)*ex3*(-dd_real(113.) + dd_real(58.)*ex4)) - dd_real(2.)*pow(ex2,5)*pow(ex3,3)*(ex4*(dd_real(79.) + dd_real(3.)*ex4) + dd_real(3.)*ex3*(-dd_real(25.) + dd_real(82.)*ex4 + dd_real(5.)*pow(ex4,2)) + pow(ex3,3)*(-dd_real(41.) + dd_real(73.)*ex4 + dd_real(9.)*pow(ex4,2)) + pow(ex3,2)*(-dd_real(107.) + dd_real(231.)*ex4 + dd_real(21.)*pow(ex4,2))) + pow(ex2,2)*ex3*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(-dd_real(146.)*ex4 + pow(ex3,3)*(dd_real(282.) - dd_real(382.)*ex4 + dd_real(50.)*pow(ex4,2)) + dd_real(2.)*pow(ex3,2)*(dd_real(333.) - dd_real(493.)*ex4 + dd_real(58.)*pow(ex4,2)) + ex3*(dd_real(454.) - dd_real(806.)*ex4 + dd_real(75.)*pow(ex4,2))) - dd_real(2.)*pow(ex2,3)*pow(ex3,2)*(dd_real(1.) + ex3)*ex4*(ex4*(-dd_real(227.) + dd_real(70.)*ex4) + dd_real(91.)*pow(ex3,3)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2)) + dd_real(2.)*ex3*(dd_real(77.) - dd_real(386.)*ex4 + dd_real(123.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(220.) - dd_real(786.)*ex4 + dd_real(258.)*pow(ex4,2))) + pow(ex2,4)*pow(ex3,2)*(dd_real(75.)*pow(ex4,2) + dd_real(2.)*ex3*ex4*(-dd_real(233.) + dd_real(267.)*ex4 + dd_real(3.)*pow(ex4,2)) + pow(ex3,4)*(dd_real(44.) - dd_real(346.)*ex4 + dd_real(246.)*pow(ex4,2) + dd_real(6.)*pow(ex4,3)) + dd_real(2.)*pow(ex3,3)*(dd_real(55.) - dd_real(557.)*ex4 + dd_real(423.)*pow(ex4,2) + dd_real(9.)*pow(ex4,3)) + pow(ex3,2)*(dd_real(75.) - dd_real(1252.)*ex4 + dd_real(1068.)*pow(ex4,2) + dd_real(18.)*pow(ex4,3)));
return res;
}
