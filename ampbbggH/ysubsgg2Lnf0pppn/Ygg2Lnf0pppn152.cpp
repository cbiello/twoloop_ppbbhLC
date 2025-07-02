#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn152(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(23.)*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*ex6*(dd_real(2.)*pow(ex4,2) + ex4*(dd_real(2.) - dd_real(3.)*ex6) + ex6) + pow(ex2,4)*pow(ex3,2)*(dd_real(5.) + dd_real(5.)*pow(ex4,3) + dd_real(36.)*ex6 - dd_real(18.)*pow(ex6,2) + dd_real(5.)*pow(ex4,2)*(dd_real(3.) + dd_real(2.)*ex6) + ex4*(dd_real(15.) + dd_real(46.)*ex6 + dd_real(54.)*pow(ex6,2))) - dd_real(2.)*ex2*(dd_real(1.) + ex3)*ex4*ex6*(dd_real(18.)*ex3*pow(ex4,3) - dd_real(23.)*(dd_real(2.) + ex3)*ex6 - dd_real(1.)*pow(ex4,2)*(dd_real(45.) + dd_real(69.)*ex6 + ex3*(dd_real(46.) + dd_real(64.)*ex6)) + ex4*(-dd_real(5.)*(dd_real(9.) + dd_real(5.)*ex6) + ex3*(-dd_real(64.) + dd_real(87.)*ex6))) - dd_real(2.)*pow(ex2,3)*ex3*(ex6*(-dd_real(12.) + dd_real(15.)*pow(ex4,3) + dd_real(36.)*ex6 + dd_real(2.)*ex4*(dd_real(13.) + dd_real(5.)*ex6) + pow(ex4,2)*(dd_real(53.) + dd_real(54.)*ex6)) + ex3*(dd_real(5.)*pow(ex4,4) + dd_real(18.)*(-dd_real(1.) + ex6)*ex6 + dd_real(5.)*pow(ex4,3)*(dd_real(3.) + dd_real(2.)*ex6) + ex4*(dd_real(5.) + dd_real(36.)*ex6 - dd_real(82.)*pow(ex6,2)) + pow(ex4,2)*(dd_real(15.) + dd_real(64.)*ex6 + dd_real(54.)*pow(ex6,2)))) + pow(ex2,2)*(-dd_real(22.)*ex6*(dd_real(3.)*ex6 + ex4*(dd_real(2.) + dd_real(5.)*ex6) + pow(ex4,2)*(dd_real(2.) + dd_real(6.)*ex6)) + dd_real(2.)*ex3*ex6*(dd_real(15.)*pow(ex4,4) - dd_real(46.)*ex6 + ex4*(-dd_real(75.) + dd_real(29.)*ex6) + pow(ex4,3)*(dd_real(71.) + dd_real(54.)*ex6) - dd_real(1.)*pow(ex4,2)*(dd_real(19.) + dd_real(123.)*ex6)) + pow(ex3,2)*(dd_real(5.)*pow(ex4,5) - dd_real(23.)*pow(ex6,2) + dd_real(5.)*pow(ex4,4)*(dd_real(3.) + dd_real(2.)*ex6) + ex4*ex6*(-dd_real(118.) + dd_real(141.)*ex6) + pow(ex4,2)*(dd_real(5.) - dd_real(10.)*ex6 - dd_real(274.)*pow(ex6,2)) + pow(ex4,3)*(dd_real(15.) + dd_real(118.)*ex6 + dd_real(54.)*pow(ex6,2))));
return res;
}
