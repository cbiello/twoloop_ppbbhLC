#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp324(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(24.)*pow(ex4,5) + dd_real(6.)*pow(ex2,6)*ex4*(dd_real(5.)*ex3*(dd_real(1.) + dd_real(2.)*ex4 - dd_real(1.)*ex6) - dd_real(3.)*ex4*(-dd_real(1.) + ex6)) - dd_real(9.)*pow(ex2,7)*ex4*pow(-dd_real(1.) + ex6,2) - dd_real(6.)*ex2*pow(ex4,4)*(-dd_real(13.) + dd_real(8.)*ex4 + ex3*(dd_real(3.) + dd_real(6.)*ex4 - dd_real(6.)*ex6) + dd_real(6.)*ex6) + pow(ex2,5)*(ex4*(dd_real(12.)*ex3*(-dd_real(5.) + ex6) - dd_real(11.)*(-dd_real(1.) + ex6))*(-dd_real(1.) + ex6) - dd_real(20.)*pow(-dd_real(1.) + ex6,2) - dd_real(3.)*pow(ex4,3)*(-dd_real(3.) + dd_real(44.)*ex3 + dd_real(12.)*ex6 - dd_real(6.)*pow(ex6,2)) + dd_real(6.)*pow(ex4,2)*(dd_real(7.)*pow(-dd_real(1.) + ex6,2) + dd_real(3.)*ex3*(dd_real(3.) + dd_real(4.)*ex6))) - dd_real(6.)*pow(ex2,2)*pow(ex4,3)*(dd_real(10.) + dd_real(2.)*pow(ex4,2) - dd_real(17.)*ex6 + dd_real(4.)*pow(ex6,2) + ex4*(-dd_real(29.) + dd_real(10.)*ex6) + ex3*(-dd_real(11.) + dd_real(12.)*pow(ex4,2) + dd_real(17.)*ex6 - dd_real(2.)*ex4*(dd_real(7.) + dd_real(6.)*ex6))) - dd_real(1.)*pow(ex2,3)*pow(ex4,2)*(dd_real(38.) - dd_real(66.)*pow(ex4,2) - dd_real(18.)*pow(ex4,3) + dd_real(18.)*ex6 - dd_real(36.)*pow(ex6,2) + ex4*(dd_real(215.) - dd_real(222.)*ex6 + dd_real(36.)*pow(ex6,2)) + dd_real(6.)*ex3*(dd_real(13.) + dd_real(6.)*pow(ex4,3) - dd_real(18.)*ex6 + dd_real(2.)*pow(ex6,2) - dd_real(1.)*pow(ex4,2)*(dd_real(35.) + dd_real(6.)*ex6) + ex4*(dd_real(4.) + dd_real(30.)*ex6))) + dd_real(2.)*pow(ex2,4)*ex4*(dd_real(3.)*ex3*(dd_real(5.) + dd_real(18.)*pow(ex4,3) - dd_real(7.)*ex6 + dd_real(2.)*pow(ex6,2) - dd_real(1.)*pow(ex4,2)*(dd_real(37.) + dd_real(13.)*ex6) - dd_real(2.)*ex4*(dd_real(7.) - dd_real(15.)*ex6 + pow(ex6,2))) + dd_real(2.)*(dd_real(16.) + dd_real(9.)*pow(ex4,3)*(-dd_real(1.) + ex6) - dd_real(22.)*ex6 + dd_real(6.)*pow(ex6,2) + dd_real(3.)*pow(ex4,2)*(-dd_real(8.) + dd_real(7.)*ex6) + ex4*(dd_real(25.) - dd_real(46.)*ex6 + dd_real(21.)*pow(ex6,2))));
return res;
}
