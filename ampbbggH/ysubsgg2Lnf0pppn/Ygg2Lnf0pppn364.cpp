#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn364(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(6.)*pow(ex2,7)*pow(ex3,5)*(dd_real(1.) + ex3) + pow(dd_real(1.) + ex3,4)*(dd_real(45.) + dd_real(71.)*ex3 + dd_real(32.)*pow(ex3,2))*pow(ex4,4) + pow(ex2,6)*pow(ex3,4)*(dd_real(45.) + dd_real(12.)*ex4 + dd_real(2.)*pow(ex3,2)*(dd_real(7.) + dd_real(9.)*ex4) + ex3*(dd_real(53.) + dd_real(30.)*ex4)) + dd_real(2.)*ex2*ex3*pow(dd_real(1.) + ex3,3)*pow(ex4,3)*(-dd_real(88.) + dd_real(45.)*ex4 + pow(ex3,2)*(-dd_real(61.) + dd_real(32.)*ex4) + ex3*(-dd_real(136.) + dd_real(71.)*ex4)) - dd_real(2.)*pow(ex2,5)*pow(ex3,3)*(ex4*(dd_real(49.) + dd_real(3.)*ex4) + dd_real(3.)*ex3*(-dd_real(15.) + dd_real(47.)*ex4 + dd_real(5.)*pow(ex4,2)) + pow(ex3,3)*(-dd_real(23.) + dd_real(37.)*ex4 + dd_real(9.)*pow(ex4,2)) + pow(ex3,2)*(-dd_real(62.) + dd_real(123.)*ex4 + dd_real(21.)*pow(ex4,2))) + pow(ex2,2)*ex3*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(-dd_real(86.)*ex4 + dd_real(2.)*pow(ex3,3)*(dd_real(87.) - dd_real(119.)*ex4 + dd_real(16.)*pow(ex4,2)) + ex3*(dd_real(274.) - dd_real(476.)*ex4 + dd_real(45.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(396.) - dd_real(590.)*ex4 + dd_real(71.)*pow(ex4,2))) - dd_real(2.)*pow(ex2,3)*pow(ex3,2)*(dd_real(1.) + ex3)*ex4*(ex4*(-dd_real(137.) + dd_real(40.)*ex4) + dd_real(55.)*pow(ex3,3)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2)) + dd_real(2.)*pow(ex3,2)*(dd_real(65.) - dd_real(231.)*ex4 + dd_real(75.)*pow(ex4,2)) + ex3*(dd_real(94.) - dd_real(457.)*ex4 + dd_real(141.)*pow(ex4,2))) + pow(ex2,4)*pow(ex3,2)*(dd_real(45.)*pow(ex4,2) + ex3*ex4*(-dd_real(286.) + dd_real(309.)*ex4 + dd_real(6.)*pow(ex4,2)) + dd_real(2.)*pow(ex3,4)*(dd_real(13.) - dd_real(101.)*ex4 + dd_real(69.)*pow(ex4,2) + dd_real(3.)*pow(ex4,3)) + pow(ex3,3)*(dd_real(65.) - dd_real(646.)*ex4 + dd_real(468.)*pow(ex4,2) + dd_real(18.)*pow(ex4,3)) + pow(ex3,2)*(dd_real(45.) - dd_real(742.)*ex4 + dd_real(600.)*pow(ex4,2) + dd_real(18.)*pow(ex4,3)));
return res;
}
