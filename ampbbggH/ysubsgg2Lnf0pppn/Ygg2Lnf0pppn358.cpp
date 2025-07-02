#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn358(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,5)*pow(ex3,2)*(dd_real(18.)*ex4 + dd_real(125.)*ex3*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(125.)*(-dd_real(1.) + ex6)) + dd_real(125.)*pow(dd_real(1.) + ex3,3)*pow(ex4,3)*(pow(ex4,2) + ex4*(dd_real(1.) - dd_real(2.)*ex6) + (-dd_real(1.) + ex6)*ex6) - dd_real(1.)*pow(ex2,4)*ex3*(dd_real(54.)*pow(ex4,2) + ex4*(dd_real(241.) - dd_real(277.)*ex6) + dd_real(125.)*(-dd_real(1.) + pow(ex6,2)) + dd_real(125.)*pow(ex3,2)*(-dd_real(1.) + dd_real(4.)*pow(ex4,2) + ex4*(dd_real(3.) - dd_real(5.)*ex6) + pow(ex6,2)) + ex3*(dd_real(438.)*pow(ex4,2) + ex4*(dd_real(616.) - dd_real(902.)*ex6) + dd_real(250.)*(-dd_real(1.) + pow(ex6,2)))) - dd_real(1.)*pow(ex2,2)*(dd_real(1.) + ex3)*ex4*((dd_real(206.) + dd_real(760.)*ex3 + dd_real(500.)*pow(ex3,2))*pow(ex4,3) - dd_real(375.)*pow(dd_real(1.) + ex3,2)*(-dd_real(1.) + ex6)*ex6 - dd_real(1.)*pow(ex4,2)*(-dd_real(233.) + dd_real(564.)*ex6 + dd_real(125.)*pow(ex3,2)*(dd_real(2.) + dd_real(7.)*ex6) + ex3*(-dd_real(153.) + dd_real(1493.)*ex6)) + (dd_real(1.) + ex3)*ex4*(-dd_real(285.) + dd_real(88.)*ex6 + dd_real(358.)*pow(ex6,2) + dd_real(375.)*ex3*(-dd_real(2.) + dd_real(2.)*ex6 + pow(ex6,2)))) + ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*((dd_real(179.) + dd_real(125.)*ex3)*pow(ex4,3) - dd_real(375.)*(dd_real(1.) + ex3)*(-dd_real(1.) + ex6)*ex6 - dd_real(1.)*pow(ex4,2)*(dd_real(44.) + dd_real(358.)*ex6 + dd_real(125.)*ex3*(dd_real(3.) + dd_real(2.)*ex6)) + ex4*(-dd_real(330.) + dd_real(419.)*ex6 + dd_real(179.)*pow(ex6,2) + dd_real(125.)*ex3*(-dd_real(4.) + dd_real(6.)*ex6 + pow(ex6,2)))) + pow(ex2,3)*(dd_real(1.) + ex3)*((dd_real(36.) + dd_real(501.)*ex3 + dd_real(750.)*pow(ex3,2))*pow(ex4,3) - dd_real(125.)*pow(dd_real(1.) + ex3,2)*(-dd_real(1.) + ex6)*ex6 + pow(ex4,2)*(dd_real(152.) + ex3*(dd_real(563.) - dd_real(1162.)*ex6) - dd_real(206.)*ex6 - dd_real(125.)*pow(ex3,2)*(-dd_real(2.) + dd_real(9.)*ex6)) + (dd_real(1.) + ex3)*ex4*(-dd_real(80.) - dd_real(81.)*ex6 + dd_real(179.)*pow(ex6,2) + dd_real(125.)*ex3*(-dd_real(4.) + dd_real(2.)*ex6 + dd_real(3.)*pow(ex6,2))));
return res;
}
