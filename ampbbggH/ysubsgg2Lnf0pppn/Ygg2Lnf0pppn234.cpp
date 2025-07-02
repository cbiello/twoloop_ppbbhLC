#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn234(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(9.)*pow(ex2,7)*pow(ex3,5)*(dd_real(1.) + ex3) + pow(dd_real(1.) + ex3,4)*(dd_real(91.) + dd_real(162.)*ex3 + dd_real(81.)*pow(ex3,2))*pow(ex4,4) + pow(ex2,6)*pow(ex3,4)*(dd_real(91.) + dd_real(18.)*ex4 + dd_real(27.)*pow(ex3,2)*(dd_real(2.) + ex4) + dd_real(45.)*ex3*(dd_real(3.) + ex4)) + ex2*ex3*pow(dd_real(1.) + ex3,3)*pow(ex4,3)*(-dd_real(358.) + dd_real(182.)*ex4 + dd_real(18.)*ex3*(-dd_real(35.) + dd_real(18.)*ex4) + dd_real(9.)*pow(ex3,2)*(-dd_real(35.) + dd_real(18.)*ex4)) - dd_real(1.)*pow(ex2,5)*pow(ex3,3)*(ex4*(dd_real(194.) + dd_real(9.)*ex4) + dd_real(27.)*pow(ex3,3)*(-dd_real(5.) + dd_real(9.)*ex4 + pow(ex4,2)) + dd_real(9.)*pow(ex3,2)*(-dd_real(33.) + dd_real(73.)*ex4 + dd_real(7.)*pow(ex4,2)) + ex3*(-dd_real(182.) + dd_real(628.)*ex4 + dd_real(45.)*pow(ex4,2))) + pow(ex2,2)*ex3*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(-dd_real(176.)*ex4 + dd_real(27.)*pow(ex3,3)*(dd_real(17.) - dd_real(23.)*ex4 + dd_real(3.)*pow(ex4,2)) + dd_real(9.)*pow(ex3,2)*(dd_real(103.) - dd_real(155.)*ex4 + dd_real(18.)*pow(ex4,2)) + ex3*(dd_real(552.) - dd_real(1013.)*ex4 + dd_real(91.)*pow(ex4,2))) - dd_real(1.)*pow(ex2,3)*pow(ex3,2)*(dd_real(1.) + ex3)*ex4*(ex4*(-dd_real(552.) + dd_real(167.)*ex4) + dd_real(297.)*pow(ex3,3)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2)) + dd_real(18.)*pow(ex3,2)*(dd_real(34.) - dd_real(125.)*ex4 + dd_real(41.)*pow(ex4,2)) + dd_real(2.)*ex3*(dd_real(188.) - dd_real(993.)*ex4 + dd_real(314.)*pow(ex4,2))) + pow(ex2,4)*pow(ex3,2)*(dd_real(91.)*pow(ex4,2) + dd_real(3.)*ex3*ex4*(-dd_real(190.) + dd_real(220.)*ex4 + dd_real(3.)*pow(ex4,2)) + dd_real(9.)*pow(ex3,4)*(dd_real(8.) - dd_real(63.)*ex4 + dd_real(45.)*pow(ex4,2) + pow(ex4,3)) + dd_real(9.)*pow(ex3,3)*(dd_real(17.) - dd_real(179.)*ex4 + dd_real(137.)*pow(ex4,2) + dd_real(3.)*pow(ex4,3)) + pow(ex3,2)*(dd_real(91.) - dd_real(1634.)*ex4 + dd_real(1407.)*pow(ex4,2) + dd_real(27.)*pow(ex4,3)));
return res;
}
