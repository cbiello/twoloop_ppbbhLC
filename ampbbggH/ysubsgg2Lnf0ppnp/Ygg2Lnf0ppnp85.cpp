#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp85(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(5.)*pow(ex2,5)*pow(ex3,3)*(dd_real(11.) + dd_real(12.)*ex3) + pow(ex2,4)*pow(ex3,2)*(dd_real(55.) + dd_real(40.)*pow(ex4,2) - dd_real(60.)*pow(ex3,2)*(-dd_real(3.) + dd_real(2.)*ex4) + ex4*(dd_real(44.) - dd_real(40.)*ex6) + ex3*(dd_real(233.) - dd_real(42.)*ex4 - dd_real(8.)*ex6)) + pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(-dd_real(4.) + dd_real(60.)*pow(ex3,2) + dd_real(5.)*ex3*(dd_real(7.) + dd_real(8.)*ex4 - dd_real(8.)*ex6)) + ex2*(dd_real(1.) + ex3)*ex4*(-dd_real(4.)*ex4 + dd_real(60.)*pow(ex3,3)*(-dd_real(2.) + dd_real(3.)*ex4) + pow(ex3,2)*(dd_real(84.)*pow(ex4,2) + ex4*(dd_real(85.) - dd_real(84.)*ex6) + dd_real(22.)*(-dd_real(7.) + dd_real(2.)*ex6)) + ex3*(-dd_real(55.) + dd_real(4.)*pow(ex4,2) + dd_real(4.)*ex6 - dd_real(1.)*ex4*(dd_real(17.) + dd_real(4.)*ex6))) + pow(ex2,3)*ex3*(dd_real(60.)*pow(ex3,3)*(dd_real(3.) - dd_real(6.)*ex4 + pow(ex4,2)) + dd_real(4.)*ex4*(dd_real(2.) + ex4 - dd_real(1.)*ex6) - dd_real(1.)*ex3*(-dd_real(118.) + dd_real(40.)*pow(ex4,3) + pow(ex4,2)*(dd_real(8.) - dd_real(40.)*ex6) + dd_real(8.)*ex6 + ex4*(dd_real(49.) + dd_real(36.)*ex6)) + pow(ex3,2)*(dd_real(297.) - dd_real(57.)*pow(ex4,2) - dd_real(12.)*ex6 + ex4*(-dd_real(370.) + dd_real(52.)*ex6))) + pow(ex2,2)*ex3*(dd_real(60.)*pow(ex3,3)*(dd_real(1.) - dd_real(6.)*ex4 + dd_real(3.)*pow(ex4,2)) + ex4*(-dd_real(51.) - dd_real(40.)*pow(ex4,2) + dd_real(4.)*ex6 + ex4*(-dd_real(52.) + dd_real(40.)*ex6)) + ex3*(dd_real(59.) - dd_real(36.)*pow(ex4,3) - dd_real(4.)*ex6 + dd_real(2.)*pow(ex4,2)*(-dd_real(59.) + dd_real(18.)*ex6) + ex4*(-dd_real(314.) + dd_real(60.)*ex6)) + pow(ex3,2)*(dd_real(119.) + dd_real(44.)*pow(ex4,3) + pow(ex4,2)*(dd_real(53.) - dd_real(44.)*ex6) - dd_real(4.)*ex6 + ex4*(-dd_real(602.) + dd_real(96.)*ex6)));
return res;
}
