#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn419(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(dd_real(1.) + ex3,2)*(-dd_real(9.) + dd_real(48.)*ex3 + dd_real(12.)*pow(ex3,2) + dd_real(8.)*pow(ex3,3))*pow(ex4,7) - dd_real(8.)*pow(ex2,7)*pow(ex3,5)*pow(-dd_real(1.) + ex6,2) + dd_real(2.)*ex2*ex3*(dd_real(1.) + ex3)*pow(ex4,6)*(dd_real(6.)*ex4 + dd_real(12.)*pow(ex3,2)*(-dd_real(4.) + ex6) - dd_real(15.)*ex6 + dd_real(4.)*pow(ex3,3)*(-dd_real(7.) + dd_real(2.)*ex6) + dd_real(12.)*ex3*(-dd_real(11.) + dd_real(4.)*ex6)) + dd_real(4.)*pow(ex2,6)*pow(ex3,4)*ex4*(-dd_real(1.) + ex6)*(dd_real(3.)*(-dd_real(1.) + ex6) + dd_real(2.)*ex3*(-dd_real(7.) + dd_real(5.)*ex6)) - dd_real(8.)*pow(ex2,5)*pow(ex3,3)*pow(ex4,2)*(dd_real(6.)*pow(-dd_real(1.) + ex6,2) + ex3*(dd_real(11.) - dd_real(17.)*ex6 + dd_real(6.)*pow(ex6,2)) + pow(ex3,2)*(dd_real(21.) - dd_real(30.)*ex6 + dd_real(10.)*pow(ex6,2))) - dd_real(2.)*pow(ex2,3)*pow(ex3,2)*pow(ex4,4)*(dd_real(3.)*(dd_real(8.) + dd_real(4.)*pow(ex4,2) + ex4*(dd_real(2.) - dd_real(4.)*ex6) - dd_real(5.)*ex6 - dd_real(3.)*pow(ex6,2)) + dd_real(20.)*pow(ex3,3)*(dd_real(7.) - dd_real(6.)*ex6 + pow(ex6,2)) + dd_real(8.)*pow(ex3,2)*(dd_real(25.) - dd_real(21.)*ex6 + dd_real(3.)*pow(ex6,2)) + dd_real(4.)*ex3*(dd_real(73.) - dd_real(81.)*ex6 + dd_real(18.)*pow(ex6,2))) + pow(ex2,4)*pow(ex3,2)*pow(ex4,3)*(dd_real(12.)*pow(ex4,2) - dd_real(12.)*ex4*(-dd_real(1.) + ex6) - dd_real(9.)*pow(-dd_real(1.) + ex6,2) + dd_real(40.)*pow(ex3,3)*(dd_real(7.) - dd_real(8.)*ex6 + dd_real(2.)*pow(ex6,2)) + dd_real(24.)*ex3*(dd_real(11.) - dd_real(17.)*ex6 + dd_real(6.)*pow(ex6,2)) + dd_real(4.)*pow(ex3,2)*(dd_real(65.) - dd_real(76.)*ex6 + dd_real(18.)*pow(ex6,2))) + pow(ex2,2)*ex3*pow(ex4,5)*(-dd_real(6.)*(dd_real(5.) + dd_real(2.)*ex4 - dd_real(5.)*ex6) + dd_real(8.)*pow(ex3,4)*(dd_real(21.) - dd_real(12.)*ex6 + pow(ex6,2)) + dd_real(24.)*pow(ex3,2)*(dd_real(27.) - dd_real(19.)*ex6 + dd_real(2.)*pow(ex6,2)) + dd_real(4.)*pow(ex3,3)*(dd_real(85.) - dd_real(46.)*ex6 + dd_real(3.)*pow(ex6,2)) + dd_real(3.)*ex3*(dd_real(74.) + dd_real(4.)*pow(ex4,2) - dd_real(38.)*ex6 - dd_real(3.)*pow(ex6,2) - dd_real(4.)*ex4*(dd_real(1.) + ex6)));
return res;
}
