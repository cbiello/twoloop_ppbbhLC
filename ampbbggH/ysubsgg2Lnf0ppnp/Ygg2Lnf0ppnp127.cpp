#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp127(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
(dd_real(5.) + dd_real(7.)*ex3 - dd_real(49.)*pow(ex3,2) + dd_real(13.)*pow(ex3,3))*pow(ex4,4) + ex2*pow(ex4,3)*(-dd_real(13.) + pow(ex3,2)*(dd_real(217.) - dd_real(40.)*ex4 - dd_real(81.)*ex6) + dd_real(7.)*ex6 + dd_real(3.)*ex3*(-dd_real(21.) + dd_real(4.)*ex4 + dd_real(6.)*ex6) + pow(ex3,3)*(-dd_real(53.) + dd_real(12.)*ex4 + dd_real(20.)*ex6)) + pow(ex2,5)*ex3*(dd_real(17.) - dd_real(25.)*ex6 + dd_real(8.)*pow(ex6,2) + pow(ex3,2)*(dd_real(13.) - dd_real(19.)*ex6 + dd_real(6.)*pow(ex6,2)) + ex3*(-dd_real(50.) + dd_real(72.)*ex6 - dd_real(27.)*pow(ex6,2) + dd_real(2.)*pow(ex6,3))) + pow(ex2,2)*pow(ex4,2)*(dd_real(9.) - dd_real(10.)*ex6 + dd_real(2.)*pow(ex6,2) + pow(ex3,2)*(-dd_real(357.) + ex4*(dd_real(170.) - dd_real(60.)*ex6) + dd_real(272.)*ex6 - dd_real(39.)*pow(ex6,2)) + ex3*(dd_real(147.) - dd_real(109.)*ex6 + dd_real(12.)*pow(ex6,2) + ex4*(-dd_real(53.) + dd_real(18.)*ex6)) + pow(ex3,3)*(dd_real(81.) - dd_real(61.)*ex6 + dd_real(7.)*pow(ex6,2) + ex4*(-dd_real(49.) + dd_real(18.)*ex6))) + pow(ex2,3)*ex4*(dd_real(1.) - dd_real(1.)*ex6 + pow(ex3,2)*(dd_real(259.) - dd_real(301.)*ex6 + dd_real(87.)*pow(ex6,2) - dd_real(5.)*pow(ex6,3) - dd_real(6.)*ex4*(dd_real(45.) - dd_real(32.)*ex6 + dd_real(4.)*pow(ex6,2))) + ex3*(-dd_real(133.) + dd_real(164.)*ex6 - dd_real(47.)*pow(ex6,2) + dd_real(2.)*pow(ex6,3) + ex4*(dd_real(87.) - dd_real(61.)*ex6 + dd_real(6.)*pow(ex6,2))) + pow(ex3,3)*(-dd_real(55.) + dd_real(62.)*ex6 - dd_real(14.)*pow(ex6,2) + ex4*(dd_real(75.) - dd_real(55.)*ex6 + dd_real(6.)*pow(ex6,2)))) - dd_real(1.)*pow(ex2,4)*(dd_real(2.)*pow(-dd_real(1.) + ex6,2) + pow(ex3,3)*(-dd_real(7.)*(dd_real(2.) - dd_real(3.)*ex6 + pow(ex6,2)) + ex4*(dd_real(51.) - dd_real(56.)*ex6 + dd_real(12.)*pow(ex6,2))) + ex3*(-dd_real(42.) + dd_real(73.)*ex6 - dd_real(35.)*pow(ex6,2) + dd_real(4.)*pow(ex6,3) + ex4*(dd_real(63.) - dd_real(68.)*ex6 + dd_real(14.)*pow(ex6,2))) + pow(ex3,2)*(dd_real(70.) - dd_real(110.)*ex6 + dd_real(48.)*pow(ex6,2) - dd_real(5.)*pow(ex6,3) + ex4*(-dd_real(190.) + dd_real(204.)*ex6 - dd_real(51.)*pow(ex6,2) + dd_real(2.)*pow(ex6,3))));
return res;
}
