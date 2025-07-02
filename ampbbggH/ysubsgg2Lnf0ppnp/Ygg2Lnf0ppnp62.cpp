#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp62(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,4)*(-dd_real(2.)*pow(ex4,2) + ex3*ex4*(dd_real(6.) + dd_real(5.)*ex4 - dd_real(6.)*ex6) - dd_real(3.)*pow(ex3,2)*(dd_real(1.) + ex4 - dd_real(1.)*ex6)*(-dd_real(1.) + ex6))*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(5.)*pow(ex4,3)*pow(ex4 + ex3*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(1.)*ex6,2) + pow(ex2,3)*(pow(ex4,2)*(dd_real(9.) + dd_real(6.)*pow(ex4,2) + ex4*(dd_real(19.) - dd_real(14.)*ex6) - dd_real(17.)*ex6 + dd_real(8.)*pow(ex6,2)) + pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2)*(dd_real(5.) - dd_real(5.)*ex6 + ex4*(-dd_real(9.) + dd_real(6.)*ex6)) - dd_real(1.)*ex3*ex4*(dd_real(10.)*pow(ex4,3) + pow(ex4,2)*(dd_real(14.) - dd_real(20.)*ex6) + (-dd_real(19.) + ex6)*pow(-dd_real(1.) + ex6,2) + dd_real(3.)*ex4*(-dd_real(5.) + dd_real(2.)*ex6 + dd_real(3.)*pow(ex6,2)))) + ex2*pow(ex4,2)*(dd_real(11.)*pow(ex4,3) + pow(ex4,2)*(dd_real(17.) - dd_real(27.)*ex6) - dd_real(1.)*pow(ex3,2)*(dd_real(3.)*ex4 + dd_real(5.)*(-dd_real(3.) + ex6))*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) - dd_real(5.)*(-dd_real(1.) + ex6)*pow(ex6,2) + ex4*ex6*(-dd_real(22.) + dd_real(21.)*ex6) + ex3*(dd_real(8.)*pow(ex4,3) + pow(ex4,2)*(dd_real(47.) - dd_real(26.)*ex6) - dd_real(10.)*ex6*(dd_real(2.) - dd_real(3.)*ex6 + pow(ex6,2)) + ex4*(dd_real(39.) - dd_real(77.)*ex6 + dd_real(28.)*pow(ex6,2)))) + pow(ex2,2)*ex4*(-dd_real(1.)*pow(ex3,2)*(dd_real(15.) + dd_real(3.)*ex4*(-dd_real(3.) + ex6) - dd_real(10.)*ex6)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) + ex4*(-dd_real(4.)*pow(ex4,3) + dd_real(4.)*pow(ex4,2)*(-dd_real(7.) + dd_real(3.)*ex6) + ex4*(-dd_real(21.) + dd_real(44.)*ex6 - dd_real(12.)*pow(ex6,2)) + dd_real(4.)*ex6*(dd_real(3.) - dd_real(4.)*ex6 + pow(ex6,2))) + ex3*(dd_real(5.)*pow(ex4,4) + dd_real(10.)*pow(-dd_real(1.) + ex6,2)*ex6 - dd_real(1.)*pow(ex4,3)*(dd_real(5.) + dd_real(9.)*ex6) + pow(ex4,2)*(-dd_real(58.) + dd_real(44.)*ex6 + dd_real(3.)*pow(ex6,2)) + ex4*(-dd_real(48.) + dd_real(96.)*ex6 - dd_real(49.)*pow(ex6,2) + pow(ex6,3))));
return res;
}
