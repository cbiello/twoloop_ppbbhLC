#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn333(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(dd_real(1.) + ex3,4)*pow(ex4,4)*(dd_real(2.)*ex4 + ex6) + ex2*pow(dd_real(1.) + ex3,3)*pow(ex4,3)*(dd_real(2.)*ex3*pow(ex4,2) + ex6*(-dd_real(3.) - dd_real(4.)*ex3 + dd_real(3.)*ex6) + dd_real(2.)*ex4*(-dd_real(4.) + ex3*(-dd_real(5.) + ex6) + dd_real(3.)*ex6)) + pow(ex2,6)*pow(ex3,2)*(-dd_real(2.) + pow(ex3,2)*(-dd_real(2.) + ex6) + dd_real(3.)*ex6 - dd_real(1.)*pow(ex6,2) + ex3*(-dd_real(4.) + dd_real(4.)*ex6 + pow(ex6,2))) + pow(ex2,2)*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(ex3*pow(ex4,2)*(ex3*(-dd_real(10.) + ex6) + dd_real(2.)*(-dd_real(4.) + ex6)) + dd_real(3.)*(dd_real(2.)*pow(ex3,2) - dd_real(3.)*ex3*(-dd_real(1.) + ex6) + pow(-dd_real(1.) + ex6,2))*ex6 + ex4*(pow(ex3,2)*(dd_real(20.) - dd_real(8.)*ex6) + dd_real(6.)*(dd_real(2.) - dd_real(3.)*ex6 + pow(ex6,2)) + ex3*(dd_real(32.) - dd_real(31.)*ex6 + dd_real(4.)*pow(ex6,2)))) + pow(ex2,4)*(ex3*pow(dd_real(1.) + ex3 - dd_real(1.)*ex6,3)*ex6 + ex3*pow(ex4,2)*(-dd_real(8.) + dd_real(6.)*ex6 + pow(ex3,3)*(-dd_real(20.) + dd_real(6.)*ex6) + dd_real(3.)*pow(ex3,2)*(-dd_real(16.) + dd_real(8.)*ex6 + pow(ex6,2)) + ex3*(-dd_real(36.) + dd_real(24.)*ex6 + pow(ex6,2))) + ex4*(pow(ex3,4)*(dd_real(10.) - dd_real(8.)*ex6) - dd_real(2.)*pow(-dd_real(1.) + ex6,3) + pow(ex3,3)*(dd_real(32.) - dd_real(45.)*ex6 + dd_real(12.)*pow(ex6,2)) + ex3*(dd_real(16.) - dd_real(41.)*ex6 + dd_real(32.)*pow(ex6,2) - dd_real(7.)*pow(ex6,3)) + pow(ex3,2)*(dd_real(36.) - dd_real(72.)*ex6 + dd_real(38.)*pow(ex6,2) - dd_real(4.)*pow(ex6,3)))) - dd_real(1.)*pow(ex2,3)*(dd_real(1.) + ex3)*ex4*(pow(dd_real(1.) + ex3 - dd_real(1.)*ex6,2)*(dd_real(1.) + dd_real(4.)*ex3 - dd_real(1.)*ex6)*ex6 + ex3*pow(ex4,2)*(dd_real(4.)*pow(ex3,2)*(-dd_real(5.) + ex6) + dd_real(6.)*(-dd_real(2.) + ex6) + ex3*(-dd_real(32.) + dd_real(12.)*ex6 + pow(ex6,2))) + ex4*(-dd_real(2.)*(-dd_real(4.) + ex6)*pow(-dd_real(1.) + ex6,2) - dd_real(4.)*pow(ex3,3)*(-dd_real(5.) + dd_real(3.)*ex6) + dd_real(3.)*pow(ex3,2)*(dd_real(16.) - dd_real(19.)*ex6 + dd_real(4.)*pow(ex6,2)) + ex3*(dd_real(36.) - dd_real(63.)*ex6 + dd_real(28.)*pow(ex6,2) - dd_real(2.)*pow(ex6,3)))) + pow(ex2,5)*ex3*(dd_real(2.)*pow(ex3,3)*(-dd_real(1.) + ex4*(dd_real(5.) - dd_real(2.)*ex6) + ex6) + (-dd_real(1.) + ex6)*(dd_real(2.) - dd_real(2.)*ex4 - dd_real(5.)*ex6 + dd_real(3.)*pow(ex6,2)) - dd_real(1.)*pow(ex3,2)*(dd_real(6.) - dd_real(11.)*ex6 + dd_real(4.)*pow(ex6,2) + ex4*(-dd_real(22.) + dd_real(16.)*ex6 + dd_real(3.)*pow(ex6,2))) + ex3*(ex4*(dd_real(14.) - dd_real(14.)*ex6 + pow(ex6,2)) + dd_real(2.)*(-dd_real(3.) + dd_real(8.)*ex6 - dd_real(6.)*pow(ex6,2) + pow(ex6,3))));
return res;
}
