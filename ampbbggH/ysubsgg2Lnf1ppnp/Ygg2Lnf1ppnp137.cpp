#include <iostream>
#include "listYgg2Lnf1ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf1ppnp137(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(10.)*pow(dd_real(1.) + ex3,2)*pow(ex4,4) + pow(ex2,6)*pow(ex3,2)*(dd_real(3.)*pow(ex4,2) - dd_real(3.)*ex4*(-dd_real(1.) + ex6) - dd_real(10.)*pow(-dd_real(1.) + ex6,2)) - dd_real(1.)*ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,3)*(-dd_real(43.) + dd_real(17.)*ex4 + dd_real(23.)*ex6) - dd_real(1.)*pow(ex2,2)*(dd_real(1.) + ex3)*pow(ex4,2)*(dd_real(66.) + dd_real(4.)*pow(ex4,2) - dd_real(66.)*ex6 + dd_real(10.)*pow(ex6,2) + ex4*(-dd_real(60.) + dd_real(46.)*ex6) + ex3*(dd_real(66.) + pow(ex4,2) - dd_real(66.)*ex6 + dd_real(10.)*pow(ex6,2) + ex4*(-dd_real(83.) + dd_real(49.)*ex6))) + pow(ex2,3)*(dd_real(1.) + ex3)*ex4*(dd_real(43.) + pow(ex4,2)*(dd_real(8.) - dd_real(17.)*ex6) - dd_real(63.)*ex6 + dd_real(20.)*pow(ex6,2) + ex4*(-dd_real(69.) + dd_real(95.)*ex6 - dd_real(23.)*pow(ex6,2)) + ex3*(dd_real(43.) + dd_real(9.)*pow(ex4,3) + pow(ex4,2)*(dd_real(31.) - dd_real(29.)*ex6) - dd_real(63.)*ex6 + dd_real(20.)*pow(ex6,2) + ex4*(-dd_real(135.) + dd_real(138.)*ex6 - dd_real(20.)*pow(ex6,2)))) + pow(ex2,5)*ex3*(-dd_real(3.)*pow(ex4,2)*(-dd_real(3.) + ex6) - dd_real(20.)*pow(-dd_real(1.) + ex6,2) + ex4*(dd_real(29.) - dd_real(52.)*ex6 + dd_real(23.)*pow(ex6,2)) + ex3*(-dd_real(6.)*pow(ex4,3) - dd_real(20.)*pow(-dd_real(1.) + ex6,2) + pow(ex4,2)*(dd_real(3.) + dd_real(6.)*ex6) + ex4*(dd_real(49.) - dd_real(69.)*ex6 + dd_real(20.)*pow(ex6,2)))) + pow(ex2,4)*(-dd_real(10.)*pow(-dd_real(1.) + ex6,2) + pow(ex4,2)*(-dd_real(4.) + dd_real(17.)*ex6 - dd_real(10.)*pow(ex6,2)) + ex4*(dd_real(26.) - dd_real(49.)*ex6 + dd_real(23.)*pow(ex6,2)) + pow(ex3,2)*(dd_real(3.)*pow(ex4,4) - dd_real(10.)*pow(-dd_real(1.) + ex6,2) - dd_real(3.)*pow(ex4,3)*(dd_real(5.) + ex6) + pow(ex4,2)*(-dd_real(69.) + dd_real(78.)*ex6 - dd_real(10.)*pow(ex6,2)) + ex4*(dd_real(89.) - dd_real(129.)*ex6 + dd_real(40.)*pow(ex6,2))) + ex3*(dd_real(3.)*pow(ex4,3)*(-dd_real(6.) + ex6) - dd_real(20.)*pow(-dd_real(1.) + ex6,2) + pow(ex4,2)*(-dd_real(63.) + dd_real(98.)*ex6 - dd_real(23.)*pow(ex6,2)) + ex4*(dd_real(115.) - dd_real(178.)*ex6 + dd_real(63.)*pow(ex6,2))));
return res;
}
