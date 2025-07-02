#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn50(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(3.)*pow(ex2,7)*pow(ex3,5) + pow(dd_real(1.) + ex3,4)*(-dd_real(3.) + dd_real(7.)*ex3)*pow(ex4,4) + pow(ex2,6)*pow(ex3,4)*(-dd_real(3.) + dd_real(6.)*ex4 + ex3*(-dd_real(2.) + dd_real(9.)*ex4)) + ex2*ex3*pow(dd_real(1.) + ex3,2)*pow(ex4,3)*(dd_real(14.) - dd_real(6.)*ex4 + dd_real(2.)*ex3*(-dd_real(5.) + dd_real(4.)*ex4) + pow(ex3,2)*(-dd_real(25.) + dd_real(14.)*ex4)) + pow(ex2,2)*ex3*(dd_real(1.) + ex3)*pow(ex4,2)*(dd_real(8.)*ex4 + ex3*(-dd_real(16.) + dd_real(29.)*ex4 - dd_real(3.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(9.) - dd_real(25.)*ex4 + dd_real(4.)*pow(ex4,2)) + pow(ex3,3)*(dd_real(33.) - dd_real(47.)*ex4 + dd_real(7.)*pow(ex4,2))) - dd_real(1.)*pow(ex2,5)*pow(ex3,3)*(ex4*(-dd_real(2.) + dd_real(3.)*ex4) + dd_real(2.)*ex3*(dd_real(3.) - dd_real(11.)*ex4 + dd_real(6.)*pow(ex4,2)) + pow(ex3,2)*(-dd_real(5.) + ex4 + dd_real(9.)*pow(ex4,2))) + pow(ex2,3)*pow(ex3,2)*ex4*(ex4*(-dd_real(16.) + dd_real(11.)*ex4) + pow(ex3,2)*(-dd_real(4.) + dd_real(30.)*ex4 - dd_real(6.)*pow(ex4,2)) - dd_real(19.)*pow(ex3,3)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2)) + ex3*(dd_real(8.) - dd_real(38.)*ex4 + dd_real(24.)*pow(ex4,2))) + pow(ex2,4)*pow(ex3,2)*(-dd_real(3.)*pow(ex4,2) + ex3*ex4*(dd_real(10.) - dd_real(27.)*ex4 + dd_real(3.)*pow(ex4,2)) + dd_real(3.)*pow(ex3,2)*(-dd_real(1.) + dd_real(4.)*ex4 - dd_real(8.)*pow(ex4,2) + dd_real(2.)*pow(ex4,3)) + pow(ex3,3)*(dd_real(4.) - dd_real(29.)*ex4 + dd_real(15.)*pow(ex4,2) + dd_real(3.)*pow(ex4,3)));
return res;
}
