#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn174(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(3.)*pow(ex2,7)*pow(ex3,5)*(dd_real(1.) + ex3) + pow(dd_real(1.) + ex3,4)*(-dd_real(193.) - dd_real(2.)*ex3 + dd_real(7.)*pow(ex3,2))*pow(ex4,4) + ex2*ex3*pow(dd_real(1.) + ex3,3)*pow(ex4,3)*(dd_real(774.) + ex3*(dd_real(14.) - dd_real(4.)*ex4) - dd_real(386.)*ex4 + pow(ex3,2)*(-dd_real(25.) + dd_real(14.)*ex4)) + pow(ex2,6)*pow(ex3,4)*(-dd_real(193.) + dd_real(6.)*ex4 + pow(ex3,2)*(-dd_real(2.) + dd_real(9.)*ex4) + ex3*(-dd_real(11.) + dd_real(15.)*ex4)) + pow(ex2,2)*ex3*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(388.)*ex4 + ex3*(-dd_real(1156.) + dd_real(1561.)*ex4 - dd_real(193.)*pow(ex4,2)) + pow(ex3,2)*(-dd_real(27.) + dd_real(23.)*ex4 - dd_real(2.)*pow(ex4,2)) + pow(ex3,3)*(dd_real(33.) - dd_real(47.)*ex4 + dd_real(7.)*pow(ex4,2))) - dd_real(1.)*pow(ex2,3)*pow(ex3,2)*(dd_real(1.) + ex3)*ex4*(dd_real(17.)*(dd_real(68.) - dd_real(23.)*ex4)*ex4 + ex3*(-dd_real(768.) + dd_real(2354.)*ex4 - dd_real(796.)*pow(ex4,2)) + dd_real(19.)*pow(ex3,3)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2)) - dd_real(2.)*pow(ex3,2)*(dd_real(10.) - dd_real(21.)*ex4 + dd_real(9.)*pow(ex4,2))) - dd_real(1.)*pow(ex2,5)*pow(ex3,3)*(ex4*(-dd_real(382.) + dd_real(3.)*ex4) + pow(ex3,3)*(-dd_real(5.) + ex4 + dd_real(9.)*pow(ex4,2)) + ex3*(dd_real(386.) - dd_real(796.)*ex4 + dd_real(15.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(13.) - dd_real(45.)*ex4 + dd_real(21.)*pow(ex4,2))) + pow(ex2,4)*pow(ex3,2)*(-dd_real(193.)*pow(ex4,2) + ex3*ex4*(dd_real(1150.) - dd_real(1176.)*ex4 + dd_real(3.)*pow(ex4,2)) + pow(ex3,4)*(dd_real(4.) - dd_real(29.)*ex4 + dd_real(15.)*pow(ex4,2) + dd_real(3.)*pow(ex4,3)) + pow(ex3,2)*(-dd_real(193.) + dd_real(1578.)*ex4 - dd_real(1227.)*pow(ex4,2) + dd_real(9.)*pow(ex4,3)) + pow(ex3,3)*(-dd_real(5.) + dd_real(31.)*ex4 - dd_real(45.)*pow(ex4,2) + dd_real(9.)*pow(ex4,3)));
return res;
}
