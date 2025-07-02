#include <iostream>
#include "listYgg2Lnf1ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf1ppnp75(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(6.)*pow(dd_real(1.) + ex3,2)*pow(ex4,4)*(dd_real(1.) + pow(ex3,2)*(dd_real(1.) + ex4 - dd_real(1.)*ex6)) + pow(ex2,5)*pow(ex3,2)*(-dd_real(6.)*pow(ex4,2) - dd_real(35.)*ex3*ex4*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + dd_real(12.)*pow(ex3,2)*(-dd_real(1.) + dd_real(2.)*ex4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6)) - dd_real(1.)*pow(ex2,2)*ex3*pow(ex4,2)*(ex4*(dd_real(11.) + dd_real(6.)*pow(ex4,2) + ex4*(dd_real(53.) - dd_real(6.)*ex6) - dd_real(35.)*ex6) + dd_real(2.)*ex3*(dd_real(6.) + dd_real(50.)*pow(ex4,2) + ex4*(dd_real(26.) - dd_real(41.)*ex6) - dd_real(3.)*ex6) + dd_real(6.)*pow(ex3,3)*(dd_real(6.) - dd_real(8.)*ex4 + pow(ex4,2))*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(1.)*pow(ex3,2)*(-dd_real(36.) - dd_real(11.)*ex4 + dd_real(6.)*pow(ex4,2))*(dd_real(1.) + ex4 - dd_real(1.)*ex6)) + pow(ex2,4)*pow(ex3,2)*(dd_real(6.)*pow(ex4,2)*(dd_real(9.) + pow(ex4,2) - dd_real(1.)*ex4*(-dd_real(15.) + ex6) - dd_real(12.)*ex6) + ex3*ex4*(-dd_real(23.) + dd_real(76.)*ex4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(6.)*pow(ex3,2)*(dd_real(1.) - dd_real(8.)*ex4 + dd_real(6.)*pow(ex4,2))*(dd_real(1.) + ex4 - dd_real(1.)*ex6)) - dd_real(6.)*pow(ex2,6)*pow(ex3,4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(6.)*ex2*(dd_real(1.) + ex3)*pow(ex4,3)*(ex4 + dd_real(2.)*pow(ex3,3)*(-dd_real(2.) + ex4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(1.)*pow(ex3,2)*(dd_real(2.) + ex4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + ex3*(-dd_real(2.) - dd_real(1.)*pow(ex4,2) + ex4*(dd_real(2.) + ex6))) + pow(ex2,3)*ex3*ex4*(dd_real(24.)*pow(ex3,3)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2))*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(1.)*pow(ex3,2)*(-dd_real(12.) - dd_real(40.)*ex4 + dd_real(47.)*pow(ex4,2))*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + pow(ex4,2)*(-dd_real(25.) - dd_real(37.)*ex4 + dd_real(37.)*ex6) + dd_real(2.)*ex3*ex4*(dd_real(26.) - dd_real(3.)*pow(ex4,3) + dd_real(3.)*pow(ex4,2)*(-dd_real(14.) + ex6) - dd_real(35.)*ex6 + ex4*(dd_real(17.) + dd_real(36.)*ex6)));
return res;
}
