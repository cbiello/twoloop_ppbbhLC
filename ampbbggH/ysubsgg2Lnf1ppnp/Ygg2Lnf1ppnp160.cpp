#include <iostream>
#include "listYgg2Lnf1ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf1ppnp160(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(4.)*pow(ex2,6)*ex3 - dd_real(6.)*pow(ex4,2)*(dd_real(1.) + ex4 - dd_real(1.)*ex6)*(dd_real(3.) + (dd_real(4.) + ex3)*ex4 - dd_real(1.)*(dd_real(4.) + ex3)*ex6) + dd_real(2.)*pow(ex2,5)*ex3*(dd_real(9.)*ex4 - dd_real(5.)*(dd_real(1.) + ex6)) - dd_real(2.)*pow(ex2,4)*(ex4*(-dd_real(1.) + dd_real(3.)*ex4 - dd_real(3.)*ex6) + dd_real(2.)*ex3*(dd_real(3.) + dd_real(5.)*pow(ex4,2) + dd_real(4.)*ex6 + dd_real(2.)*pow(ex6,2) - dd_real(1.)*ex4*(dd_real(9.) + dd_real(7.)*ex6))) + dd_real(2.)*ex2*ex4*(dd_real(1.) - dd_real(27.)*pow(ex4,3) + dd_real(3.)*ex6 - dd_real(3.)*pow(ex6,2) + dd_real(3.)*pow(ex6,3) + pow(ex4,2)*(-dd_real(45.) + dd_real(57.)*ex6) - dd_real(3.)*ex4*(dd_real(7.) - dd_real(16.)*ex6 + dd_real(11.)*pow(ex6,2)) + ex3*(dd_real(1.) - dd_real(9.)*pow(ex4,3) + dd_real(3.)*pow(ex6,3) + dd_real(3.)*pow(ex4,2)*(-dd_real(1.) + dd_real(7.)*ex6) + dd_real(3.)*ex4*(dd_real(1.) + ex6 - dd_real(5.)*pow(ex6,2)))) + pow(ex2,3)*(dd_real(12.)*ex4*(dd_real(1.) + pow(ex4,2) - dd_real(2.)*ex4*ex6 + pow(ex6,2)) + ex3*(-dd_real(7.) + dd_real(30.)*pow(ex4,3) - dd_real(14.)*ex6 - dd_real(1.)*pow(ex6,2) - dd_real(6.)*pow(ex6,3) - dd_real(1.)*pow(ex4,2)*(dd_real(1.) + dd_real(60.)*ex6) + ex4*(dd_real(38.) + dd_real(8.)*ex6 + dd_real(36.)*pow(ex6,2)))) - dd_real(1.)*pow(ex2,2)*(dd_real(3.)*ex4*(-dd_real(3.) + dd_real(11.)*pow(ex4,3) - dd_real(3.)*ex6 + pow(ex6,2) - dd_real(3.)*pow(ex6,3) - dd_real(5.)*pow(ex4,2)*(-dd_real(3.) + dd_real(5.)*ex6) + ex4*(dd_real(9.) - dd_real(16.)*ex6 + dd_real(17.)*pow(ex6,2))) + ex3*(dd_real(1.) + dd_real(12.)*pow(ex4,4) + dd_real(8.)*ex6 - dd_real(7.)*pow(ex6,2) + dd_real(6.)*pow(ex6,3) - dd_real(30.)*pow(ex4,3)*(dd_real(1.) + ex6) + pow(ex4,2)*(-dd_real(25.) + dd_real(60.)*ex6 + dd_real(24.)*pow(ex6,2)) - dd_real(2.)*ex4*(dd_real(11.) - dd_real(10.)*ex6 + dd_real(18.)*pow(ex6,2) + dd_real(3.)*pow(ex6,3))));
return res;
}
