#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp456(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
(dd_real(1.) - dd_real(28.)*ex3 + dd_real(70.)*pow(ex3,2) - dd_real(28.)*pow(ex3,3) + pow(ex3,4))*pow(ex4,4) + ex2*pow(ex4,3)*(-dd_real(3.) + dd_real(2.)*ex6 + pow(ex3,4)*(-dd_real(4.) + ex4 + dd_real(2.)*ex6) + dd_real(35.)*pow(ex3,2)*(-dd_real(7.) + ex4 + dd_real(4.)*ex6) - dd_real(7.)*ex3*(-dd_real(13.) + ex4 + dd_real(8.)*ex6) - dd_real(7.)*pow(ex3,3)*(-dd_real(15.) + dd_real(3.)*ex4 + dd_real(8.)*ex6)) + pow(ex2,5)*(-dd_real(1.) + ex3)*ex3*(-dd_real(1.) + ex6)*(-dd_real(1.) + pow(ex3,2)*(-dd_real(1.) + ex6) + ex6 + ex3*(dd_real(14.) - dd_real(14.)*ex6 + dd_real(3.)*pow(ex6,2))) + pow(ex2,2)*pow(ex4,2)*(dd_real(3.) - dd_real(4.)*ex6 + pow(ex6,2) + ex3*(-dd_real(105.) - dd_real(11.)*ex4*(-dd_real(2.) + ex6) + dd_real(129.)*ex6 - dd_real(34.)*pow(ex6,2)) + pow(ex3,3)*(-dd_real(147.) - dd_real(39.)*ex4*(-dd_real(2.) + ex6) + dd_real(157.)*ex6 - dd_real(34.)*pow(ex6,2)) + pow(ex3,4)*(dd_real(6.) + dd_real(2.)*ex4*(-dd_real(2.) + ex6) - dd_real(6.)*ex6 + pow(ex6,2)) + dd_real(15.)*pow(ex3,2)*(dd_real(4.)*ex4*(-dd_real(2.) + ex6) + dd_real(3.)*(dd_real(7.) - dd_real(8.)*ex6 + dd_real(2.)*pow(ex6,2)))) + pow(ex2,3)*ex4*(-dd_real(1.)*pow(-dd_real(1.) + ex6,2) + ex3*(dd_real(49.) - dd_real(90.)*ex6 + dd_real(47.)*pow(ex6,2) - dd_real(6.)*pow(ex6,3) - dd_real(4.)*ex4*(dd_real(6.) - dd_real(6.)*ex6 + pow(ex6,2))) + dd_real(5.)*pow(ex3,2)*(-dd_real(35.) + dd_real(60.)*ex6 - dd_real(30.)*pow(ex6,2) + dd_real(4.)*pow(ex6,3) + dd_real(6.)*ex4*(dd_real(5.) - dd_real(5.)*ex6 + pow(ex6,2))) + pow(ex3,4)*(ex4*(dd_real(6.) - dd_real(6.)*ex6 + pow(ex6,2)) - dd_real(2.)*(dd_real(2.) - dd_real(3.)*ex6 + pow(ex6,2))) + pow(ex3,3)*(dd_real(91.) - dd_real(146.)*ex6 + dd_real(64.)*pow(ex6,2) - dd_real(6.)*pow(ex6,3) - dd_real(3.)*ex4*(dd_real(36.) - dd_real(36.)*ex6 + dd_real(7.)*pow(ex6,2)))) + pow(ex2,4)*ex3*(-dd_real(1.)*pow(ex3,3)*(dd_real(1.) + dd_real(2.)*ex4*(-dd_real(2.) + ex6) - dd_real(1.)*ex6)*(-dd_real(1.) + ex6) + (-dd_real(1.) + ex6)*(dd_real(7.) + dd_real(5.)*ex4*(-dd_real(2.) + ex6) - dd_real(10.)*ex6 + dd_real(3.)*pow(ex6,2)) - dd_real(3.)*pow(ex3,2)*(dd_real(7.) - dd_real(15.)*ex6 + dd_real(10.)*pow(ex6,2) - dd_real(2.)*pow(ex6,3) + ex4*(-dd_real(22.) + dd_real(33.)*ex6 - dd_real(13.)*pow(ex6,2) + pow(ex6,3))) + ex3*(dd_real(35.) - dd_real(80.)*ex6 + dd_real(60.)*pow(ex6,2) - dd_real(16.)*pow(ex6,3) + pow(ex6,4) + dd_real(4.)*ex4*(-dd_real(20.) + dd_real(30.)*ex6 - dd_real(12.)*pow(ex6,2) + pow(ex6,3))));
return res;
}
