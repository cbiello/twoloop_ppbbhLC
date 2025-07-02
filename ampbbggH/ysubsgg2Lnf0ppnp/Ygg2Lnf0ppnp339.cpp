#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp339(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,7)*pow(ex3,2) + pow(dd_real(1.) + ex3,2)*pow(ex4,3)*(ex4 - dd_real(1.)*ex6) + pow(ex2,6)*ex3*(dd_real(3.) - dd_real(3.)*ex6 + ex3*(dd_real(3.) - dd_real(4.)*ex4 + ex6)) + ex2*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(4.)*pow(ex4,2) + ex6*(dd_real(3.) + ex6) - dd_real(1.)*ex4*(dd_real(4.) + dd_real(5.)*ex6)) + pow(ex2,5)*(dd_real(2.) + dd_real(2.)*pow(ex4,2) + dd_real(2.)*ex4*(-dd_real(2.) + ex6) - dd_real(1.)*ex6 + ex3*(dd_real(5.) + dd_real(8.)*pow(ex4,2) - dd_real(1.)*ex6 - dd_real(2.)*pow(ex6,2) + ex4*(-dd_real(13.) + dd_real(2.)*ex6)) + pow(ex3,2)*(dd_real(3.) + dd_real(10.)*pow(ex4,2) + dd_real(3.)*ex6 + pow(ex6,2) - dd_real(1.)*ex4*(dd_real(12.) + dd_real(7.)*ex6))) + pow(ex2,2)*(dd_real(1.) + ex3)*ex4*(dd_real(5.)*(dd_real(1.) + ex3)*pow(ex4,3) - dd_real(1.)*ex6*(dd_real(3.) + ex3*(dd_real(3.) + dd_real(2.)*ex6)) - dd_real(1.)*pow(ex4,2)*(dd_real(7.)*(dd_real(2.) + ex6) + ex3*(dd_real(16.) + dd_real(7.)*ex6)) + ex4*(dd_real(6.) + dd_real(11.)*ex6 + dd_real(2.)*pow(ex6,2) + ex3*(dd_real(6.) + dd_real(15.)*ex6 + dd_real(2.)*pow(ex6,2)))) + pow(ex2,4)*(dd_real(1.) - dd_real(4.)*pow(ex4,3) + dd_real(2.)*ex6 - dd_real(1.)*pow(ex6,2) + pow(ex4,2)*(dd_real(13.) + ex6) + ex4*(-dd_real(10.) - dd_real(1.)*ex6 + dd_real(2.)*pow(ex6,2)) + ex3*(dd_real(2.) - dd_real(12.)*pow(ex4,3) + dd_real(4.)*ex6 - dd_real(2.)*pow(ex6,2) + dd_real(2.)*pow(ex4,2)*(dd_real(17.) + dd_real(5.)*ex6) - dd_real(1.)*ex4*(dd_real(21.) + dd_real(10.)*ex6)) + pow(ex3,2)*(dd_real(1.) - dd_real(8.)*pow(ex4,3) + dd_real(3.)*ex6 + dd_real(2.)*pow(ex6,2) + pow(ex4,2)*(dd_real(26.) + dd_real(9.)*ex6) - dd_real(1.)*ex4*(dd_real(12.) + dd_real(17.)*ex6 + dd_real(2.)*pow(ex6,2)))) + pow(ex2,3)*(dd_real(2.)*pow(dd_real(1.) + ex3,2)*pow(ex4,4) + ex6*(dd_real(1.) + dd_real(2.)*ex3 + pow(ex3,2)*(dd_real(1.) + ex6)) - dd_real(1.)*(dd_real(1.) + ex3)*pow(ex4,3)*(dd_real(14.) + dd_real(3.)*ex6 + ex3*(dd_real(20.) + dd_real(3.)*ex6)) + pow(ex4,2)*(dd_real(18.) + dd_real(9.)*ex6 + pow(ex6,2) + dd_real(2.)*ex3*(dd_real(19.) + dd_real(15.)*ex6 + pow(ex6,2)) + pow(ex3,2)*(dd_real(22.) + dd_real(21.)*ex6 + pow(ex6,2))) - dd_real(1.)*ex4*(dd_real(4.) + dd_real(8.)*ex6 - dd_real(2.)*pow(ex6,2) + dd_real(2.)*ex3*(dd_real(4.) + dd_real(9.)*ex6 + pow(ex6,2)) + pow(ex3,2)*(dd_real(4.) + dd_real(13.)*ex6 + dd_real(4.)*pow(ex6,2))));
return res;
}
