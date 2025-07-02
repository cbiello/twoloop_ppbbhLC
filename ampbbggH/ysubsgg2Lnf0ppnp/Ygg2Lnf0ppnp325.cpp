#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp325(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(4.)*(dd_real(1.) + dd_real(7.)*ex3 - dd_real(21.)*pow(ex3,2) + dd_real(5.)*pow(ex3,3))*pow(ex4,4) + ex2*pow(ex4,3)*(-dd_real(8.) + dd_real(5.)*ex6 + dd_real(3.)*ex3*(-dd_real(54.) + dd_real(6.)*ex4 + dd_real(19.)*ex6) + pow(ex3,3)*(-dd_real(82.) + dd_real(18.)*ex4 + dd_real(31.)*ex6) - dd_real(3.)*pow(ex3,2)*(-dd_real(124.) + dd_real(20.)*ex4 + dd_real(47.)*ex6)) + pow(ex2,5)*ex3*(dd_real(28.) - dd_real(41.)*ex6 + dd_real(13.)*pow(ex6,2) + pow(ex3,2)*(dd_real(20.) - dd_real(29.)*ex6 + dd_real(9.)*pow(ex6,2)) + ex3*(-dd_real(80.) + dd_real(114.)*ex6 - dd_real(42.)*pow(ex6,2) + dd_real(3.)*pow(ex6,3))) + pow(ex2,2)*pow(ex4,2)*((-dd_real(2.) + ex6)*ex6 + pow(ex3,2)*(-dd_real(612.) + ex4*(dd_real(260.) - dd_real(90.)*ex6) + dd_real(472.)*ex6 - dd_real(69.)*pow(ex6,2)) + ex3*(dd_real(318.) - dd_real(251.)*ex6 + dd_real(33.)*pow(ex6,2) + ex4*(-dd_real(82.) + dd_real(27.)*ex6)) + pow(ex3,3)*(dd_real(126.) - dd_real(95.)*ex6 + dd_real(11.)*pow(ex6,2) + ex4*(-dd_real(74.) + dd_real(27.)*ex6))) + pow(ex2,3)*ex4*(dd_real(8.) - dd_real(11.)*ex6 + dd_real(3.)*pow(ex6,2) + pow(ex3,2)*(dd_real(444.) - dd_real(521.)*ex6 + dd_real(153.)*pow(ex6,2) - dd_real(9.)*pow(ex6,3) - dd_real(6.)*ex4*(dd_real(70.) - dd_real(49.)*ex6 + dd_real(6.)*pow(ex6,2))) + ex3*(-dd_real(262.) + dd_real(331.)*ex6 - dd_real(100.)*pow(ex6,2) + dd_real(5.)*pow(ex6,3) + ex4*(dd_real(138.) - dd_real(95.)*ex6 + dd_real(9.)*pow(ex6,2))) + pow(ex3,3)*(-dd_real(86.) + dd_real(97.)*ex6 - dd_real(22.)*pow(ex6,2) + ex4*(dd_real(114.) - dd_real(83.)*ex6 + dd_real(9.)*pow(ex6,2)))) - dd_real(1.)*pow(ex2,4)*(dd_real(4.)*pow(-dd_real(1.) + ex6,2) + pow(ex3,3)*(-dd_real(11.)*(dd_real(2.) - dd_real(3.)*ex6 + pow(ex6,2)) + ex4*(dd_real(78.) - dd_real(85.)*ex6 + dd_real(18.)*pow(ex6,2))) + ex3*(-dd_real(78.) + dd_real(137.)*ex6 - dd_real(67.)*pow(ex6,2) + dd_real(8.)*pow(ex6,3) + ex4*(dd_real(102.) - dd_real(109.)*ex6 + dd_real(22.)*pow(ex6,2))) + pow(ex3,2)*(dd_real(120.) - dd_real(190.)*ex6 + dd_real(84.)*pow(ex6,2) - dd_real(9.)*pow(ex6,3) + dd_real(3.)*ex4*(-dd_real(100.) + dd_real(106.)*ex6 - dd_real(26.)*pow(ex6,2) + pow(ex6,3))));
return res;
}
