#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp407(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
(dd_real(5.) + dd_real(7.)*ex3 - dd_real(49.)*pow(ex3,2) + dd_real(13.)*pow(ex3,3))*pow(ex4,4) + ex2*pow(ex4,3)*(pow(ex3,2)*(dd_real(202.) - dd_real(40.)*ex4 - dd_real(81.)*ex6) + dd_real(7.)*(-dd_real(2.) + ex6) + dd_real(6.)*ex3*(-dd_real(8.) + dd_real(2.)*ex4 + dd_real(3.)*ex6) + dd_real(4.)*pow(ex3,3)*(-dd_real(13.) + dd_real(3.)*ex4 + dd_real(5.)*ex6)) + dd_real(2.)*pow(ex2,5)*ex3*(-dd_real(2.) + ex6)*(dd_real(3.)*(-dd_real(1.) + ex6) + dd_real(3.)*pow(ex3,2)*(-dd_real(1.) + ex6) + ex3*(dd_real(10.) - dd_real(10.)*ex6 + pow(ex6,2))) + pow(ex2,2)*pow(ex4,2)*(dd_real(2.)*(dd_real(6.) - dd_real(6.)*ex6 + pow(ex6,2)) + pow(ex3,2)*(-dd_real(312.) + dd_real(252.)*ex6 - dd_real(39.)*pow(ex6,2) - dd_real(20.)*ex4*(-dd_real(8.) + dd_real(3.)*ex6)) + dd_real(6.)*ex3*(dd_real(17.) - dd_real(14.)*ex6 + dd_real(2.)*pow(ex6,2) + ex4*(-dd_real(8.) + dd_real(3.)*ex6)) + pow(ex3,3)*(dd_real(78.) - dd_real(60.)*ex6 + dd_real(7.)*pow(ex6,2) + dd_real(6.)*ex4*(-dd_real(8.) + dd_real(3.)*ex6))) + pow(ex2,3)*ex4*(-dd_real(2.) + dd_real(3.)*ex6 - dd_real(1.)*pow(ex6,2) + dd_real(2.)*pow(ex3,3)*(-dd_real(26.) + dd_real(30.)*ex6 - dd_real(7.)*pow(ex6,2) + dd_real(3.)*ex4*(dd_real(12.) - dd_real(9.)*ex6 + pow(ex6,2))) + dd_real(2.)*ex3*(-dd_real(44.) + dd_real(57.)*ex6 - dd_real(18.)*pow(ex6,2) + pow(ex6,3) + dd_real(3.)*ex4*(dd_real(12.) - dd_real(9.)*ex6 + pow(ex6,2))) + pow(ex3,2)*(dd_real(214.) - dd_real(261.)*ex6 + dd_real(81.)*pow(ex6,2) - dd_real(5.)*pow(ex6,3) - dd_real(12.)*ex4*(dd_real(20.) - dd_real(15.)*ex6 + dd_real(2.)*pow(ex6,2)))) - dd_real(1.)*pow(ex2,4)*(pow(-dd_real(1.) + ex6,2) + dd_real(3.)*ex3*(-dd_real(9.) + dd_real(16.)*ex6 - dd_real(8.)*pow(ex6,2) + pow(ex6,3) + dd_real(2.)*ex4*(dd_real(8.) - dd_real(9.)*ex6 + dd_real(2.)*pow(ex6,2))) + pow(ex3,3)*(-dd_real(13.) + dd_real(20.)*ex6 - dd_real(7.)*pow(ex6,2) + dd_real(6.)*ex4*(dd_real(8.) - dd_real(9.)*ex6 + dd_real(2.)*pow(ex6,2))) + pow(ex3,2)*(dd_real(55.) - dd_real(90.)*ex6 + dd_real(42.)*pow(ex6,2) - dd_real(5.)*pow(ex6,3) + dd_real(2.)*ex4*(-dd_real(80.) + dd_real(90.)*ex6 - dd_real(24.)*pow(ex6,2) + pow(ex6,3))));
return res;
}
