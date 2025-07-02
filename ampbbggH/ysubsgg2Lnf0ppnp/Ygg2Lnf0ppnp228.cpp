#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp228(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(12.)*pow(dd_real(1.) + ex3,3)*pow(ex4,5) + dd_real(12.)*pow(ex2,7)*pow(ex3,2)*(dd_real(2.)*ex4 + ex3*(-dd_real(1.) + ex6)) + dd_real(6.)*ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,4)*(-dd_real(9.) + dd_real(2.)*ex6 + dd_real(2.)*ex3*(-dd_real(5.) + dd_real(2.)*ex4 + ex6)) + pow(ex2,5)*ex3*(-dd_real(12.)*pow(ex4,2)*(dd_real(1.) + dd_real(3.)*ex6) + ex3*ex4*(dd_real(107.) + dd_real(72.)*pow(ex4,2) - dd_real(35.)*ex6 - dd_real(1.)*ex4*(dd_real(207.) + dd_real(2.)*ex6)) + dd_real(12.)*pow(ex3,2)*(-dd_real(1.) + ex4*(dd_real(10.) - dd_real(8.)*ex6) + ex6 + dd_real(2.)*pow(ex4,2)*(-dd_real(5.) + dd_real(3.)*ex6))) + pow(ex2,6)*pow(ex3,2)*(ex4*(dd_real(65.) - dd_real(72.)*ex4 + dd_real(7.)*ex6) - dd_real(12.)*ex3*(dd_real(2.) - dd_real(2.)*ex6 + ex4*(-dd_real(5.) + dd_real(4.)*ex6))) + pow(ex2,3)*pow(ex4,2)*(dd_real(12.)*pow(ex3,3)*(-dd_real(10.) + ex4*(dd_real(20.) - dd_real(8.)*ex6) + pow(ex4,2)*(-dd_real(5.) + ex6) + dd_real(6.)*ex6) + ex4*(-dd_real(1.) + dd_real(11.)*ex4 + dd_real(25.)*ex6) - dd_real(2.)*ex3*(dd_real(6.)*pow(ex4,2) - dd_real(24.)*(-dd_real(2.) + ex6) + ex4*(-dd_real(94.) + dd_real(5.)*ex6)) + pow(ex3,2)*(ex4*(dd_real(465.) - dd_real(131.)*ex6) + pow(ex4,2)*(-dd_real(101.) + dd_real(12.)*ex6) + dd_real(6.)*(-dd_real(39.) + dd_real(20.)*ex6))) + pow(ex2,2)*(dd_real(1.) + ex3)*pow(ex4,3)*(dd_real(42.) + ex4 + dd_real(12.)*pow(ex3,2)*(dd_real(10.) + pow(ex4,2) + dd_real(2.)*ex4*(-dd_real(5.) + ex6) - dd_real(4.)*ex6) - dd_real(18.)*ex6 + ex3*(dd_real(186.) - dd_real(66.)*ex6 + ex4*(-dd_real(131.) + dd_real(24.)*ex6))) + pow(ex2,4)*ex4*(dd_real(11.)*pow(ex4,2)*(-dd_real(1.) + ex6) - dd_real(12.)*pow(ex3,3)*(-dd_real(5.) + dd_real(4.)*ex6 + dd_real(2.)*pow(ex4,2)*(-dd_real(5.) + dd_real(2.)*ex6) - dd_real(4.)*ex4*(-dd_real(5.) + dd_real(3.)*ex6)) + dd_real(2.)*ex3*ex4*(-dd_real(41.) - dd_real(7.)*ex6 + dd_real(6.)*ex4*(dd_real(2.) + dd_real(3.)*ex6)) + pow(ex3,2)*(dd_real(66.) - dd_real(24.)*pow(ex4,3) + pow(ex4,2)*(dd_real(231.) - dd_real(17.)*ex6) - dd_real(42.)*ex6 + ex4*(-dd_real(369.) + dd_real(118.)*ex6)));
return res;
}
