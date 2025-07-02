#include <iostream>
#include "listYgg2Lnf1ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf1ppnp134(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,6)*pow(ex3,2)*(dd_real(64.) + dd_real(249.)*ex3 + dd_real(462.)*pow(ex3,2) + dd_real(286.)*pow(ex3,3) + dd_real(72.)*pow(ex3,4)) + dd_real(2.)*pow(dd_real(1.) + ex3,4)*(dd_real(32.) + dd_real(71.)*ex3 + dd_real(36.)*pow(ex3,2))*pow(ex4,2) + pow(ex2,5)*pow(ex3,2)*(dd_real(235.) - dd_real(561.)*ex3*(-dd_real(2.) + ex4) - dd_real(572.)*pow(ex3,3)*(-dd_real(2.) + ex4) - dd_real(144.)*pow(ex3,4)*(-dd_real(2.) + ex4) - dd_real(107.)*ex4 - dd_real(42.)*pow(ex3,2)*(-dd_real(43.) + dd_real(22.)*ex4)) + dd_real(2.)*ex2*pow(dd_real(1.) + ex3,3)*ex4*(dd_real(85.)*ex4 + dd_real(72.)*pow(ex3,3)*(-dd_real(1.) + dd_real(2.)*ex4) + dd_real(2.)*pow(ex3,2)*(-dd_real(71.) + dd_real(178.)*ex4) + ex3*(-dd_real(64.) + dd_real(291.)*ex4)) + pow(ex2,4)*ex3*(dd_real(1.) + ex3)*(-dd_real(107.)*ex4 + dd_real(72.)*pow(ex3,4)*(dd_real(6.) - dd_real(8.)*ex4 + pow(ex4,2)) + ex3*(dd_real(405.) - dd_real(966.)*ex4 + dd_real(64.)*pow(ex4,2)) + dd_real(2.)*pow(ex3,3)*(dd_real(642.) - dd_real(928.)*ex4 + dd_real(107.)*pow(ex4,2)) + dd_real(2.)*pow(ex3,2)*(dd_real(681.) - dd_real(1164.)*ex4 + dd_real(124.)*pow(ex4,2))) + pow(ex2,3)*ex3*pow(dd_real(1.) + ex3,2)*(ex4*(-dd_real(405.) + dd_real(128.)*ex4) + dd_real(288.)*pow(ex3,3)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2)) + dd_real(8.)*pow(ex3,2)*(dd_real(71.) - dd_real(267.)*ex4 + dd_real(89.)*pow(ex4,2)) + dd_real(2.)*ex3*(dd_real(149.) - dd_real(936.)*ex4 + dd_real(333.)*pow(ex4,2))) + dd_real(2.)*pow(ex2,2)*pow(dd_real(1.) + ex3,2)*(dd_real(32.)*pow(ex4,2) + dd_real(2.)*ex3*ex4*(-dd_real(117.) + dd_real(163.)*ex4) + dd_real(36.)*pow(ex3,4)*(dd_real(1.) - dd_real(8.)*ex4 + dd_real(6.)*pow(ex4,2)) + pow(ex3,3)*(dd_real(71.) - dd_real(784.)*ex4 + dd_real(642.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(32.) - dd_real(724.)*ex4 + dd_real(717.)*pow(ex4,2)));
return res;
}
