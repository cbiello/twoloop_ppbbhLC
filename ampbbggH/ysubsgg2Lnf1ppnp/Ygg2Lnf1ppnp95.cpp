#include <iostream>
#include "listYgg2Lnf1ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf1ppnp95(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(8.)*pow(ex2,7)*pow(ex3,2) - dd_real(8.)*pow(dd_real(1.) + ex3,2)*pow(ex4,3) - dd_real(8.)*pow(ex2,6)*pow(ex3,2)*(-dd_real(4.) + dd_real(3.)*ex4) - dd_real(8.)*ex2*(dd_real(1.) + ex3)*pow(ex4,2)*(-dd_real(1.) + dd_real(2.)*ex4 + ex3*(-dd_real(3.) + dd_real(4.)*ex4)) + pow(ex2,5)*ex3*(-dd_real(16.)*ex4 + ex3*(dd_real(43.) + dd_real(19.)*pow(ex4,2) + dd_real(10.)*ex6 - dd_real(5.)*pow(ex6,2) + dd_real(2.)*ex4*(-dd_real(53.) + dd_real(5.)*ex6))) - dd_real(1.)*pow(ex2,2)*ex4*(ex4*(-dd_real(11.) + dd_real(5.)*pow(ex4,2) - dd_real(10.)*ex6 + dd_real(5.)*pow(ex6,2) - dd_real(2.)*ex4*(-dd_real(9.) + dd_real(5.)*ex6)) + pow(ex3,2)*(dd_real(24.) + dd_real(5.)*pow(ex4,3) + pow(ex4,2)*(dd_real(58.) - dd_real(10.)*ex6) + ex4*(-dd_real(91.) - dd_real(10.)*ex6 + dd_real(5.)*pow(ex6,2))) + dd_real(2.)*ex3*(dd_real(8.) + dd_real(5.)*pow(ex4,3) + pow(ex4,2)*(dd_real(34.) - dd_real(10.)*ex6) + ex4*(-dd_real(43.) - dd_real(10.)*ex6 + dd_real(5.)*pow(ex6,2)))) + pow(ex2,4)*ex3*(dd_real(16.)*ex4*(-dd_real(3.) + dd_real(2.)*ex4) + ex3*(dd_real(27.) + dd_real(2.)*pow(ex4,3) + pow(ex4,2)*(dd_real(111.) - dd_real(20.)*ex6) + dd_real(10.)*ex6 - dd_real(5.)*pow(ex6,2) + dd_real(2.)*ex4*(-dd_real(72.) - dd_real(5.)*ex6 + dd_real(5.)*pow(ex6,2)))) - dd_real(1.)*pow(ex2,3)*(-dd_real(1.)*pow(ex4,2)*(dd_real(13.) + dd_real(5.)*pow(ex4,2) - dd_real(10.)*ex4*(-dd_real(1.) + ex6) - dd_real(10.)*ex6 + dd_real(5.)*pow(ex6,2)) + dd_real(2.)*ex3*ex4*(dd_real(19.) + dd_real(3.)*pow(ex4,2) + dd_real(10.)*ex6 - dd_real(5.)*pow(ex6,2) + dd_real(2.)*ex4*(-dd_real(29.) + dd_real(5.)*ex6)) + pow(ex3,2)*(-dd_real(8.) + dd_real(5.)*pow(ex4,4) + pow(ex4,3)*(dd_real(32.) - dd_real(10.)*ex6) + ex4*(dd_real(86.) + dd_real(20.)*ex6 - dd_real(10.)*pow(ex6,2)) + pow(ex4,2)*(-dd_real(159.) + dd_real(10.)*ex6 + dd_real(5.)*pow(ex6,2))));
return res;
}
