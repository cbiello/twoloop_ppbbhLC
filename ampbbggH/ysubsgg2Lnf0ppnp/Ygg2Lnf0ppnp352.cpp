#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp352(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(6.)*pow(ex2,5)*pow(ex3,3) + pow(ex2,4)*pow(ex3,2)*(dd_real(39.) + dd_real(4.)*ex3*(dd_real(40.) + dd_real(9.)*ex4 - dd_real(6.)*ex6)) + pow(ex4,2)*(dd_real(39.) + dd_real(4.)*ex3*(dd_real(40.) + dd_real(3.)*ex4 - dd_real(3.)*ex6))*pow(-dd_real(1.) + ex3*(ex4 - dd_real(1.)*ex6),2) - dd_real(2.)*pow(ex2,3)*pow(ex3,2)*(-dd_real(2.) + dd_real(42.)*ex3*pow(ex4,2) + ex4*(dd_real(70.) + ex3*(dd_real(320.) - dd_real(54.)*ex6)) - dd_real(1.)*(dd_real(37.) + dd_real(160.)*ex3)*ex6 + dd_real(15.)*ex3*pow(ex6,2)) - dd_real(2.)*ex2*ex3*ex4*(dd_real(6.) + dd_real(27.)*pow(ex3,2)*pow(ex4,3) + dd_real(2.)*ex3*pow(ex4,2)*(dd_real(23.) + ex3*(dd_real(160.) - dd_real(33.)*ex6)) + dd_real(3.)*(dd_real(11.) + dd_real(54.)*ex3)*ex6 + dd_real(5.)*ex3*(dd_real(5.) + dd_real(32.)*ex3)*pow(ex6,2) - dd_real(12.)*pow(ex3,2)*pow(ex6,3) + ex4*(-dd_real(69.) + dd_real(3.)*pow(ex3,2)*ex6*(-dd_real(160.) + dd_real(17.)*ex6) - dd_real(1.)*ex3*(dd_real(322.) + dd_real(71.)*ex6))) + pow(ex2,2)*ex3*(dd_real(96.)*pow(ex3,2)*pow(ex4,3) + dd_real(2.)*ex3*pow(ex4,2)*(dd_real(89.) + ex3*(dd_real(480.) - dd_real(90.)*ex6)) + ex3*ex6*(dd_real(4.) + dd_real(5.)*(dd_real(7.) + dd_real(32.)*ex3)*ex6 - dd_real(12.)*ex3*pow(ex6,2)) + dd_real(2.)*ex4*(-dd_real(39.) + dd_real(48.)*pow(ex3,2)*(-dd_real(10.) + ex6)*ex6 - dd_real(1.)*ex3*(dd_real(164.) + dd_real(93.)*ex6)));
return res;
}
